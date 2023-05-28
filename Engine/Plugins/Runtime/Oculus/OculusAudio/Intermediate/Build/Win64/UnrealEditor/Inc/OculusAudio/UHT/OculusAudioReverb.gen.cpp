// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusAudioReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusAudioReverb() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_NoRegister();
	OCULUSAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings();
	UPackage* Z_Construct_UPackage__Script_OculusAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectOculusReverbPluginSettings;
class UScriptStruct* FSubmixEffectOculusReverbPluginSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectOculusReverbPluginSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectOculusReverbPluginSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings, (UObject*)Z_Construct_UPackage__Script_OculusAudio(), TEXT("SubmixEffectOculusReverbPluginSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectOculusReverbPluginSettings.OuterSingleton;
}
template<> OCULUSAUDIO_API UScriptStruct* StaticStruct<FSubmixEffectOculusReverbPluginSettings>()
{
	return FSubmixEffectOculusReverbPluginSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OculusAudioReverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectOculusReverbPluginSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
		nullptr,
		&NewStructOps,
		"SubmixEffectOculusReverbPluginSettings",
		sizeof(FSubmixEffectOculusReverbPluginSettings),
		alignof(FSubmixEffectOculusReverbPluginSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectOculusReverbPluginSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectOculusReverbPluginSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectOculusReverbPluginSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectOculusReverbPluginPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectOculusReverbPluginSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectOculusReverbPluginPreset::StaticRegisterNativesUSubmixEffectOculusReverbPluginPreset()
	{
		UClass* Class = USubmixEffectOculusReverbPluginPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectOculusReverbPluginPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics
	{
		struct SubmixEffectOculusReverbPluginPreset_eventSetSettings_Parms
		{
			FSubmixEffectOculusReverbPluginSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectOculusReverbPluginPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1159958086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OculusAudioReverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::SubmixEffectOculusReverbPluginPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectOculusReverbPluginPreset);
	UClass* Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_NoRegister()
	{
		return USubmixEffectOculusReverbPluginPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectOculusReverbPluginPreset_SetSettings, "SetSettings" }, // 2753344039
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "OculusAudioReverb.h" },
		{ "ModuleRelativePath", "Private/OculusAudioReverb.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusAudioReverb.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectOculusReverbPluginPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::NewProp_Settings_MetaData)) }; // 1159958086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectOculusReverbPluginPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::ClassParams = {
		&USubmixEffectOculusReverbPluginPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectOculusReverbPluginPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectOculusReverbPluginPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectOculusReverbPluginPreset.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UClass* StaticClass<USubmixEffectOculusReverbPluginPreset>()
	{
		return USubmixEffectOculusReverbPluginPreset::StaticClass();
	}
	USubmixEffectOculusReverbPluginPreset::USubmixEffectOculusReverbPluginPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectOculusReverbPluginPreset);
	USubmixEffectOculusReverbPluginPreset::~USubmixEffectOculusReverbPluginPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioReverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioReverb_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectOculusReverbPluginSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectOculusReverbPluginSettings_Statics::NewStructOps, TEXT("SubmixEffectOculusReverbPluginSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectOculusReverbPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectOculusReverbPluginSettings), 1159958086U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectOculusReverbPluginPreset, USubmixEffectOculusReverbPluginPreset::StaticClass, TEXT("USubmixEffectOculusReverbPluginPreset"), &Z_Registration_Info_UClass_USubmixEffectOculusReverbPluginPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectOculusReverbPluginPreset), 560706999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioReverb_h_3272801938(TEXT("/Script/OculusAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioReverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioReverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
