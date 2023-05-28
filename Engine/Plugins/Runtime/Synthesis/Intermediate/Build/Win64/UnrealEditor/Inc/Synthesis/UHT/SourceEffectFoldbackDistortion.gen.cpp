// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectFoldbackDistortion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectFoldbackDistortion() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectFoldbackDistortionSettings;
class UScriptStruct* FSourceEffectFoldbackDistortionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectFoldbackDistortionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectFoldbackDistortionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectFoldbackDistortionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectFoldbackDistortionSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectFoldbackDistortionSettings>()
{
	return FSourceEffectFoldbackDistortionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectFoldbackDistortionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of gain to add to input to allow forcing the triggering of the threshold\n" },
		{ "DisplayName", "Input Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
		{ "ToolTip", "The amount of gain to add to input to allow forcing the triggering of the threshold" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectFoldbackDistortionSettings, InputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "// If the audio amplitude is higher than this, it will fold back\n" },
		{ "DisplayName", "Threshold (dB)" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
		{ "ToolTip", "If the audio amplitude is higher than this, it will fold back" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectFoldbackDistortionSettings, ThresholdDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "// The amount of gain to apply to the output\n" },
		{ "DisplayName", "Output Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
		{ "ToolTip", "The amount of gain to apply to the output" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectFoldbackDistortionSettings, OutputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_InputGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_ThresholdDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewProp_OutputGainDb,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectFoldbackDistortionSettings",
		sizeof(FSourceEffectFoldbackDistortionSettings),
		alignof(FSourceEffectFoldbackDistortionSettings),
		Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectFoldbackDistortionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectFoldbackDistortionSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectFoldbackDistortionSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectFoldbackDistortionPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectFoldbackDistortionSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectFoldbackDistortionPreset::StaticRegisterNativesUSourceEffectFoldbackDistortionPreset()
	{
		UClass* Class = USourceEffectFoldbackDistortionPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectFoldbackDistortionPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics
	{
		struct SourceEffectFoldbackDistortionPreset_eventSetSettings_Parms
		{
			FSourceEffectFoldbackDistortionSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectFoldbackDistortionPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3315928133
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectFoldbackDistortionPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::SourceEffectFoldbackDistortionPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectFoldbackDistortionPreset);
	UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister()
	{
		return USourceEffectFoldbackDistortionPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectFoldbackDistortionPreset_SetSettings, "SetSettings" }, // 3094756718
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectFoldbackDistortion.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectFoldbackDistortion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectFoldbackDistortionPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings_MetaData)) }; // 3315928133
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectFoldbackDistortionPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::ClassParams = {
		&USourceEffectFoldbackDistortionPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.OuterSingleton, Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectFoldbackDistortionPreset>()
	{
		return USourceEffectFoldbackDistortionPreset::StaticClass();
	}
	USourceEffectFoldbackDistortionPreset::USourceEffectFoldbackDistortionPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectFoldbackDistortionPreset);
	USourceEffectFoldbackDistortionPreset::~USourceEffectFoldbackDistortionPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectFoldbackDistortionSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics::NewStructOps, TEXT("SourceEffectFoldbackDistortionSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectFoldbackDistortionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectFoldbackDistortionSettings), 3315928133U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectFoldbackDistortionPreset, USourceEffectFoldbackDistortionPreset::StaticClass, TEXT("USourceEffectFoldbackDistortionPreset"), &Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectFoldbackDistortionPreset), 1749958284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_3026488510(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
