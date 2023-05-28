// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_Postprocess.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_Postprocess() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETemperatureMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocessSettings;
class UScriptStruct* FDisplayClusterConfigurationViewport_CustomPostprocessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_CustomPostprocessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocessSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_CustomPostprocessSettings>()
{
	return FDisplayClusterConfigurationViewport_CustomPostprocessSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneFrame_MetaData[];
#endif
		static void NewProp_bIsOneFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_CustomPostprocessSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "// Enable custom postprocess\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Enable custom postprocess" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_CustomPostprocessSettings*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_CustomPostprocessSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsOneFrame_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "// Apply postprocess for one frame\n" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Apply postprocess for one frame" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsOneFrame_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_CustomPostprocessSettings*)Obj)->bIsOneFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsOneFrame = { "bIsOneFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_CustomPostprocessSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsOneFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsOneFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsOneFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "// Custom postprocess settings\n" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Custom postprocess settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_CustomPostprocessSettings, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_PostProcessSettings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "// Override blend weight\n" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Override blend weight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_CustomPostprocessSettings, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_BlendWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_bIsOneFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_PostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewProp_BlendWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_CustomPostprocessSettings",
		sizeof(FDisplayClusterConfigurationViewport_CustomPostprocessSettings),
		alignof(FDisplayClusterConfigurationViewport_CustomPostprocessSettings),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocessSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocessSettings.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocessSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocess;
class UScriptStruct* FDisplayClusterConfigurationViewport_CustomPostprocess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_CustomPostprocess"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocess.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_CustomPostprocess>()
{
	return FDisplayClusterConfigurationViewport_CustomPostprocess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Override_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Override;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Final_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Final;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_CustomPostprocess>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Start_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_CustomPostprocess, Start), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Start_MetaData)) }; // 3884113621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Override_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_CustomPostprocess, Override), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Override_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Override_MetaData)) }; // 3884113621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Final_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Final = { "Final", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_CustomPostprocess, Final), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Final_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Final_MetaData)) }; // 3884113621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Override,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewProp_Final,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_CustomPostprocess",
		sizeof(FDisplayClusterConfigurationViewport_CustomPostprocess),
		alignof(FDisplayClusterConfigurationViewport_CustomPostprocess),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocess.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocess.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingSettings;
