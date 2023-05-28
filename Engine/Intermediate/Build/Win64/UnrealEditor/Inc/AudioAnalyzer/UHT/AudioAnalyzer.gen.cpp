// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzer() {}
// Cross Module References
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer_NoRegister();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSettings();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioAnalyzer();
// End Cross Module References
	void UAudioAnalyzerSettings::StaticRegisterNativesUAudioAnalyzerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzerSettings);
	UClass* Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister()
	{
		return UAudioAnalyzerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioAnalyzerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioAnalyzerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioAnalyzerSettings\n *\n * UAudioAnalyzerSettings provides a way to store and reuse existing analyzer settings\n * across multiple analyzers. \n *\n */" },
		{ "IncludePath", "AudioAnalyzer.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "UAudioAnalyzerSettings\n\nUAudioAnalyzerSettings provides a way to store and reuse existing analyzer settings\nacross multiple analyzers." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioAnalyzerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerSettings_Statics::ClassParams = {
		&UAudioAnalyzerSettings::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioAnalyzerSettings()
	{
		if (!Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton, Z_Construct_UClass_UAudioAnalyzerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton;
	}
	template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerSettings>()
	{
		return UAudioAnalyzerSettings::StaticClass();
	}
	UAudioAnalyzerSettings::UAudioAnalyzerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerSettings);
	UAudioAnalyzerSettings::~UAudioAnalyzerSettings() {}
	DEFINE_FUNCTION(UAudioAnalyzer::execStopAnalyzing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnalyzing(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzer::execStartAnalyzing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAudioBus,Z_Param_AudioBusToAnalyze);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAnalyzing(Z_Param_WorldContextObject,Z_Param_AudioBusToAnalyze);
		P_NATIVE_END;
	}
	void UAudioAnalyzer::StaticRegisterNativesUAudioAnalyzer()
	{
		UClass* Class = UAudioAnalyzer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAnalyzing", &UAudioAnalyzer::execStartAnalyzing },
			{ "StopAnalyzing", &UAudioAnalyzer::execStopAnalyzing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics
	{
		struct AudioAnalyzer_eventStartAnalyzing_Parms
		{
			const UObject* WorldContextObject;
			UAudioBus* AudioBusToAnalyze;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBusToAnalyze;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioAnalyzer_eventStartAnalyzing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_AudioBusToAnalyze = { "AudioBusToAnalyze", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioAnalyzer_eventStartAnalyzing_Parms, AudioBusToAnalyze), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_AudioBusToAnalyze,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Starts analyzing audio from the given audio bus. Optionally override the audio bus desired to analyze. */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "Starts analyzing audio from the given audio bus. Optionally override the audio bus desired to analyze." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzer, nullptr, "StartAnalyzing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::AudioAnalyzer_eventStartAnalyzing_Parms), Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics
	{
		struct AudioAnalyzer_eventStopAnalyzing_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioAnalyzer_eventStopAnalyzing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Stops analyzing audio. */" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "Stops analyzing audio." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzer, nullptr, "StopAnalyzing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::AudioAnalyzer_eventStopAnalyzing_Parms), Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzer);
	UClass* Z_Construct_UClass_UAudioAnalyzer_NoRegister()
	{
		return UAudioAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UAudioAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioAnalyzerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioAnalyzerSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioAnalyzer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing, "StartAnalyzing" }, // 1967624761
		{ &Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing, "StopAnalyzing" }, // 878479242
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioAnalyzer\n *\n * UAudioAnalyzer performs analysis on an audio bus using specific settings and exposes the results via blueprints.\n *\n * Subclasses of UAudioAnalyzer must implement GetAnalyzerFactoryName() to associate\n * the UAudioAnalyzer asset with an IAudioAnalyzerFactory implementation.\n *\n * To support blueprint access, subclasses can implement UFUNCTIONs to expose the data\n * returned by GetResult().\n */" },
		{ "IncludePath", "AudioAnalyzer.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "UAudioAnalyzer\n\nUAudioAnalyzer performs analysis on an audio bus using specific settings and exposes the results via blueprints.\n\nSubclasses of UAudioAnalyzer must implement GetAnalyzerFactoryName() to associate\nthe UAudioAnalyzer asset with an IAudioAnalyzerFactory implementation.\n\nTo support blueprint access, subclasses can implement UFUNCTIONs to expose the data\nreturned by GetResult()." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioBus_MetaData[] = {
		{ "Comment", "/** The UAudioBus which is analyzed in real-time. */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "The UAudioBus which is analyzed in real-time." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioAnalyzer, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioAnalyzerSubsystem_MetaData[] = {
		{ "Comment", "// Audio analysis subsystem used with this audio analyzer\n" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "Audio analysis subsystem used with this audio analyzer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioAnalyzerSubsystem = { "AudioAnalyzerSubsystem", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioAnalyzer, AudioAnalyzerSubsystem), Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioAnalyzerSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioAnalyzerSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioAnalyzer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioAnalyzerSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzer_Statics::ClassParams = {
		&UAudioAnalyzer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioAnalyzer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzer_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioAnalyzer()
	{
		if (!Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton, Z_Construct_UClass_UAudioAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton;
	}
	template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzer>()
	{
		return UAudioAnalyzer::StaticClass();
	}
	UAudioAnalyzer::UAudioAnalyzer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzer);
	UAudioAnalyzer::~UAudioAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioAnalyzerSettings, UAudioAnalyzerSettings::StaticClass, TEXT("UAudioAnalyzerSettings"), &Z_Registration_Info_UClass_UAudioAnalyzerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzerSettings), 3521523458U) },
		{ Z_Construct_UClass_UAudioAnalyzer, UAudioAnalyzer::StaticClass, TEXT("UAudioAnalyzer"), &Z_Registration_Info_UClass_UAudioAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzer), 1294102688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_931500331(TEXT("/Script/AudioAnalyzer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
