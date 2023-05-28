// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixEffects/SubmixEffectFlexiverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectFlexiverb() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings;
class UScriptStruct* FSubmixEffectFlexiverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectFlexiverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectFlexiverbSettings>()
{
	return FSubmixEffectFlexiverbSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomDampening_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomDampening;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Complexity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Complexity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectFlexiverbSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "30" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** PreDelay - 0.01 < 10.0 < 40.0 - Amount of delay to the first echo in milliseconds. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "PreDelay - 0.01 < 10.0 < 40.0 - Amount of delay to the first echo in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay = { "PreDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, PreDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.4" },
		{ "Comment", "/** Time in seconds it will take for the impulse response to decay to -60 dB. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "Time in seconds it will take for the impulse response to decay to -60 dB." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, DecayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "12000.0" },
		{ "ClampMin", "60.0" },
		{ "Comment", "/** Room Dampening - 0.0 < 0.85 < 1.0 - Frequency at which the room dampens.*/" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "Room Dampening - 0.0 < 0.85 < 1.0 - Frequency at which the room dampens." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening = { "RoomDampening", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, RoomDampening), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "6" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity = { "Complexity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, Complexity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectFlexiverbSettings",
		sizeof(FSubmixEffectFlexiverbSettings),
		alignof(FSubmixEffectFlexiverbSettings),
		Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectFlexiverbPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectFlexiverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectFlexiverbPreset::StaticRegisterNativesUSubmixEffectFlexiverbPreset()
	{
		UClass* Class = USubmixEffectFlexiverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectFlexiverbPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics
	{
		struct SubmixEffectFlexiverbPreset_eventSetSettings_Parms
		{
			FSubmixEffectFlexiverbSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectFlexiverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2432628648
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFlexiverbPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::SubmixEffectFlexiverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectFlexiverbPreset);
	UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister()
	{
		return USubmixEffectFlexiverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings, "SetSettings" }, // 3461112102
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectFlexiverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings_MetaData)) }; // 2432628648
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectFlexiverbPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::ClassParams = {
		&USubmixEffectFlexiverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectFlexiverbPreset>()
	{
		return USubmixEffectFlexiverbPreset::StaticClass();
	}
	USubmixEffectFlexiverbPreset::USubmixEffectFlexiverbPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectFlexiverbPreset);
	USubmixEffectFlexiverbPreset::~USubmixEffectFlexiverbPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectFlexiverbSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewStructOps, TEXT("SubmixEffectFlexiverbSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectFlexiverbSettings), 2432628648U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectFlexiverbPreset, USubmixEffectFlexiverbPreset::StaticClass, TEXT("USubmixEffectFlexiverbPreset"), &Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectFlexiverbPreset), 1048188756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_543042429(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
