// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectConvolutionReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectConvolutionReverb() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings;
class UScriptStruct* FSourceEffectConvolutionReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectConvolutionReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectConvolutionReverbSettings>()
{
	return FSourceEffectConvolutionReverbSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationVolumeDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationVolumeDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetVolumeDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetVolumeDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryVolumeDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryVolumeDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectConvolutionReverbSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData[] = {
		{ "Comment", "/* Used to account for energy added by convolution with \"loud\" Impulse Responses. \n\x09 * This value is not directly editable in the editor because it is copied from the \n\x09 * associated UAudioImpulseResponse. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Used to account for energy added by convolution with \"loud\" Impulse Responses.\n       * This value is not directly editable in the editor because it is copied from the\n       * associated UAudioImpulseResponse." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb = { "NormalizationVolumeDb", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectConvolutionReverbSettings, NormalizationVolumeDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Controls how much of the wet signal is mixed into the output, in Decibels\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Controls how much of the wet signal is mixed into the output, in Decibels" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb = { "WetVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectConvolutionReverbSettings, WetVolumeDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Controls how much of the dry signal is mixed into the output, in Decibels\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Controls how much of the dry signal is mixed into the output, in Decibels" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb = { "DryVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectConvolutionReverbSettings, DryVolumeDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/* If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSourceEffectConvolutionReverbSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSourceEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectConvolutionReverbSettings",
		sizeof(FSourceEffectConvolutionReverbSettings),
		alignof(FSourceEffectConvolutionReverbSettings),
		Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectConvolutionReverbPreset::execSetImpulseResponse)
	{
		P_GET_OBJECT(UAudioImpulseResponse,Z_Param_InImpulseResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImpulseResponse(Z_Param_InImpulseResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectConvolutionReverbPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectConvolutionReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectConvolutionReverbPreset::StaticRegisterNativesUSourceEffectConvolutionReverbPreset()
	{
		UClass* Class = USourceEffectConvolutionReverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetImpulseResponse", &USourceEffectConvolutionReverbPreset::execSetImpulseResponse },
			{ "SetSettings", &USourceEffectConvolutionReverbPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics
	{
		struct SourceEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms
		{
			UAudioImpulseResponse* InImpulseResponse;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InImpulseResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse = { "InImpulseResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms, InImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb impulse response */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb impulse response" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectConvolutionReverbPreset, nullptr, "SetImpulseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::SourceEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms), Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics
	{
		struct SourceEffectConvolutionReverbPreset_eventSetSettings_Parms
		{
			FSourceEffectConvolutionReverbSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectConvolutionReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1941573878
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb settings */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectConvolutionReverbPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::SourceEffectConvolutionReverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectConvolutionReverbPreset);
	UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset_NoRegister()
	{
		return USourceEffectConvolutionReverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImpulseResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardwareAcceleration_MetaData[];
#endif
		static void NewProp_bEnableHardwareAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardwareAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetImpulseResponse, "SetImpulseResponse" }, // 470770457
		{ &Z_Construct_UFunction_USourceEffectConvolutionReverbPreset_SetSettings, "SetSettings" }, // 3226009242
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData[] = {
		{ "BlueprintSetter", "SetImpulseResponse" },
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/** The impulse response used for convolution. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "The impulse response used for convolution." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectConvolutionReverbPreset, ImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetSettings" },
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/** ConvolutionReverbPreset Preset Settings. */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "ConvolutionReverbPreset Preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectConvolutionReverbPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData)) }; // 1941573878
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData[] = {
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/** Set the internal block size. This can effect latency and performance. Higher values will result in\n\x09 * lower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\n\x09 * on the interplay between audio engines buffer sizes and this effects block size. Generally, higher\n\x09 * values result in higher latency, and lower values result in lower latency. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the internal block size. This can effect latency and performance. Higher values will result in\nlower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\non the interplay between audio engines buffer sizes and this effects block size. Generally, higher\nvalues result in higher latency, and lower values result in lower latency." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectConvolutionReverbPreset, BlockSize), Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize, METADATA_PARAMS(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData)) }; // 3963133211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData[] = {
		{ "Category", "SourceEffectPreset" },
		{ "Comment", "/** Opt into hardware acceleration of the convolution reverb (if available) */" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectConvolutionReverb.h" },
		{ "ToolTip", "Opt into hardware acceleration of the convolution reverb (if available)" },
	};
#endif
	void Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit(void* Obj)
	{
		((USourceEffectConvolutionReverbPreset*)Obj)->bEnableHardwareAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration = { "bEnableHardwareAcceleration", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USourceEffectConvolutionReverbPreset), &Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_BlockSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectConvolutionReverbPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::ClassParams = {
		&USourceEffectConvolutionReverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectConvolutionReverbPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton, Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectConvolutionReverbPreset>()
	{
		return USourceEffectConvolutionReverbPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectConvolutionReverbPreset);
	USourceEffectConvolutionReverbPreset::~USourceEffectConvolutionReverbPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectConvolutionReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics::NewStructOps, TEXT("SourceEffectConvolutionReverbSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectConvolutionReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectConvolutionReverbSettings), 1941573878U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectConvolutionReverbPreset, USourceEffectConvolutionReverbPreset::StaticClass, TEXT("USourceEffectConvolutionReverbPreset"), &Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectConvolutionReverbPreset), 1720226339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_2271261657(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
