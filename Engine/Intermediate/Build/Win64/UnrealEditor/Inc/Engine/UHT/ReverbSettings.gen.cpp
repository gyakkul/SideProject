// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/ReverbSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverbSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ReverbPreset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ReverbPreset;
	static UEnum* ReverbPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ReverbPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ReverbPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ReverbPreset, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ReverbPreset"));
		}
		return Z_Registration_Info_UEnum_ReverbPreset.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ReverbPreset>()
	{
		return ReverbPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ReverbPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ReverbPreset_Statics::Enumerators[] = {
		{ "REVERB_Default", (int64)REVERB_Default },
		{ "REVERB_Bathroom", (int64)REVERB_Bathroom },
		{ "REVERB_StoneRoom", (int64)REVERB_StoneRoom },
		{ "REVERB_Auditorium", (int64)REVERB_Auditorium },
		{ "REVERB_ConcertHall", (int64)REVERB_ConcertHall },
		{ "REVERB_Cave", (int64)REVERB_Cave },
		{ "REVERB_Hallway", (int64)REVERB_Hallway },
		{ "REVERB_StoneCorridor", (int64)REVERB_StoneCorridor },
		{ "REVERB_Alley", (int64)REVERB_Alley },
		{ "REVERB_Forest", (int64)REVERB_Forest },
		{ "REVERB_City", (int64)REVERB_City },
		{ "REVERB_Mountains", (int64)REVERB_Mountains },
		{ "REVERB_Quarry", (int64)REVERB_Quarry },
		{ "REVERB_Plain", (int64)REVERB_Plain },
		{ "REVERB_ParkingLot", (int64)REVERB_ParkingLot },
		{ "REVERB_SewerPipe", (int64)REVERB_SewerPipe },
		{ "REVERB_Underwater", (int64)REVERB_Underwater },
		{ "REVERB_SmallRoom", (int64)REVERB_SmallRoom },
		{ "REVERB_MediumRoom", (int64)REVERB_MediumRoom },
		{ "REVERB_LargeRoom", (int64)REVERB_LargeRoom },
		{ "REVERB_MediumHall", (int64)REVERB_MediumHall },
		{ "REVERB_LargeHall", (int64)REVERB_LargeHall },
		{ "REVERB_Plate", (int64)REVERB_Plate },
		{ "REVERB_MAX", (int64)REVERB_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ReverbPreset_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * DEPRECATED: Exists for backwards compatibility\n * Indicates a reverb preset to use.\n *\n */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "REVERB_Alley.Name", "REVERB_Alley" },
		{ "REVERB_Auditorium.Name", "REVERB_Auditorium" },
		{ "REVERB_Bathroom.Name", "REVERB_Bathroom" },
		{ "REVERB_Cave.Name", "REVERB_Cave" },
		{ "REVERB_City.Name", "REVERB_City" },
		{ "REVERB_ConcertHall.Name", "REVERB_ConcertHall" },
		{ "REVERB_Default.Name", "REVERB_Default" },
		{ "REVERB_Forest.Name", "REVERB_Forest" },
		{ "REVERB_Hallway.Name", "REVERB_Hallway" },
		{ "REVERB_LargeHall.Name", "REVERB_LargeHall" },
		{ "REVERB_LargeRoom.Name", "REVERB_LargeRoom" },
		{ "REVERB_MAX.Name", "REVERB_MAX" },
		{ "REVERB_MediumHall.Name", "REVERB_MediumHall" },
		{ "REVERB_MediumRoom.Name", "REVERB_MediumRoom" },
		{ "REVERB_Mountains.Name", "REVERB_Mountains" },
		{ "REVERB_ParkingLot.Name", "REVERB_ParkingLot" },
		{ "REVERB_Plain.Name", "REVERB_Plain" },
		{ "REVERB_Plate.Name", "REVERB_Plate" },
		{ "REVERB_Quarry.Name", "REVERB_Quarry" },
		{ "REVERB_SewerPipe.Name", "REVERB_SewerPipe" },
		{ "REVERB_SmallRoom.Name", "REVERB_SmallRoom" },
		{ "REVERB_StoneCorridor.Name", "REVERB_StoneCorridor" },
		{ "REVERB_StoneRoom.Name", "REVERB_StoneRoom" },
		{ "REVERB_Underwater.Name", "REVERB_Underwater" },
		{ "ToolTip", "DEPRECATED: Exists for backwards compatibility\nIndicates a reverb preset to use." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ReverbPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ReverbPreset",
		"ReverbPreset",
		Z_Construct_UEnum_Engine_ReverbPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ReverbPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ReverbPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ReverbPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ReverbPreset()
	{
		if (!Z_Registration_Info_UEnum_ReverbPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ReverbPreset.InnerSingleton, Z_Construct_UEnum_Engine_ReverbPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ReverbPreset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReverbSettings;
class UScriptStruct* FReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReverbSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ReverbSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FReverbSettings>()
{
	return FReverbSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReverbSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyReverb_MetaData[];
#endif
		static void NewProp_bApplyReverb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyReverb;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReverbType;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReverbEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReverbPluginEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct encapsulating settings for reverb effects. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "Struct encapsulating settings for reverb effects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReverbSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/* Whether to apply the reverb settings below. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "Whether to apply the reverb settings below." },
	};
#endif
	void Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_SetBit(void* Obj)
	{
		((FReverbSettings*)Obj)->bApplyReverb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb = { "bApplyReverb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FReverbSettings), &Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData[] = {
		{ "Comment", "/** The reverb preset to employ. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "The reverb preset to employ." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType = { "ReverbType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReverbSettings, ReverbType_DEPRECATED), Z_Construct_UEnum_Engine_ReverbPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData)) }; // 2724277233
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/** The reverb asset to employ. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "The reverb asset to employ." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect = { "ReverbEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReverbSettings, ReverbEffect), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/** This is used to apply plugin-specific settings when a Reverb Plugin is being used. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "This is used to apply plugin-specific settings when a Reverb Plugin is being used." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect = { "ReverbPluginEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReverbSettings, ReverbPluginEffect), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/** Volume level of the reverb effect. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "Volume level of the reverb effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReverbSettings, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "/** Time to fade from the current reverb settings into this setting, in seconds. */" },
		{ "ModuleRelativePath", "Classes/Sound/ReverbSettings.h" },
		{ "ToolTip", "Time to fade from the current reverb settings into this setting, in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReverbSettings, FadeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ReverbSettings",
		sizeof(FReverbSettings),
		alignof(FReverbSettings),
		Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ReverbSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FReverbSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReverbSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbSettings_h_Statics::EnumInfo[] = {
		{ ReverbPreset_StaticEnum, TEXT("ReverbPreset"), &Z_Registration_Info_UEnum_ReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2724277233U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbSettings_h_Statics::ScriptStructInfo[] = {
		{ FReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FReverbSettings_Statics::NewStructOps, TEXT("ReverbSettings"), &Z_Registration_Info_UScriptStruct_ReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReverbSettings), 3785251137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbSettings_h_66363366(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
