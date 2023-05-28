// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/AudioEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioEffect() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioEffectParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioReverbEffect();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAudioReverbEffect>() == std::is_polymorphic<FAudioEffectParameters>(), "USTRUCT FAudioReverbEffect cannot be polymorphic unless super FAudioEffectParameters is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioReverbEffect;
class UScriptStruct* FAudioReverbEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioReverbEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioReverbEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioReverbEffect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioReverbEffect"));
	}
	return Z_Registration_Info_UScriptStruct_AudioReverbEffect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioReverbEffect>()
{
	return FAudioReverbEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioReverbEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioReverbEffect>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAudioEffectParameters,
		&NewStructOps,
		"AudioReverbEffect",
		sizeof(FAudioReverbEffect),
		alignof(FAudioReverbEffect),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioReverbEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioReverbEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioReverbEffect.InnerSingleton, Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioReverbEffect.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_Statics::ScriptStructInfo[] = {
		{ FAudioReverbEffect::StaticStruct, Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::NewStructOps, TEXT("AudioReverbEffect"), &Z_Registration_Info_UScriptStruct_AudioReverbEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioReverbEffect), 1672485114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_1826423409(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
