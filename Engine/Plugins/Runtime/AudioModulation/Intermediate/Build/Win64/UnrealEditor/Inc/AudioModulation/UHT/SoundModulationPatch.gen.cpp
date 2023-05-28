// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundModulationPatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationPatch() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameter_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationPatch();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationPatch_NoRegister();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundControlModulationInput();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundControlModulationPatch();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationTransform();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
	WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FSoundModulationTransform>() == std::is_polymorphic<FWaveTableTransform>(), "USTRUCT FSoundModulationTransform cannot be polymorphic unless super FWaveTableTransform is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundModulationTransform;
class UScriptStruct* FSoundModulationTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundModulationTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationTransform, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("SoundModulationTransform"));
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationTransform.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FSoundModulationTransform>()
{
	return FSoundModulationTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundModulationTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulationTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationTransform>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		Z_Construct_UScriptStruct_FWaveTableTransform,
		&NewStructOps,
		"SoundModulationTransform",
		sizeof(FSoundModulationTransform),
		alignof(FSoundModulationTransform),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundModulationTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundModulationTransform.InnerSingleton, Z_Construct_UScriptStruct_FSoundModulationTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundModulationTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundControlModulationInput;
class UScriptStruct* FSoundControlModulationInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundControlModulationInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundControlModulationInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundControlModulationInput, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("SoundControlModulationInput"));
	}
	return Z_Registration_Info_UScriptStruct_SoundControlModulationInput.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FSoundControlModulationInput>()
{
	return FSoundControlModulationInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSampleAndHold_MetaData[];
#endif
		static void NewProp_bSampleAndHold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleAndHold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundControlModulationInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_bSampleAndHold_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Get the modulated input value on parent patch initialization and hold that value for its lifetime */" },
		{ "DisplayName", "Sample-And-Hold" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
		{ "ToolTip", "Get the modulated input value on parent patch initialization and hold that value for its lifetime" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_bSampleAndHold_SetBit(void* Obj)
	{
		((FSoundControlModulationInput*)Obj)->bSampleAndHold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_bSampleAndHold = { "bSampleAndHold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundControlModulationInput), &Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_bSampleAndHold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_bSampleAndHold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_bSampleAndHold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Transform to apply to the input prior to mix phase */" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
		{ "ToolTip", "Transform to apply to the input prior to mix phase" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundControlModulationInput, Transform), Z_Construct_UScriptStruct_FSoundModulationTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Transform_MetaData)) }; // 874057535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Bus_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The input bus */" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
		{ "ToolTip", "The input bus" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundControlModulationInput, Bus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Bus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_bSampleAndHold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewProp_Bus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		&NewStructOps,
		"SoundControlModulationInput",
		sizeof(FSoundControlModulationInput),
		alignof(FSoundControlModulationInput),
		Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundControlModulationInput()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundControlModulationInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundControlModulationInput.InnerSingleton, Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundControlModulationInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundControlModulationPatch;
class UScriptStruct* FSoundControlModulationPatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundControlModulationPatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundControlModulationPatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundControlModulationPatch, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("SoundControlModulationPatch"));
	}
	return Z_Registration_Info_UScriptStruct_SoundControlModulationPatch.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FSoundControlModulationPatch>()
{
	return FSoundControlModulationPatch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputParameter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundControlModulationPatch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** Whether or not patch is bypassed (patch is still active, but always returns output parameter default value when modulated) */" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
		{ "ToolTip", "Whether or not patch is bypassed (patch is still active, but always returns output parameter default value when modulated)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSoundControlModulationPatch*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSoundControlModulationPatch), &Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_bBypass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_OutputParameter_MetaData[] = {
		{ "Category", "Output" },
		{ "DisplayName", "Parameter" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_OutputParameter = { "OutputParameter", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundControlModulationPatch, OutputParameter), Z_Construct_UClass_USoundModulationParameter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_OutputParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_OutputParameter_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundControlModulationInput, METADATA_PARAMS(nullptr, 0) }; // 3709877358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** Modulation inputs */" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
		{ "ToolTip", "Modulation inputs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundControlModulationPatch, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_Inputs_MetaData)) }; // 3709877358
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_OutputParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewProp_Inputs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		&NewStructOps,
		"SoundControlModulationPatch",
		sizeof(FSoundControlModulationPatch),
		alignof(FSoundControlModulationPatch),
		Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundControlModulationPatch()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundControlModulationPatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundControlModulationPatch.InnerSingleton, Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundControlModulationPatch.InnerSingleton;
	}
	void USoundModulationPatch::StaticRegisterNativesUSoundModulationPatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationPatch);
	UClass* Z_Construct_UClass_USoundModulationPatch_NoRegister()
	{
		return USoundModulationPatch::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationPatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatchSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationPatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationPatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundModulationPatch.h" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationPatch_Statics::NewProp_PatchSettings_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/SoundModulationPatch.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundModulationPatch_Statics::NewProp_PatchSettings = { "PatchSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationPatch, PatchSettings), Z_Construct_UScriptStruct_FSoundControlModulationPatch, METADATA_PARAMS(Z_Construct_UClass_USoundModulationPatch_Statics::NewProp_PatchSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationPatch_Statics::NewProp_PatchSettings_MetaData)) }; // 2480709142
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationPatch_Statics::NewProp_PatchSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationPatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationPatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationPatch_Statics::ClassParams = {
		&USoundModulationPatch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationPatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationPatch_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationPatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationPatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationPatch()
	{
		if (!Z_Registration_Info_UClass_USoundModulationPatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationPatch.OuterSingleton, Z_Construct_UClass_USoundModulationPatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationPatch.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationPatch>()
	{
		return USoundModulationPatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationPatch);
	USoundModulationPatch::~USoundModulationPatch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_Statics::ScriptStructInfo[] = {
		{ FSoundModulationTransform::StaticStruct, Z_Construct_UScriptStruct_FSoundModulationTransform_Statics::NewStructOps, TEXT("SoundModulationTransform"), &Z_Registration_Info_UScriptStruct_SoundModulationTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundModulationTransform), 874057535U) },
		{ FSoundControlModulationInput::StaticStruct, Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics::NewStructOps, TEXT("SoundControlModulationInput"), &Z_Registration_Info_UScriptStruct_SoundControlModulationInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundControlModulationInput), 3709877358U) },
		{ FSoundControlModulationPatch::StaticStruct, Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics::NewStructOps, TEXT("SoundControlModulationPatch"), &Z_Registration_Info_UScriptStruct_SoundControlModulationPatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundControlModulationPatch), 2480709142U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulationPatch, USoundModulationPatch::StaticClass, TEXT("USoundModulationPatch"), &Z_Registration_Info_UClass_USoundModulationPatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationPatch), 2793872703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_1191377278(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
