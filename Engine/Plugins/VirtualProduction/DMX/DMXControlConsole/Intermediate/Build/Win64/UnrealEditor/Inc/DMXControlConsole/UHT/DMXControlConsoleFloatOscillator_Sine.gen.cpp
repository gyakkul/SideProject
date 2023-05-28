// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Oscillators/DMXControlConsoleFloatOscillator_Sine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleFloatOscillator_Sine() {}
// Cross Module References
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleFloatOscillator_Sine::StaticRegisterNativesUDMXControlConsoleFloatOscillator_Sine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleFloatOscillator_Sine);
	UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_NoRegister()
	{
		return UDMXControlConsoleFloatOscillator_Sine::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyHz_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXControlConsoleFloatOscillator,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Generates DMX Signals in a Sine Pattern */" },
		{ "DisplayName", "Sine Wave" },
		{ "IncludePath", "Oscillators/DMXControlConsoleFloatOscillator_Sine.h" },
		{ "ModuleRelativePath", "Private/Oscillators/DMXControlConsoleFloatOscillator_Sine.h" },
		{ "ToolTip", "Generates DMX Signals in a Sine Pattern" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_FrequencyHz_MetaData[] = {
		{ "Category", "Sine Wave Oscillator" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The frequency of the sine wave, in Hz */" },
		{ "ModuleRelativePath", "Private/Oscillators/DMXControlConsoleFloatOscillator_Sine.h" },
		{ "ToolTip", "The frequency of the sine wave, in Hz" },
		{ "UIMax", "120" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFloatOscillator_Sine, FrequencyHz), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_FrequencyHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_FrequencyHz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Sine Wave Oscillator" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amplitude of the sine wave, in the range [0, 1] */" },
		{ "ModuleRelativePath", "Private/Oscillators/DMXControlConsoleFloatOscillator_Sine.h" },
		{ "ToolTip", "The amplitude of the sine wave, in the range [0, 1]" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFloatOscillator_Sine, Amplitude), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Sine Wave Oscillator" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The offset of the sine wave, in the range [0, 1] */" },
		{ "ModuleRelativePath", "Private/Oscillators/DMXControlConsoleFloatOscillator_Sine.h" },
		{ "ToolTip", "The offset of the sine wave, in the range [0, 1]" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFloatOscillator_Sine, Offset), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_FrequencyHz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::NewProp_Offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleFloatOscillator_Sine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::ClassParams = {
		&UDMXControlConsoleFloatOscillator_Sine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleFloatOscillator_Sine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleFloatOscillator_Sine.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleFloatOscillator_Sine.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleFloatOscillator_Sine>()
	{
		return UDMXControlConsoleFloatOscillator_Sine::StaticClass();
	}
	UDMXControlConsoleFloatOscillator_Sine::UDMXControlConsoleFloatOscillator_Sine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleFloatOscillator_Sine);
	UDMXControlConsoleFloatOscillator_Sine::~UDMXControlConsoleFloatOscillator_Sine() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_Oscillators_DMXControlConsoleFloatOscillator_Sine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_Oscillators_DMXControlConsoleFloatOscillator_Sine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Sine, UDMXControlConsoleFloatOscillator_Sine::StaticClass, TEXT("UDMXControlConsoleFloatOscillator_Sine"), &Z_Registration_Info_UClass_UDMXControlConsoleFloatOscillator_Sine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleFloatOscillator_Sine), 27271982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_Oscillators_DMXControlConsoleFloatOscillator_Sine_h_916508824(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_Oscillators_DMXControlConsoleFloatOscillator_Sine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_Oscillators_DMXControlConsoleFloatOscillator_Sine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
