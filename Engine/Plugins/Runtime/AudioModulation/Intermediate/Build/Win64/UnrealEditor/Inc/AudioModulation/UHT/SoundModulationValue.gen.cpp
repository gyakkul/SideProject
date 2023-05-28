// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundModulationValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationValue() {}
// Cross Module References
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationMixValue();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundModulationMixValue;
class UScriptStruct* FSoundModulationMixValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationMixValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundModulationMixValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationMixValue, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("SoundModulationMixValue"));
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationMixValue.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FSoundModulationMixValue>()
{
	return FSoundModulationMixValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUnitValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetUnitValue;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundModulationValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationMixValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Target value of the modulator. */" },
		{ "DisplayName", "Value" },
		{ "ModuleRelativePath", "Public/SoundModulationValue.h" },
		{ "ToolTip", "Target value of the modulator." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationMixValue, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetUnitValue_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Target value of the modulator (in units if provided). */" },
		{ "ModuleRelativePath", "Public/SoundModulationValue.h" },
		{ "ToolTip", "Target value of the modulator (in units if provided)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetUnitValue = { "TargetUnitValue", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationMixValue, TargetUnitValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetUnitValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetUnitValue_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time it takes (in sec) to interpolate from the parameter's default value to the mix value. */" },
		{ "DisplayName", "Attack Time (sec)" },
		{ "ModuleRelativePath", "Public/SoundModulationValue.h" },
		{ "ToolTip", "Time it takes (in sec) to interpolate from the parameter's default value to the mix value." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationMixValue, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Time it takes (in sec) to interpolate from the current mix value to the parameter's default value. */" },
		{ "DisplayName", "Release Time (sec)" },
		{ "ModuleRelativePath", "Public/SoundModulationValue.h" },
		{ "ToolTip", "Time it takes (in sec) to interpolate from the current mix value to the parameter's default value." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationMixValue, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_ReleaseTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetValue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_TargetUnitValue,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewProp_ReleaseTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		&NewStructOps,
		"SoundModulationMixValue",
		sizeof(FSoundModulationMixValue),
		alignof(FSoundModulationMixValue),
		Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationMixValue()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundModulationMixValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundModulationMixValue.InnerSingleton, Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundModulationMixValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationValue_h_Statics::ScriptStructInfo[] = {
		{ FSoundModulationMixValue::StaticStruct, Z_Construct_UScriptStruct_FSoundModulationMixValue_Statics::NewStructOps, TEXT("SoundModulationMixValue"), &Z_Registration_Info_UScriptStruct_SoundModulationMixValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundModulationMixValue), 2821498296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationValue_h_844740406(TEXT("/Script/AudioModulation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