class UScriptStruct* FDisplayClusterConfigurationViewport_ColorGradingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_ColorGradingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_ColorGradingSettings>()
{
	return FDisplayClusterConfigurationViewport_ColorGradingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Saturation_MetaData[];
#endif
		static void NewProp_bOverride_Saturation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Saturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Contrast_MetaData[];
#endif
		static void NewProp_bOverride_Contrast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Contrast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Gamma_MetaData[];
#endif
		static void NewProp_bOverride_Gamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Gain_MetaData[];
#endif
		static void NewProp_bOverride_Gain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Offset_MetaData[];
#endif
		static void NewProp_bOverride_Offset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Saturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_ColorGradingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Saturation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Saturation_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingSettings*)Obj)->bOverride_Saturation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Saturation = { "bOverride_Saturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Saturation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Saturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Saturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Contrast_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Contrast_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingSettings*)Obj)->bOverride_Contrast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Contrast = { "bOverride_Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Contrast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Contrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Contrast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gamma_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gamma_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingSettings*)Obj)->bOverride_Gamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gamma = { "bOverride_Gamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gamma_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gain_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gain_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingSettings*)Obj)->bOverride_Gain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gain = { "bOverride_Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Offset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Offset_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingSettings*)Obj)->bOverride_Offset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Offset = { "bOverride_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Offset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "saturation" },
		{ "Comment", "// Saturation\n" },
		{ "Delta", "0.01" },
		{ "EditCondition", "bOverride_Saturation" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Saturation" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingSettings, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Saturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Saturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "contrast" },
		{ "Comment", "// Contrast\n" },
		{ "Delta", "0.01" },
		{ "EditCondition", "bOverride_Contrast" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Contrast" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingSettings, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Contrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gamma" },
		{ "Comment", "// Gamma\n" },
		{ "Delta", "0.01" },
		{ "EditCondition", "bOverride_Gamma" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Gamma" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingSettings, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gain" },
		{ "Comment", "// Gain\n" },
		{ "Delta", "0.01" },
		{ "EditCondition", "bOverride_Gain" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Gain" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingSettings, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "offset" },
		{ "Comment", "// Offset\n" },
		{ "Delta", "0.001" },
		{ "EditCondition", "bOverride_Offset" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Offset" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingSettings, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Saturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Contrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_bOverride_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Saturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Contrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_ColorGradingSettings",
		sizeof(FDisplayClusterConfigurationViewport_ColorGradingSettings),
		alignof(FDisplayClusterConfigurationViewport_ColorGradingSettings),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingSettings.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings;
class UScriptStruct* FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings>()
{
	return FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TemperatureType_MetaData[];
#endif
		static void NewProp_bOverride_TemperatureType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TemperatureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTemp_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTemp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTemp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTint_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TemperatureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTemp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteTemp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteTint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_TemperatureType_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_TemperatureType_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings*)Obj)->bOverride_TemperatureType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_TemperatureType = { "bOverride_TemperatureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_TemperatureType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_TemperatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_TemperatureType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings*)Obj)->bOverride_WhiteTemp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTemp = { "bOverride_WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTint_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings*)Obj)->bOverride_WhiteTint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTint = { "bOverride_WhiteTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_TemperatureType_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/**\n\x09* Selects the type of temperature calculation.\n\x09* White Balance uses the Temperature value to control the virtual camera's White Balance. This is the default selection.\n\x09* Color Temperature uses the Temperature value to adjust the color temperature of the scene, which is the inverse of the White Balance operation.\n\x09*/" },
		{ "DisplayName", "Temperature Type" },
		{ "EditCondition", "bOverride_TemperatureType" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Selects the type of temperature calculation.\nWhite Balance uses the Temperature value to control the virtual camera's White Balance. This is the default selection.\nColor Temperature uses the Temperature value to adjust the color temperature of the scene, which is the inverse of the White Balance operation." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_TemperatureType = { "TemperatureType", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings, TemperatureType), Z_Construct_UEnum_Engine_ETemperatureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_TemperatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_TemperatureType_MetaData)) }; // 3948101323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTemp_MetaData[] = {
		{ "Category", "White Balance" },
		{ "Comment", "// White temperature\n" },
		{ "DisplayName", "Temp" },
		{ "EditCondition", "bOverride_WhiteTemp" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "White temperature" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "1500.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTemp = { "WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings, WhiteTemp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTint_MetaData[] = {
		{ "Category", "White Balance" },
		{ "Comment", "// White tint\n" },
		{ "DisplayName", "Tint" },
		{ "EditCondition", "bOverride_WhiteTint" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "White tint" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTint = { "WhiteTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings, WhiteTint), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_TemperatureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTemp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_bOverride_WhiteTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_TemperatureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTemp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewProp_WhiteTint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings",
		sizeof(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings),
		alignof(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingMiscSettings;
class UScriptStruct* FDisplayClusterConfigurationViewport_ColorGradingMiscSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingMiscSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingMiscSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_ColorGradingMiscSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingMiscSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_ColorGradingMiscSettings>()
{
	return FDisplayClusterConfigurationViewport_ColorGradingMiscSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlueCorrection_MetaData[];
#endif
		static void NewProp_bOverride_BlueCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlueCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ExpandGamut_MetaData[];
#endif
		static void NewProp_bOverride_ExpandGamut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ExpandGamut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SceneColorTint_MetaData[];
#endif
		static void NewProp_bOverride_SceneColorTint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SceneColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandGamut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpandGamut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneColorTint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_ColorGradingMiscSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_BlueCorrection_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingMiscSettings*)Obj)->bOverride_BlueCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_BlueCorrection = { "bOverride_BlueCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_BlueCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingMiscSettings*)Obj)->bOverride_ExpandGamut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut = { "bOverride_ExpandGamut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingMiscSettings*)Obj)->bOverride_SceneColorTint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint = { "bOverride_SceneColorTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_BlueCorrection_MetaData[] = {
		{ "Category", "Misc" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Correct for artifacts with \"electric\" blues due to the ACEScg color space. Bright blue desaturates instead of going to violet.\n" },
		{ "EditCondition", "bOverride_BlueCorrection" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Correct for artifacts with \"electric\" blues due to the ACEScg color space. Bright blue desaturates instead of going to violet." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_BlueCorrection = { "BlueCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings, BlueCorrection), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_BlueCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_ExpandGamut_MetaData[] = {
		{ "Category", "Misc" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering.\n" },
		{ "EditCondition", "bOverride_ExpandGamut" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering." },
		{ "UIMax", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_ExpandGamut = { "ExpandGamut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings, ExpandGamut), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_ExpandGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_SceneColorTint_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Scene tint color\n" },
		{ "EditCondition", "bOverride_SceneColorTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Scene tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_SceneColorTint = { "SceneColorTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings, SceneColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_SceneColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_SceneColorTint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_BlueCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_BlueCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_ExpandGamut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewProp_SceneColorTint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_ColorGradingMiscSettings",
		sizeof(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings),
		alignof(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingMiscSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingMiscSettings.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingMiscSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingRenderingSettings;
class UScriptStruct* FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingRenderingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingRenderingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_ColorGradingRenderingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingRenderingSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings>()
{
	return FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBias_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteBalance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WhiteBalance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionShadowsMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Midtones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Midtones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Highlights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Highlights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionHighlightsMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionHighlightsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Misc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Misc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings*)Obj)->bOverride_AutoExposureBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_AutoExposureBias = { "bOverride_AutoExposureBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings*)Obj)->bOverride_ColorCorrectionHighlightsMin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin = { "bOverride_ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings*)Obj)->bOverride_ColorCorrectionHighlightsMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax = { "bOverride_ColorCorrectionHighlightsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings*)Obj)->bOverride_ColorCorrectionShadowsMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax = { "bOverride_ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Comment", "// Not Implemented: Blend weight\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Not Implemented: Blend weight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_AutoExposureBias_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// Exposure compensation\n" },
		{ "DisplayName", "Exposure Compensation" },
		{ "EditCondition", "bOverride_AutoExposureBias" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Exposure compensation" },
		{ "UIMax", "15.0" },
		{ "UIMin", "-15.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_AutoExposureBias = { "AutoExposureBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, AutoExposureBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_AutoExposureBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_AutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_WhiteBalance_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// White balance\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "White balance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_WhiteBalance = { "WhiteBalance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, WhiteBalance), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_WhiteBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_WhiteBalance_MetaData)) }; // 88203676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// Global color grading\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Global color grading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, Global), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Global_MetaData)) }; // 73646209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Shadows_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// Shadows color grading\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Shadows color grading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, Shadows), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Shadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Shadows_MetaData)) }; // 73646209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "DisplayName", "ShadowsMax" },
		{ "EditCondition", "bOverride_ColorCorrectionShadowsMax" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionShadowsMax = { "ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, ColorCorrectionShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Midtones_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// Midtones color grading\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Midtones color grading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Midtones = { "Midtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, Midtones), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Midtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Midtones_MetaData)) }; // 73646209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Highlights_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// Highlights color grading\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Highlights color grading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Highlights = { "Highlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, Highlights), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Highlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Highlights_MetaData)) }; // 73646209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "DisplayName", "HighlightsMin" },
		{ "EditCondition", "bOverride_ColorCorrectionHighlightsMin" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMin = { "ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, ColorCorrectionHighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMax_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "DisplayName", "HighlightsMax" },
		{ "EditCondition", "bOverride_ColorCorrectionHighlightsMax" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMax = { "ColorCorrectionHighlightsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, ColorCorrectionHighlightsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Misc_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "// Highlights color grading misc settings\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Highlights color grading misc settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Misc = { "Misc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, Misc), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Misc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Misc_MetaData)) }; // 3773030147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_AutoExposureBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_BlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_AutoExposureBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_WhiteBalance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Global,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Shadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionShadowsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Midtones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Highlights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_ColorCorrectionHighlightsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewProp_Misc,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_ColorGradingRenderingSettings",
		sizeof(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings),
		alignof(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingRenderingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingRenderingSettings.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingRenderingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_EntireClusterColorGrading;
class UScriptStruct* FDisplayClusterConfigurationViewport_EntireClusterColorGrading::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_EntireClusterColorGrading.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_EntireClusterColorGrading.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_EntireClusterColorGrading"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_EntireClusterColorGrading.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_EntireClusterColorGrading>()
{
	return FDisplayClusterConfigurationViewport_EntireClusterColorGrading::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEntireClusterColorGrading_MetaData[];
#endif
		static void NewProp_bEnableEntireClusterColorGrading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEntireClusterColorGrading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_EntireClusterColorGrading>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_MetaData[] = {
		{ "Category", "Viewport Color Grading" },
		{ "Comment", "/** Enable the color grading settings for the entire cluster and add them to nDisplay's color grading stack.  This will affect both the viewports and inner frustum. */" },
		{ "DisplayName", "Enable Entire Cluster Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Enable the color grading settings for the entire cluster and add them to nDisplay's color grading stack.  This will affect both the viewports and inner frustum." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_EntireClusterColorGrading*)Obj)->bEnableEntireClusterColorGrading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading = { "bEnableEntireClusterColorGrading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_EntireClusterColorGrading), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_ColorGradingSettings_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Entire Cluster Color Grading */" },
		{ "DisplayName", "Color Grading" },
		{ "EditCondition", "bEnableEntireClusterColorGrading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Entire Cluster Color Grading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_ColorGradingSettings = { "ColorGradingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_EntireClusterColorGrading, ColorGradingSettings), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_ColorGradingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_ColorGradingSettings_MetaData)) }; // 1267551550
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewProp_ColorGradingSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_EntireClusterColorGrading",
		sizeof(FDisplayClusterConfigurationViewport_EntireClusterColorGrading),
		alignof(FDisplayClusterConfigurationViewport_EntireClusterColorGrading),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_EntireClusterColorGrading.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_EntireClusterColorGrading.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_EntireClusterColorGrading.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerViewportColorGrading;
class UScriptStruct* FDisplayClusterConfigurationViewport_PerViewportColorGrading::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerViewportColorGrading.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerViewportColorGrading.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_PerViewportColorGrading"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerViewportColorGrading.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_PerViewportColorGrading>()
{
	return FDisplayClusterConfigurationViewport_PerViewportColorGrading::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEntireClusterEnabled_MetaData[];
#endif
		static void NewProp_bIsEntireClusterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEntireClusterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradingSettings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApplyPostProcessToObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyPostProcessToObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplyPostProcessToObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_PerViewportColorGrading>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_PerViewportColorGrading, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_Name_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Enable the color grading settings for the viewport(s) specified and add them to nDisplay's color grading stack.  This will not affect the inner frustum. */" },
		{ "DisplayName", "Enable Per-Viewport Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Enable the color grading settings for the viewport(s) specified and add them to nDisplay's color grading stack.  This will not affect the inner frustum." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_PerViewportColorGrading*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_PerViewportColorGrading), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEntireClusterEnabled_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Optionally include the Entire Cluster Color Grading settings specified above in nDisplay's color grading stack for these viewports. */" },
		{ "DisplayName", "Include Entire Cluster Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Optionally include the Entire Cluster Color Grading settings specified above in nDisplay's color grading stack for these viewports." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEntireClusterEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_PerViewportColorGrading*)Obj)->bIsEntireClusterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEntireClusterEnabled = { "bIsEntireClusterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_PerViewportColorGrading), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEntireClusterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEntireClusterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEntireClusterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ColorGradingSettings_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Color Grading */" },
		{ "DisplayName", "Color Grading" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Color Grading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ColorGradingSettings = { "ColorGradingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_PerViewportColorGrading, ColorGradingSettings), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ColorGradingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ColorGradingSettings_MetaData)) }; // 1267551550
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ApplyPostProcessToObjects_Inner = { "ApplyPostProcessToObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ApplyPostProcessToObjects_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Specify the viewports to apply these color grading settings. */" },
		{ "DisplayName", "Apply Color Grading to Viewports" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Specify the viewports to apply these color grading settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ApplyPostProcessToObjects = { "ApplyPostProcessToObjects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_PerViewportColorGrading, ApplyPostProcessToObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ApplyPostProcessToObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ApplyPostProcessToObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_Name,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_bIsEntireClusterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ColorGradingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ApplyPostProcessToObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewProp_ApplyPostProcessToObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_PerViewportColorGrading",
		sizeof(FDisplayClusterConfigurationViewport_PerViewportColorGrading),
		alignof(FDisplayClusterConfigurationViewport_PerViewportColorGrading),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerViewportColorGrading.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerViewportColorGrading.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerViewportColorGrading.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_AllNodesColorGrading;
class UScriptStruct* FDisplayClusterConfigurationViewport_AllNodesColorGrading::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_AllNodesColorGrading.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_AllNodesColorGrading.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_AllNodesColorGrading"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_AllNodesColorGrading.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_AllNodesColorGrading>()
{
	return FDisplayClusterConfigurationViewport_AllNodesColorGrading::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInnerFrustumAllNodesColorGrading_MetaData[];
#endif
		static void NewProp_bEnableInnerFrustumAllNodesColorGrading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInnerFrustumAllNodesColorGrading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEntireClusterColorGrading_MetaData[];
#endif
		static void NewProp_bEnableEntireClusterColorGrading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEntireClusterColorGrading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_AllNodesColorGrading>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableInnerFrustumAllNodesColorGrading_MetaData[] = {
		{ "Category", "Viewport Color Grading" },
		{ "Comment", "/** Enable the color grading settings on the inner frustum for the all nodes and add them to nDisplay's color grading stack. */" },
		{ "DisplayName", "Enable All Nodes Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Enable the color grading settings on the inner frustum for the all nodes and add them to nDisplay's color grading stack." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableInnerFrustumAllNodesColorGrading_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_AllNodesColorGrading*)Obj)->bEnableInnerFrustumAllNodesColorGrading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableInnerFrustumAllNodesColorGrading = { "bEnableInnerFrustumAllNodesColorGrading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_AllNodesColorGrading), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableInnerFrustumAllNodesColorGrading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableInnerFrustumAllNodesColorGrading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableInnerFrustumAllNodesColorGrading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_MetaData[] = {
		{ "Category", "Viewport Color Grading" },
		{ "Comment", "/** Optionally include Entire Cluster Color Grading settings specified on the root actor in nDisplay's color grading stack for the inner frustum. */" },
		{ "DisplayName", "Include Entire Cluster Color Grading" },
		{ "EditCondition", "bEnableInnerFrustumAllNodesColorGrading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Optionally include Entire Cluster Color Grading settings specified on the root actor in nDisplay's color grading stack for the inner frustum." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_AllNodesColorGrading*)Obj)->bEnableEntireClusterColorGrading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading = { "bEnableEntireClusterColorGrading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_AllNodesColorGrading), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_ColorGradingSettings_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Color Grading */" },
		{ "DisplayName", "Color Grading" },
		{ "EditCondition", "bEnableInnerFrustumAllNodesColorGrading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Color Grading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_ColorGradingSettings = { "ColorGradingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_AllNodesColorGrading, ColorGradingSettings), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_ColorGradingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_ColorGradingSettings_MetaData)) }; // 1267551550
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableInnerFrustumAllNodesColorGrading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_bEnableEntireClusterColorGrading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewProp_ColorGradingSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_AllNodesColorGrading",
		sizeof(FDisplayClusterConfigurationViewport_AllNodesColorGrading),
		alignof(FDisplayClusterConfigurationViewport_AllNodesColorGrading),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_AllNodesColorGrading.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_AllNodesColorGrading.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_AllNodesColorGrading.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerNodeColorGrading;
class UScriptStruct* FDisplayClusterConfigurationViewport_PerNodeColorGrading::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerNodeColorGrading.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerNodeColorGrading.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_PerNodeColorGrading"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerNodeColorGrading.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_PerNodeColorGrading>()
{
	return FDisplayClusterConfigurationViewport_PerNodeColorGrading::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEntireClusterColorGrading_MetaData[];
#endif
		static void NewProp_bEntireClusterColorGrading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEntireClusterColorGrading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllNodesColorGrading_MetaData[];
#endif
		static void NewProp_bAllNodesColorGrading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllNodesColorGrading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradingSettings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApplyPostProcessToObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyPostProcessToObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplyPostProcessToObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_PerNodeColorGrading>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_PerNodeColorGrading, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_Name_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Enable the color grading settings for the node(s) specified and add them to nDisplay's color grading stack. */" },
		{ "DisplayName", "Enable Per-Node Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Enable the color grading settings for the node(s) specified and add them to nDisplay's color grading stack." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_PerNodeColorGrading*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_PerNodeColorGrading), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bEntireClusterColorGrading_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Optionally include Entire Cluster Color Grading settings specified on the root actor in nDisplay's color grading stack for these nodes. */" },
		{ "DisplayName", "Include Entire Cluster Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Optionally include Entire Cluster Color Grading settings specified on the root actor in nDisplay's color grading stack for these nodes." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bEntireClusterColorGrading_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_PerNodeColorGrading*)Obj)->bEntireClusterColorGrading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bEntireClusterColorGrading = { "bEntireClusterColorGrading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_PerNodeColorGrading), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bEntireClusterColorGrading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bEntireClusterColorGrading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bEntireClusterColorGrading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bAllNodesColorGrading_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Optionally include the All Nodes Color Grading settings specified above in nDisplay's color grading stack for these nodes. */" },
		{ "DisplayName", "Include All Nodes Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Optionally include the All Nodes Color Grading settings specified above in nDisplay's color grading stack for these nodes." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bAllNodesColorGrading_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_PerNodeColorGrading*)Obj)->bAllNodesColorGrading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bAllNodesColorGrading = { "bAllNodesColorGrading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_PerNodeColorGrading), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bAllNodesColorGrading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bAllNodesColorGrading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bAllNodesColorGrading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ColorGradingSettings_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Color Grading */" },
		{ "DisplayName", "Color Grading" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Color Grading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ColorGradingSettings = { "ColorGradingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_PerNodeColorGrading, ColorGradingSettings), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ColorGradingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ColorGradingSettings_MetaData)) }; // 1267551550
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ApplyPostProcessToObjects_Inner = { "ApplyPostProcessToObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ApplyPostProcessToObjects_MetaData[] = {
		{ "Category", "Viewport Settings" },
		{ "Comment", "/** Specify the nodes to apply these color grading settings. */" },
		{ "DisplayName", "Apply Color Grading to Nodes" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Postprocess.h" },
		{ "ToolTip", "Specify the nodes to apply these color grading settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ApplyPostProcessToObjects = { "ApplyPostProcessToObjects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_PerNodeColorGrading, ApplyPostProcessToObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ApplyPostProcessToObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ApplyPostProcessToObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_Name,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bEntireClusterColorGrading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_bAllNodesColorGrading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ColorGradingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ApplyPostProcessToObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewProp_ApplyPostProcessToObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_PerNodeColorGrading",
		sizeof(FDisplayClusterConfigurationViewport_PerNodeColorGrading),
		alignof(FDisplayClusterConfigurationViewport_PerNodeColorGrading),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerNodeColorGrading.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerNodeColorGrading.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerNodeColorGrading.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Postprocess_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Postprocess_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationViewport_CustomPostprocessSettings::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocessSettings_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_CustomPostprocessSettings"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_CustomPostprocessSettings), 3884113621U) },
		{ FDisplayClusterConfigurationViewport_CustomPostprocess::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_CustomPostprocess"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_CustomPostprocess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_CustomPostprocess), 2155419442U) },
		{ FDisplayClusterConfigurationViewport_ColorGradingSettings::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingSettings_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_ColorGradingSettings"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_ColorGradingSettings), 73646209U) },
		{ FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_ColorGradingWhiteBalanceSettings), 88203676U) },
		{ FDisplayClusterConfigurationViewport_ColorGradingMiscSettings::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingMiscSettings_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_ColorGradingMiscSettings"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingMiscSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_ColorGradingMiscSettings), 3773030147U) },
		{ FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_ColorGradingRenderingSettings"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ColorGradingRenderingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_ColorGradingRenderingSettings), 1267551550U) },
		{ FDisplayClusterConfigurationViewport_EntireClusterColorGrading::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_EntireClusterColorGrading_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_EntireClusterColorGrading"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_EntireClusterColorGrading, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_EntireClusterColorGrading), 4084067244U) },
		{ FDisplayClusterConfigurationViewport_PerViewportColorGrading::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerViewportColorGrading_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_PerViewportColorGrading"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerViewportColorGrading, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_PerViewportColorGrading), 1081555381U) },
		{ FDisplayClusterConfigurationViewport_AllNodesColorGrading::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_AllNodesColorGrading_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_AllNodesColorGrading"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_AllNodesColorGrading, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_AllNodesColorGrading), 1248379139U) },
		{ FDisplayClusterConfigurationViewport_PerNodeColorGrading::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_PerNodeColorGrading_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_PerNodeColorGrading"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_PerNodeColorGrading, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_PerNodeColorGrading), 2196280147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Postprocess_h_748624832(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Postprocess_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Postprocess_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
