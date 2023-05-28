// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SynthComponents/SynthComponentToneGenerator.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentToneGenerator() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentToneGenerator();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentToneGenerator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	DEFINE_FUNCTION(USynthComponentToneGenerator::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponentToneGenerator::execSetFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequency(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	void USynthComponentToneGenerator::StaticRegisterNativesUSynthComponentToneGenerator()
	{
		UClass* Class = USynthComponentToneGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFrequency", &USynthComponentToneGenerator::execSetFrequency },
			{ "SetVolume", &USynthComponentToneGenerator::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics
	{
		struct SynthComponentToneGenerator_eventSetFrequency_Parms
		{
			float InFrequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponentToneGenerator_eventSetFrequency_Parms, InFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::NewProp_InFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tone Generator" },
		{ "Comment", "// Sets the frequency of the tone generator\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "Sets the frequency of the tone generator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentToneGenerator, nullptr, "SetFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::SynthComponentToneGenerator_eventSetFrequency_Parms), Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics
	{
		struct SynthComponentToneGenerator_eventSetVolume_Parms
		{
			float InVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponentToneGenerator_eventSetVolume_Parms, InVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tone Generator" },
		{ "Comment", "// Sets the volume of the tone generator\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "Sets the volume of the tone generator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentToneGenerator, nullptr, "SetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::SynthComponentToneGenerator_eventSetVolume_Parms), Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthComponentToneGenerator);
	UClass* Z_Construct_UClass_USynthComponentToneGenerator_NoRegister()
	{
		return USynthComponentToneGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USynthComponentToneGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAttenuationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceAttenuationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDbAtMaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationDbAtMaxRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthComponentToneGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthComponentToneGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponentToneGenerator_SetFrequency, "SetFrequency" }, // 1119653692
		{ &Z_Construct_UFunction_USynthComponentToneGenerator_SetVolume, "SetVolume" }, // 428702569
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentToneGenerator.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Tone Generator" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// The frequency (in hz) of the tone generator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "The frequency (in hz) of the tone generator." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponentToneGenerator, Frequency), METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Tone Generator" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The linear volume of the tone generator.\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "The linear volume of the tone generator." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponentToneGenerator, Volume), METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceAttenuationCurve_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/* A distance attenuation curve to use to attenuate the audio. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "A distance attenuation curve to use to attenuate the audio." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceAttenuationCurve = { "DistanceAttenuationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponentToneGenerator, DistanceAttenuationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceAttenuationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceAttenuationCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceRange_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/* A distance range over which to apply distance attenuation using the supplied curve. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "A distance range over which to apply distance attenuation using the supplied curve." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceRange = { "DistanceRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponentToneGenerator, DistanceRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_AttenuationDbAtMaxRange_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/* An attenuation, in decibels, to apply to the sound at max range. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentToneGenerator.h" },
		{ "ToolTip", "An attenuation, in decibels, to apply to the sound at max range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_AttenuationDbAtMaxRange = { "AttenuationDbAtMaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponentToneGenerator, AttenuationDbAtMaxRange), METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_AttenuationDbAtMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_AttenuationDbAtMaxRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceAttenuationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_DistanceRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentToneGenerator_Statics::NewProp_AttenuationDbAtMaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthComponentToneGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponentToneGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthComponentToneGenerator_Statics::ClassParams = {
		&USynthComponentToneGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USynthComponentToneGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentToneGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthComponentToneGenerator()
	{
		if (!Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton, Z_Construct_UClass_USynthComponentToneGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USynthComponentToneGenerator.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USynthComponentToneGenerator>()
	{
		return USynthComponentToneGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponentToneGenerator);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USynthComponentToneGenerator, USynthComponentToneGenerator::StaticClass, TEXT("USynthComponentToneGenerator"), &Z_Registration_Info_UClass_USynthComponentToneGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthComponentToneGenerator), 3464596863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_3584833167(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
