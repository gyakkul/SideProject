// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioModulationStatics.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Generators/SoundModulationEnvelopeFollower.h"
#include "Generators/SoundModulationLFO.h"
#include "SoundControlBusMix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioModulationStatics() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationStatics();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationStatics_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGenerator_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorLFO_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameter_NoRegister();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundControlBusMixStage();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationLFOParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	DEFINE_FUNCTION(UAudioModulationStatics::execGetModulatorsFromDestination)
	{
		P_GET_STRUCT_REF(FSoundModulationDestinationSettings,Z_Param_Out_Destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<USoundModulatorBase*>*)Z_Param__Result=UAudioModulationStatics::GetModulatorsFromDestination(Z_Param_Out_Destination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execGetModulatorValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAudioModulationStatics::GetModulatorValue(Z_Param_WorldContextObject,Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execUpdateModulator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::UpdateModulator(Z_Param_WorldContextObject,Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execUpdateMixFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBusMix,Z_Param_Mix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::UpdateMixFromObject(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execUpdateMixByFilter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBusMix,Z_Param_Mix);
		P_GET_PROPERTY(FStrProperty,Z_Param_AddressFilter);
		P_GET_OBJECT(UClass,Z_Param_ParamClassFilter);
		P_GET_OBJECT(USoundModulationParameter,Z_Param_ParamFilter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::UpdateMixByFilter(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_AddressFilter,Z_Param_ParamClassFilter,Z_Param_ParamFilter,Z_Param_Value,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execClearAllGlobalBusMixValues)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::ClearAllGlobalBusMixValues(Z_Param_WorldContextObject,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execClearGlobalBusMixValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBus,Z_Param_Bus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::ClearGlobalBusMixValue(Z_Param_WorldContextObject,Z_Param_Bus,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execSetGlobalBusMixValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBus,Z_Param_Bus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::SetGlobalBusMixValue(Z_Param_WorldContextObject,Z_Param_Bus,Z_Param_Value,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execUpdateMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBusMix,Z_Param_Mix);
		P_GET_TARRAY(FSoundControlBusMixStage,Z_Param_Stages);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::UpdateMix(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_Stages,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execLoadMixFromProfile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBusMix,Z_Param_Mix);
		P_GET_UBOOL(Z_Param_bActivate);
		P_GET_PROPERTY(FIntProperty,Z_Param_ProfileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoundControlBusMixStage>*)Z_Param__Result=UAudioModulationStatics::LoadMixFromProfile(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_bActivate,Z_Param_ProfileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execSaveMixToProfile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBusMix,Z_Param_Mix);
		P_GET_PROPERTY(FIntProperty,Z_Param_ProfileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::SaveMixToProfile(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_ProfileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execDeactivateGenerator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundModulationGenerator,Z_Param_Generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::DeactivateGenerator(Z_Param_WorldContextObject,Z_Param_Generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execDeactivateBusMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBusMix,Z_Param_Mix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::DeactivateBusMix(Z_Param_WorldContextObject,Z_Param_Mix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execDeactivateBus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBus,Z_Param_Bus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::DeactivateBus(Z_Param_WorldContextObject,Z_Param_Bus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execCreateLFOGenerator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FSoundModulationLFOParams,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundModulationGeneratorLFO**)Z_Param__Result=UAudioModulationStatics::CreateLFOGenerator(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execCreateEnvelopeFollowerGenerator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT(FEnvelopeFollowerGeneratorParams,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundModulationGeneratorEnvelopeFollower**)Z_Param__Result=UAudioModulationStatics::CreateEnvelopeFollowerGenerator(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execCreateModulationParameter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UClass,Z_Param_ParamClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundModulationParameter**)Z_Param__Result=UAudioModulationStatics::CreateModulationParameter(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_ParamClass,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execCreateBusMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY(FSoundControlBusMixStage,Z_Param_Stages);
		P_GET_UBOOL(Z_Param_Activate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundControlBusMix**)Z_Param__Result=UAudioModulationStatics::CreateBusMix(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Stages,Z_Param_Activate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execCreateBusMixStage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBus,Z_Param_Bus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttackTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReleaseTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoundControlBusMixStage*)Z_Param__Result=UAudioModulationStatics::CreateBusMixStage(Z_Param_WorldContextObject,Z_Param_Bus,Z_Param_Value,Z_Param_AttackTime,Z_Param_ReleaseTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execCreateBus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(USoundModulationParameter,Z_Param_Parameter);
		P_GET_UBOOL(Z_Param_Activate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundControlBus**)Z_Param__Result=UAudioModulationStatics::CreateBus(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Parameter,Z_Param_Activate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execActivateGenerator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundModulationGenerator,Z_Param_Generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::ActivateGenerator(Z_Param_WorldContextObject,Z_Param_Generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execActivateBusMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBusMix,Z_Param_Mix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::ActivateBusMix(Z_Param_WorldContextObject,Z_Param_Mix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStatics::execActivateBus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBus,Z_Param_Bus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioModulationStatics::ActivateBus(Z_Param_WorldContextObject,Z_Param_Bus);
		P_NATIVE_END;
	}
	void UAudioModulationStatics::StaticRegisterNativesUAudioModulationStatics()
	{
		UClass* Class = UAudioModulationStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBus", &UAudioModulationStatics::execActivateBus },
			{ "ActivateBusMix", &UAudioModulationStatics::execActivateBusMix },
			{ "ActivateGenerator", &UAudioModulationStatics::execActivateGenerator },
			{ "ClearAllGlobalBusMixValues", &UAudioModulationStatics::execClearAllGlobalBusMixValues },
			{ "ClearGlobalBusMixValue", &UAudioModulationStatics::execClearGlobalBusMixValue },
			{ "CreateBus", &UAudioModulationStatics::execCreateBus },
			{ "CreateBusMix", &UAudioModulationStatics::execCreateBusMix },
			{ "CreateBusMixStage", &UAudioModulationStatics::execCreateBusMixStage },
			{ "CreateEnvelopeFollowerGenerator", &UAudioModulationStatics::execCreateEnvelopeFollowerGenerator },
			{ "CreateLFOGenerator", &UAudioModulationStatics::execCreateLFOGenerator },
			{ "CreateModulationParameter", &UAudioModulationStatics::execCreateModulationParameter },
			{ "DeactivateBus", &UAudioModulationStatics::execDeactivateBus },
			{ "DeactivateBusMix", &UAudioModulationStatics::execDeactivateBusMix },
			{ "DeactivateGenerator", &UAudioModulationStatics::execDeactivateGenerator },
			{ "GetModulatorsFromDestination", &UAudioModulationStatics::execGetModulatorsFromDestination },
			{ "GetModulatorValue", &UAudioModulationStatics::execGetModulatorValue },
			{ "LoadMixFromProfile", &UAudioModulationStatics::execLoadMixFromProfile },
			{ "SaveMixToProfile", &UAudioModulationStatics::execSaveMixToProfile },
			{ "SetGlobalBusMixValue", &UAudioModulationStatics::execSetGlobalBusMixValue },
			{ "UpdateMix", &UAudioModulationStatics::execUpdateMix },
			{ "UpdateMixByFilter", &UAudioModulationStatics::execUpdateMixByFilter },
			{ "UpdateMixFromObject", &UAudioModulationStatics::execUpdateMixFromObject },
			{ "UpdateModulator", &UAudioModulationStatics::execUpdateModulator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics
	{
		struct AudioModulationStatics_eventActivateBus_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBus* Bus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventActivateBus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventActivateBus_Parms, Bus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::NewProp_Bus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Manually activates a modulation bus. If called, deactivation will only occur\n\x09 * if bus is manually deactivated or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 */" },
		{ "DisplayName", "Activate Control Bus" },
		{ "Keywords", "modulation modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Manually activates a modulation bus. If called, deactivation will only occur\nif bus is manually deactivated or destroyed (i.e. will not deactivate\nwhen all references become inactive)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "ActivateBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::AudioModulationStatics_eventActivateBus_Parms), Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_ActivateBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_ActivateBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics
	{
		struct AudioModulationStatics_eventActivateBusMix_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBusMix* Mix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventActivateBusMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventActivateBusMix_Parms, Mix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::NewProp_Mix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Manually activates a bus modulator mix. If called, deactivation will only occur\n\x09 * if mix is manually deactivated and not referenced or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 * @param BusMix - Mix to activate\n\x09 */" },
		{ "DisplayName", "Activate Control Bus Mix" },
		{ "Keywords", "modulation modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Manually activates a bus modulator mix. If called, deactivation will only occur\nif mix is manually deactivated and not referenced or destroyed (i.e. will not deactivate\nwhen all references become inactive).\n@param BusMix - Mix to activate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "ActivateBusMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::AudioModulationStatics_eventActivateBusMix_Parms), Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics
	{
		struct AudioModulationStatics_eventActivateGenerator_Parms
		{
			const UObject* WorldContextObject;
			USoundModulationGenerator* Generator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventActivateGenerator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventActivateGenerator_Parms, Generator), Z_Construct_UClass_USoundModulationGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::NewProp_Generator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Manually activates a modulation generator. If called, deactivation will only occur\n\x09 * if generator is manually deactivated and not referenced or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 * @param Modulator - Modulator to activate\n\x09 */" },
		{ "DisplayName", "Activate Modulation Generator" },
		{ "Keywords", "modulator lfo envelope follower" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Manually activates a modulation generator. If called, deactivation will only occur\nif generator is manually deactivated and not referenced or destroyed (i.e. will not deactivate\nwhen all references become inactive).\n@param Modulator - Modulator to activate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "ActivateGenerator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::AudioModulationStatics_eventActivateGenerator_Parms), Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics
	{
		struct AudioModulationStatics_eventClearAllGlobalBusMixValues_Parms
		{
			const UObject* WorldContextObject;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventClearAllGlobalBusMixValues_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventClearAllGlobalBusMixValues_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Clears all global control bus mix values if set, using the applied fade time to return all to their respective bus's parameter default value.\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new values.\n\x09 *\x09\x09\x09\x09\x09 If non-positive, change is immediate.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Clear All Global Control Bus Mix Values" },
		{ "Keywords", "modulation modulator stage" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Clears all global control bus mix values if set, using the applied fade time to return all to their respective bus's parameter default value.\n@param FadeTime - Fade time to user when interpolating between current value and new values.\n                                     If non-positive, change is immediate." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "ClearAllGlobalBusMixValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::AudioModulationStatics_eventClearAllGlobalBusMixValues_Parms), Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics
	{
		struct AudioModulationStatics_eventClearGlobalBusMixValue_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBus* Bus;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventClearGlobalBusMixValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventClearGlobalBusMixValue_Parms, Bus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventClearGlobalBusMixValue_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Clears global control bus mix if set, using the applied fade time to return to the provided bus's parameter default value.\n\x09 * @param Bus - Bus associated with mix to update\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new values.\n\x09 *\x09\x09\x09\x09\x09 If non-positive, change is immediate.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Clear Global Control Bus Mix Value" },
		{ "Keywords", "modulation modulator stage" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Clears global control bus mix if set, using the applied fade time to return to the provided bus's parameter default value.\n@param Bus - Bus associated with mix to update\n@param FadeTime - Fade time to user when interpolating between current value and new values.\n                                     If non-positive, change is immediate." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "ClearGlobalBusMixValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::AudioModulationStatics_eventClearGlobalBusMixValue_Parms), Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics
	{
		struct AudioModulationStatics_eventCreateBus_Parms
		{
			UObject* WorldContextObject;
			FName Name;
			USoundModulationParameter* Parameter;
			bool Activate;
			USoundControlBus* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parameter;
		static void NewProp_Activate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Activate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBus_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBus_Parms, Parameter), Z_Construct_UClass_USoundModulationParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_Activate_SetBit(void* Obj)
	{
		((AudioModulationStatics_eventCreateBus_Parms*)Obj)->Activate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_Activate = { "Activate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioModulationStatics_eventCreateBus_Parms), &Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_Activate_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bus" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBus_Parms, ReturnValue), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_Parameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_Activate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Creates a modulation bus with the provided default value.\n\x09 * @param Name - Name of bus\n\x09 * @param Parameter - Default value for created bus\n\x09 * @param Activate - Whether or not to activate bus on creation. If true, deactivation will only occur\n\x09 * if returned bus is manually deactivated and not referenced or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 * @return Capture this in a Blueprint variable to prevent it from being automatically garbage collected. \n\x09 */" },
		{ "CPP_Default_Activate", "true" },
		{ "DisplayName", "Create Control Bus" },
		{ "Keywords", "make modulation LPF modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Creates a modulation bus with the provided default value.\n@param Name - Name of bus\n@param Parameter - Default value for created bus\n@param Activate - Whether or not to activate bus on creation. If true, deactivation will only occur\nif returned bus is manually deactivated and not referenced or destroyed (i.e. will not deactivate\nwhen all references become inactive).\n@return Capture this in a Blueprint variable to prevent it from being automatically garbage collected." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "CreateBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::AudioModulationStatics_eventCreateBus_Parms), Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_CreateBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_CreateBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics
	{
		struct AudioModulationStatics_eventCreateBusMix_Parms
		{
			UObject* WorldContextObject;
			FName Name;
			TArray<FSoundControlBusMixStage> Stages;
			bool Activate;
			USoundControlBusMix* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stages;
		static void NewProp_Activate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Activate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMix_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Stages_Inner = { "Stages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 358731547
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMix_Parms, Stages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 358731547
	void Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Activate_SetBit(void* Obj)
	{
		((AudioModulationStatics_eventCreateBusMix_Parms*)Obj)->Activate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Activate = { "Activate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioModulationStatics_eventCreateBusMix_Parms), &Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Activate_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "BusMix" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMix_Parms, ReturnValue), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Stages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Stages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_Activate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Creates a modulation bus mix, with a bus stage set to the provided target value.\n\x09 * @param Name - Name of mix.\n\x09 * @param Stages - Stages mix is responsible for.\n\x09 * @param Activate - Whether or not to activate mix on creation. If true, deactivation will only occur\n\x09 * if returned mix is manually deactivated and not referenced or destroyed (i.e. will not deactivate\n\x09 * when all references become inactive).\n\x09 * @return Capture this in a Blueprint variable to prevent it from being garbage collected. \n\x09 */" },
		{ "DisplayName", "Create Control Bus Mix" },
		{ "Keywords", "make modulation modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Creates a modulation bus mix, with a bus stage set to the provided target value.\n@param Name - Name of mix.\n@param Stages - Stages mix is responsible for.\n@param Activate - Whether or not to activate mix on creation. If true, deactivation will only occur\nif returned mix is manually deactivated and not referenced or destroyed (i.e. will not deactivate\nwhen all references become inactive).\n@return Capture this in a Blueprint variable to prevent it from being garbage collected." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "CreateBusMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::AudioModulationStatics_eventCreateBusMix_Parms), Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics
	{
		struct AudioModulationStatics_eventCreateBusMixStage_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBus* Bus;
			float Value;
			float AttackTime;
			float ReleaseTime;
			FSoundControlBusMixStage ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMixStage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMixStage_Parms, Bus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMixStage_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMixStage_Parms, AttackTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMixStage_Parms, ReleaseTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Stage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateBusMixStage_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoundControlBusMixStage, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_ReturnValue_MetaData)) }; // 358731547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_ReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Creates a stage used to mix a control bus.\n\x09 * @param Bus - Bus stage is in charge of applying mix value to.\n\x09 * @param Value - Value for added bus stage to target when mix is active.\n\x09 * @param AttackTime - Time in seconds for stage to mix in.\n\x09 * @param ReleaseTime - Time in seconds for stage to mix out.\n\x09 */" },
		{ "CPP_Default_AttackTime", "0.100000" },
		{ "CPP_Default_ReleaseTime", "0.100000" },
		{ "DisplayName", "Create Control Bus Mix Stage" },
		{ "Keywords", "make modulation modulator stage" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Creates a stage used to mix a control bus.\n@param Bus - Bus stage is in charge of applying mix value to.\n@param Value - Value for added bus stage to target when mix is active.\n@param AttackTime - Time in seconds for stage to mix in.\n@param ReleaseTime - Time in seconds for stage to mix out." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "CreateBusMixStage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::AudioModulationStatics_eventCreateBusMixStage_Parms), Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics
	{
		struct AudioModulationStatics_eventCreateEnvelopeFollowerGenerator_Parms
		{
			UObject* WorldContextObject;
			FName Name;
			FEnvelopeFollowerGeneratorParams Params;
			USoundModulationGeneratorEnvelopeFollower* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateEnvelopeFollowerGenerator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateEnvelopeFollowerGenerator_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateEnvelopeFollowerGenerator_Parms, Params), Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams, METADATA_PARAMS(nullptr, 0) }; // 3041102257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Generator" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateEnvelopeFollowerGenerator_Parms, ReturnValue), Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Creates a modulation generator based on an Envelope Follower with the given parameters.\n\x09 * @param Name - Name of generator.\n\x09 * @param Settings - The Envelope Follower settings, including what data to follow.\n\x09 * @return Capture this in a Blueprint variable to prevent it from being garbage collected.\n\x09 */" },
		{ "DisplayName", "Create Envelope Follower Generator" },
		{ "Keywords", "make modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Creates a modulation generator based on an Envelope Follower with the given parameters.\n@param Name - Name of generator.\n@param Settings - The Envelope Follower settings, including what data to follow.\n@return Capture this in a Blueprint variable to prevent it from being garbage collected." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "CreateEnvelopeFollowerGenerator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::AudioModulationStatics_eventCreateEnvelopeFollowerGenerator_Parms), Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics
	{
		struct AudioModulationStatics_eventCreateLFOGenerator_Parms
		{
			UObject* WorldContextObject;
			FName Name;
			FSoundModulationLFOParams Params;
			USoundModulationGeneratorLFO* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateLFOGenerator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateLFOGenerator_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateLFOGenerator_Parms, Params), Z_Construct_UScriptStruct_FSoundModulationLFOParams, METADATA_PARAMS(nullptr, 0) }; // 4167668202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Generator" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateLFOGenerator_Parms, ReturnValue), Z_Construct_UClass_USoundModulationGeneratorLFO_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Creates a modulation generator based on an LFO with the given parameters.\n\x09 * @param Name - Name of generator.\n\x09 * @param Settings - The LFO Settings.\n\x09 * @return Capture this in a Blueprint variable to prevent it from being garbage collected.\n\x09 */" },
		{ "DisplayName", "Create LFO Generator" },
		{ "Keywords", "make modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Creates a modulation generator based on an LFO with the given parameters.\n@param Name - Name of generator.\n@param Settings - The LFO Settings.\n@return Capture this in a Blueprint variable to prevent it from being garbage collected." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "CreateLFOGenerator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::AudioModulationStatics_eventCreateLFOGenerator_Parms), Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics
	{
		struct AudioModulationStatics_eventCreateModulationParameter_Parms
		{
			UObject* WorldContextObject;
			FName Name;
			TSubclassOf<USoundModulationParameter>  ParamClass;
			float DefaultValue;
			USoundModulationParameter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParamClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateModulationParameter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateModulationParameter_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_ParamClass = { "ParamClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateModulationParameter_Parms, ParamClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundModulationParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateModulationParameter_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventCreateModulationParameter_Parms, ReturnValue), Z_Construct_UClass_USoundModulationParameter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_ParamClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Creates a modulation parameter of a given class.\n\x09 * @param Name - Name of parameter.\n\x09 * @param ParamClass - The type of Modulation Parameter to create.\n\x09 * @param DefaultValue - The default normalized value of the parameter (range 0-1).\n\x09 * @return Capture this in a Blueprint variable to prevent it from being garbage collected.\n\x09 */" },
		{ "DisplayName", "Create Modulation Parameter" },
		{ "Keywords", "make modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Creates a modulation parameter of a given class.\n@param Name - Name of parameter.\n@param ParamClass - The type of Modulation Parameter to create.\n@param DefaultValue - The default normalized value of the parameter (range 0-1).\n@return Capture this in a Blueprint variable to prevent it from being garbage collected." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "CreateModulationParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::AudioModulationStatics_eventCreateModulationParameter_Parms), Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics
	{
		struct AudioModulationStatics_eventDeactivateBus_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBus* Bus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventDeactivateBus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventDeactivateBus_Parms, Bus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::NewProp_Bus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Deactivates a bus. Does nothing if the provided bus is already inactive.\n\x09 * @param Bus - Scope of modulator\n\x09 */" },
		{ "DisplayName", "Deactivate Control Bus" },
		{ "Keywords", "modulation modulator bus" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Deactivates a bus. Does nothing if the provided bus is already inactive.\n@param Bus - Scope of modulator" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "DeactivateBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::AudioModulationStatics_eventDeactivateBus_Parms), Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics
	{
		struct AudioModulationStatics_eventDeactivateBusMix_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBusMix* Mix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventDeactivateBusMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventDeactivateBusMix_Parms, Mix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::NewProp_Mix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Deactivates a modulation bus mix. Does nothing if an instance of the provided bus mix is already inactive.\n\x09 * @param BusMix - Mix to deactivate\n\x09 */" },
		{ "DisplayName", "Deactivate Control Bus Mix" },
		{ "Keywords", "modulation modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Deactivates a modulation bus mix. Does nothing if an instance of the provided bus mix is already inactive.\n@param BusMix - Mix to deactivate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "DeactivateBusMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::AudioModulationStatics_eventDeactivateBusMix_Parms), Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics
	{
		struct AudioModulationStatics_eventDeactivateGenerator_Parms
		{
			const UObject* WorldContextObject;
			USoundModulationGenerator* Generator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventDeactivateGenerator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventDeactivateGenerator_Parms, Generator), Z_Construct_UClass_USoundModulationGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::NewProp_Generator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Deactivates a modulation generator. Does nothing if an instance of the provided generator is already inactive.\n\x09 * @param Generator - Generator to activate\n\x09 * @param Scope - Scope of modulator\n\x09 */" },
		{ "DisplayName", "Deactivate Modulation Generator" },
		{ "Keywords", "bus modulation modulator generator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Deactivates a modulation generator. Does nothing if an instance of the provided generator is already inactive.\n@param Generator - Generator to activate\n@param Scope - Scope of modulator" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "DeactivateGenerator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::AudioModulationStatics_eventDeactivateGenerator_Parms), Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics
	{
		struct AudioModulationStatics_eventGetModulatorsFromDestination_Parms
		{
			FSoundModulationDestinationSettings Destination;
			TSet<USoundModulatorBase*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventGetModulatorsFromDestination_Parms, Destination), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_Destination_MetaData)) }; // 552980304
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Modulators" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventGetModulatorsFromDestination_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Gets the list of modulators currently applied to a Modulation Destination.\n\x09* @param Destination - The Modulation Destination.\n\x09* @return Modulators - The set of Modulators.\n\x09*/" },
		{ "DisplayName", "Get Modulators From Destination" },
		{ "Keywords", "modulation generator bus" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Gets the list of modulators currently applied to a Modulation Destination.\n@param Destination - The Modulation Destination.\n@return Modulators - The set of Modulators." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "GetModulatorsFromDestination", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::AudioModulationStatics_eventGetModulatorsFromDestination_Parms), Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics
	{
		struct AudioModulationStatics_eventGetModulatorValue_Parms
		{
			const UObject* WorldContextObject;
			USoundModulatorBase* Modulator;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventGetModulatorValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventGetModulatorValue_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventGetModulatorValue_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_Modulator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Gets the (normalized) value of the given modulator. \n\x09 * @return Value - The current value of the modulator. If the modulator is not active, returns 1.0.\n\x09 */" },
		{ "DisplayName", "Get Modulator Value" },
		{ "Keywords", "modulation generator bus" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Gets the (normalized) value of the given modulator.\n@return Value - The current value of the modulator. If the modulator is not active, returns 1.0." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "GetModulatorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::AudioModulationStatics_eventGetModulatorValue_Parms), Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics
	{
		struct AudioModulationStatics_eventLoadMixFromProfile_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBusMix* Mix;
			bool bActivate;
			int32 ProfileIndex;
			TArray<FSoundControlBusMixStage> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static void NewProp_bActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventLoadMixFromProfile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventLoadMixFromProfile_Parms, Mix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_bActivate_SetBit(void* Obj)
	{
		((AudioModulationStatics_eventLoadMixFromProfile_Parms*)Obj)->bActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_bActivate = { "bActivate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioModulationStatics_eventLoadMixFromProfile_Parms), &Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_bActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ProfileIndex = { "ProfileIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventLoadMixFromProfile_Parms, ProfileIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 358731547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Stages" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventLoadMixFromProfile_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ReturnValue_MetaData)) }; // 358731547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_bActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ProfileIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Loads control bus mix from a profile into UObject mix definition, deserialized from an ini file.\n\x09 * @param BusMix - Mix object to deserialize profile .ini to.\n\x09 * @param bActivate - If true, activate mix upon loading from profile.\n\x09 * @param ProfileIndex - Index of profile, allowing multiple profiles to be loaded to single mix object. If <= 0, loads from default profile (no suffix).\n\x09 * @return Stages - Stage values loaded from profile (empty if profile did not exist or had no values serialized).\n\x09 */" },
		{ "CPP_Default_bActivate", "true" },
		{ "CPP_Default_ProfileIndex", "0" },
		{ "DisplayName", "Load Control Bus Mix From Profile" },
		{ "Keywords", "deserialize modulation modulator ini" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Loads control bus mix from a profile into UObject mix definition, deserialized from an ini file.\n@param BusMix - Mix object to deserialize profile .ini to.\n@param bActivate - If true, activate mix upon loading from profile.\n@param ProfileIndex - Index of profile, allowing multiple profiles to be loaded to single mix object. If <= 0, loads from default profile (no suffix).\n@return Stages - Stage values loaded from profile (empty if profile did not exist or had no values serialized)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "LoadMixFromProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::AudioModulationStatics_eventLoadMixFromProfile_Parms), Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics
	{
		struct AudioModulationStatics_eventSaveMixToProfile_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBusMix* Mix;
			int32 ProfileIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventSaveMixToProfile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventSaveMixToProfile_Parms, Mix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_ProfileIndex = { "ProfileIndex", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventSaveMixToProfile_Parms, ProfileIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::NewProp_ProfileIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Saves control bus mix to a profile, serialized to an ini file.  If mix is loaded, uses current proxy's state.\n\x09 * If not, uses default UObject representation.\n\x09 * @param BusMix - Mix object to serialize to profile .ini.\n\x09 * @param ProfileIndex - Index of profile, allowing multiple profiles can be saved for single mix object. If 0, saves to default ini profile (no suffix).\n\x09 */" },
		{ "CPP_Default_ProfileIndex", "0" },
		{ "DisplayName", "Save Control Bus Mix to Profile" },
		{ "Keywords", "serialize modulation modulator ini" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Saves control bus mix to a profile, serialized to an ini file.  If mix is loaded, uses current proxy's state.\nIf not, uses default UObject representation.\n@param BusMix - Mix object to serialize to profile .ini.\n@param ProfileIndex - Index of profile, allowing multiple profiles can be saved for single mix object. If 0, saves to default ini profile (no suffix)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "SaveMixToProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::AudioModulationStatics_eventSaveMixToProfile_Parms), Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics
	{
		struct AudioModulationStatics_eventSetGlobalBusMixValue_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBus* Bus;
			float Value;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventSetGlobalBusMixValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventSetGlobalBusMixValue_Parms, Bus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventSetGlobalBusMixValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventSetGlobalBusMixValue_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Sets a Global Control Bus Mix with a single stage associated with the provided Bus to the given float value.  This call should\n\x09 * be reserved for buses that are to be always active. It is *NOT* recommended for transient buses, as not calling clear can keep\n\x09 * buses active indefinitely.\n\x09 * @param Bus - Bus associated with mix to update\n\x09 * @param Value - Value to set global stage to.\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new value. If negative, falls back to last fade\n\x09 * time set on stage. If fade time never set on stage, defaults to 100ms.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Set Global Control Bus Mix Value" },
		{ "Keywords", "modulation modulator stage" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Sets a Global Control Bus Mix with a single stage associated with the provided Bus to the given float value.  This call should\nbe reserved for buses that are to be always active. It is *NOT* recommended for transient buses, as not calling clear can keep\nbuses active indefinitely.\n@param Bus - Bus associated with mix to update\n@param Value - Value to set global stage to.\n@param FadeTime - Fade time to user when interpolating between current value and new value. If negative, falls back to last fade\ntime set on stage. If fade time never set on stage, defaults to 100ms." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "SetGlobalBusMixValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::AudioModulationStatics_eventSetGlobalBusMixValue_Parms), Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics
	{
		struct AudioModulationStatics_eventUpdateMix_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBusMix* Mix;
			TArray<FSoundControlBusMixStage> Stages;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stages;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMix_Parms, Mix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_Stages_Inner = { "Stages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 358731547
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMix_Parms, Stages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 358731547
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMix_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_Stages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_Stages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Sets a Control Bus Mix with the provided stage data, if the stages\n\x09 *  are provided in an active instance proxy of the mix. \n\x09 *  Does not update UObject definition of the mix. \n\x09 * @param Mix - Mix to update\n\x09 * @param Stages - Stages to set.  If stage's bus is not referenced by mix, stage's update request is ignored.\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new values.\n\x09 *\x09\x09\x09\x09\x09 If negative, falls back to last fade time set on stage. If fade time never set on stage,\n\x09 *\x09\x09\x09\x09\x09 uses attack time set on stage in mix asset.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Set Control Bus Mix" },
		{ "Keywords", "modulation modulator stage" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Sets a Control Bus Mix with the provided stage data, if the stages\nare provided in an active instance proxy of the mix.\nDoes not update UObject definition of the mix.\n@param Mix - Mix to update\n@param Stages - Stages to set.  If stage's bus is not referenced by mix, stage's update request is ignored.\n@param FadeTime - Fade time to user when interpolating between current value and new values.\n                                     If negative, falls back to last fade time set on stage. If fade time never set on stage,\n                                     uses attack time set on stage in mix asset." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "UpdateMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::AudioModulationStatics_eventUpdateMix_Parms), Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_UpdateMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_UpdateMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics
	{
		struct AudioModulationStatics_eventUpdateMixByFilter_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBusMix* Mix;
			FString AddressFilter;
			TSubclassOf<USoundModulationParameter>  ParamClassFilter;
			USoundModulationParameter* ParamFilter;
			float Value;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AddressFilter;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParamClassFilter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParamFilter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixByFilter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixByFilter_Parms, Mix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_AddressFilter = { "AddressFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixByFilter_Parms, AddressFilter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_ParamClassFilter = { "ParamClassFilter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixByFilter_Parms, ParamClassFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundModulationParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_ParamFilter = { "ParamFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixByFilter_Parms, ParamFilter), Z_Construct_UClass_USoundModulationParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixByFilter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixByFilter_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_AddressFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_ParamClassFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_ParamFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Sets filtered stages of a given class to a provided target value for active instance of mix.\n\x09 * Does not update UObject definition of mix.\n\x09 * @param Mix - Mix to modify\n\x09 * @param AddressFilter - (Optional) Address filter to apply to provided mix's stages.\n\x09 * @param ParamClassFilter - (Optional) Filters buses by parameter class.\n\x09 * @param ParamFilter - (Optional) Filters buses by parameter.\n\x09 * @param Value - Target value to mix filtered stages to.\n\x09 * @param FadeTime - If non-negative, updates the fade time for the resulting bus stages found matching the provided filter.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "CPP_Default_Value", "1.000000" },
		{ "DisplayName", "Set Control Bus Mix By Filter" },
		{ "Keywords", "control class modulation modulator stage value" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Sets filtered stages of a given class to a provided target value for active instance of mix.\nDoes not update UObject definition of mix.\n@param Mix - Mix to modify\n@param AddressFilter - (Optional) Address filter to apply to provided mix's stages.\n@param ParamClassFilter - (Optional) Filters buses by parameter class.\n@param ParamFilter - (Optional) Filters buses by parameter.\n@param Value - Target value to mix filtered stages to.\n@param FadeTime - If non-negative, updates the fade time for the resulting bus stages found matching the provided filter." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "UpdateMixByFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::AudioModulationStatics_eventUpdateMixByFilter_Parms), Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics
	{
		struct AudioModulationStatics_eventUpdateMixFromObject_Parms
		{
			const UObject* WorldContextObject;
			USoundControlBusMix* Mix;
			float FadeTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixFromObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixFromObject_Parms, Mix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateMixFromObject_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Commits updates from a UObject definition of a bus mix to active instance in audio thread\n\x09 * (ignored if mix has not been activated).\n\x09 * @param Mix - Mix to update\n\x09 * @param FadeTime - Fade time to user when interpolating between current value and new values.\n\x09 *\x09\x09\x09\x09\x09 If negative, falls back to last fade time set on stage. If fade time never set on stage,\n\x09 *\x09\x09\x09\x09\x09 uses attack time set on stage in mix asset.\n\x09 */" },
		{ "CPP_Default_FadeTime", "-1.000000" },
		{ "DisplayName", "Update Control Bus Mix" },
		{ "Keywords", "set modulation modulator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Commits updates from a UObject definition of a bus mix to active instance in audio thread\n(ignored if mix has not been activated).\n@param Mix - Mix to update\n@param FadeTime - Fade time to user when interpolating between current value and new values.\n                                     If negative, falls back to last fade time set on stage. If fade time never set on stage,\n                                     uses attack time set on stage in mix asset." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "UpdateMixFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::AudioModulationStatics_eventUpdateMixFromObject_Parms), Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics
	{
		struct AudioModulationStatics_eventUpdateModulator_Parms
		{
			const UObject* WorldContextObject;
			USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateModulator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStatics_eventUpdateModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation" },
		{ "Comment", "/** Commits updates from a UObject definition of a modulator (e.g. Bus, Bus Mix, Generator)\n\x09 *  to active instance in audio thread (ignored if modulator type has not been activated).\n\x09 * @param Modulator - Modulator to update\n\x09 */" },
		{ "DisplayName", "Update Modulator" },
		{ "Keywords", "set control bus mix modulation modulator generator" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "Commits updates from a UObject definition of a modulator (e.g. Bus, Bus Mix, Generator)\nto active instance in audio thread (ignored if modulator type has not been activated).\n@param Modulator - Modulator to update" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStatics, nullptr, "UpdateModulator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::AudioModulationStatics_eventUpdateModulator_Parms), Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioModulationStatics);
	UClass* Z_Construct_UClass_UAudioModulationStatics_NoRegister()
	{
		return UAudioModulationStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAudioModulationStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioModulationStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioModulationStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioModulationStatics_ActivateBus, "ActivateBus" }, // 1407737781
		{ &Z_Construct_UFunction_UAudioModulationStatics_ActivateBusMix, "ActivateBusMix" }, // 1972831173
		{ &Z_Construct_UFunction_UAudioModulationStatics_ActivateGenerator, "ActivateGenerator" }, // 2658666058
		{ &Z_Construct_UFunction_UAudioModulationStatics_ClearAllGlobalBusMixValues, "ClearAllGlobalBusMixValues" }, // 2750573149
		{ &Z_Construct_UFunction_UAudioModulationStatics_ClearGlobalBusMixValue, "ClearGlobalBusMixValue" }, // 1825513662
		{ &Z_Construct_UFunction_UAudioModulationStatics_CreateBus, "CreateBus" }, // 713654037
		{ &Z_Construct_UFunction_UAudioModulationStatics_CreateBusMix, "CreateBusMix" }, // 2916210698
		{ &Z_Construct_UFunction_UAudioModulationStatics_CreateBusMixStage, "CreateBusMixStage" }, // 244343096
		{ &Z_Construct_UFunction_UAudioModulationStatics_CreateEnvelopeFollowerGenerator, "CreateEnvelopeFollowerGenerator" }, // 1612687794
		{ &Z_Construct_UFunction_UAudioModulationStatics_CreateLFOGenerator, "CreateLFOGenerator" }, // 1638641490
		{ &Z_Construct_UFunction_UAudioModulationStatics_CreateModulationParameter, "CreateModulationParameter" }, // 2004872866
		{ &Z_Construct_UFunction_UAudioModulationStatics_DeactivateBus, "DeactivateBus" }, // 1014460708
		{ &Z_Construct_UFunction_UAudioModulationStatics_DeactivateBusMix, "DeactivateBusMix" }, // 3931855016
		{ &Z_Construct_UFunction_UAudioModulationStatics_DeactivateGenerator, "DeactivateGenerator" }, // 2436930010
		{ &Z_Construct_UFunction_UAudioModulationStatics_GetModulatorsFromDestination, "GetModulatorsFromDestination" }, // 3379279270
		{ &Z_Construct_UFunction_UAudioModulationStatics_GetModulatorValue, "GetModulatorValue" }, // 3223740004
		{ &Z_Construct_UFunction_UAudioModulationStatics_LoadMixFromProfile, "LoadMixFromProfile" }, // 1224650765
		{ &Z_Construct_UFunction_UAudioModulationStatics_SaveMixToProfile, "SaveMixToProfile" }, // 1590835351
		{ &Z_Construct_UFunction_UAudioModulationStatics_SetGlobalBusMixValue, "SetGlobalBusMixValue" }, // 3983535763
		{ &Z_Construct_UFunction_UAudioModulationStatics_UpdateMix, "UpdateMix" }, // 1314811477
		{ &Z_Construct_UFunction_UAudioModulationStatics_UpdateMixByFilter, "UpdateMixByFilter" }, // 3698459886
		{ &Z_Construct_UFunction_UAudioModulationStatics_UpdateMixFromObject, "UpdateMixFromObject" }, // 1437809809
		{ &Z_Construct_UFunction_UAudioModulationStatics_UpdateModulator, "UpdateModulator" }, // 620722821
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioModulationStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace AudioModulation\n" },
		{ "IncludePath", "AudioModulationStatics.h" },
		{ "ModuleRelativePath", "Public/AudioModulationStatics.h" },
		{ "ToolTip", "namespace AudioModulation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioModulationStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioModulationStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioModulationStatics_Statics::ClassParams = {
		&UAudioModulationStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioModulationStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioModulationStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioModulationStatics()
	{
		if (!Z_Registration_Info_UClass_UAudioModulationStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioModulationStatics.OuterSingleton, Z_Construct_UClass_UAudioModulationStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioModulationStatics.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<UAudioModulationStatics>()
	{
		return UAudioModulationStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioModulationStatics);
	UAudioModulationStatics::~UAudioModulationStatics() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioModulationStatics, UAudioModulationStatics::StaticClass, TEXT("UAudioModulationStatics"), &Z_Registration_Info_UClass_UAudioModulationStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioModulationStatics), 3586925307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_1136418993(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
