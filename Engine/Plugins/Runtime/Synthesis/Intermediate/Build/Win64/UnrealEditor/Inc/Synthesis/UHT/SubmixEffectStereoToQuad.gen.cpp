// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixEffects/SubmixEffectStereoToQuad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectStereoToQuad() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoToQuadPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoToQuadPreset_NoRegister();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectStereoToQuadSettings;
class UScriptStruct* FSubmixEffectStereoToQuadSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectStereoToQuadSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectStereoToQuadSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectStereoToQuadSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectStereoToQuadSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectStereoToQuadSettings>()
{
	return FSubmixEffectStereoToQuadSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipChannels_MetaData[];
#endif
		static void NewProp_bFlipChannels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RearChannelGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RearChannelGain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoToQuad.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectStereoToQuadSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_bFlipChannels_MetaData[] = {
		{ "Category", "StereoToQuad" },
		{ "Comment", "// Whether or not to flip the left and right input channels when sending to the rear channel.\n// This can be useful to have a stereo field when hearing audio to the left and right in surround output configuration.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoToQuad.h" },
		{ "ToolTip", "Whether or not to flip the left and right input channels when sending to the rear channel.\nThis can be useful to have a stereo field when hearing audio to the left and right in surround output configuration." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_bFlipChannels_SetBit(void* Obj)
	{
		((FSubmixEffectStereoToQuadSettings*)Obj)->bFlipChannels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_bFlipChannels = { "bFlipChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubmixEffectStereoToQuadSettings), &Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_bFlipChannels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_bFlipChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_bFlipChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_RearChannelGain_MetaData[] = {
		{ "Category", "StereoToQuad" },
		{ "Comment", "// The gain (in decibels) of the rear channels\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoToQuad.h" },
		{ "ToolTip", "The gain (in decibels) of the rear channels" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_RearChannelGain = { "RearChannelGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoToQuadSettings, RearChannelGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_RearChannelGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_RearChannelGain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_bFlipChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewProp_RearChannelGain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectStereoToQuadSettings",
		sizeof(FSubmixEffectStereoToQuadSettings),
		alignof(FSubmixEffectStereoToQuadSettings),
		Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectStereoToQuadSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectStereoToQuadSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectStereoToQuadSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectStereoToQuadPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectStereoToQuadSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectStereoToQuadPreset::StaticRegisterNativesUSubmixEffectStereoToQuadPreset()
	{
		UClass* Class = USubmixEffectStereoToQuadPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectStereoToQuadPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics
	{
		struct SubmixEffectStereoToQuadPreset_eventSetSettings_Parms
		{
			FSubmixEffectStereoToQuadSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectStereoToQuadPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 4138802999
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set all tap delay settings. This will replace any dynamically added or modified taps.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoToQuad.h" },
		{ "ToolTip", "Set all tap delay settings. This will replace any dynamically added or modified taps." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectStereoToQuadPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::SubmixEffectStereoToQuadPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectStereoToQuadPreset);
	UClass* Z_Construct_UClass_USubmixEffectStereoToQuadPreset_NoRegister()
	{
		return USubmixEffectStereoToQuadPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectStereoToQuadPreset_SetSettings, "SetSettings" }, // 3912974166
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Submix effect which sends stereo audio to quad (left surround and right surround) if the channel count is greater than 2.\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectStereoToQuad.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoToQuad.h" },
		{ "ToolTip", "Submix effect which sends stereo audio to quad (left surround and right surround) if the channel count is greater than 2." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoToQuad.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectStereoToQuadPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::NewProp_Settings_MetaData)) }; // 4138802999
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectStereoToQuadPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::ClassParams = {
		&USubmixEffectStereoToQuadPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectStereoToQuadPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectStereoToQuadPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectStereoToQuadPreset>()
	{
		return USubmixEffectStereoToQuadPreset::StaticClass();
	}
	USubmixEffectStereoToQuadPreset::USubmixEffectStereoToQuadPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectStereoToQuadPreset);
	USubmixEffectStereoToQuadPreset::~USubmixEffectStereoToQuadPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectStereoToQuadSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectStereoToQuadSettings_Statics::NewStructOps, TEXT("SubmixEffectStereoToQuadSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectStereoToQuadSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectStereoToQuadSettings), 4138802999U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectStereoToQuadPreset, USubmixEffectStereoToQuadPreset::StaticClass, TEXT("USubmixEffectStereoToQuadPreset"), &Z_Registration_Info_UClass_USubmixEffectStereoToQuadPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectStereoToQuadPreset), 2903416310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_775126917(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoToQuad_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
