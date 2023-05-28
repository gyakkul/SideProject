// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterCurveSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterCurveSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterCurveSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterCurveSettings;
class UScriptStruct* FWaterCurveSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterCurveSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterCurveSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterCurveSettings, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterCurveSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WaterCurveSettings.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterCurveSettings>()
{
	return FWaterCurveSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterCurveSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurveChannel_MetaData[];
#endif
		static void NewProp_bUseCurveChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurveChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevationCurveAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ElevationCurveAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelEdgeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChannelEdgeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChannelDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveRampWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveRampWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterCurveSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterCurveSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_bUseCurveChannel_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterCurveSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_bUseCurveChannel_SetBit(void* Obj)
	{
		((FWaterCurveSettings*)Obj)->bUseCurveChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_bUseCurveChannel = { "bUseCurveChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWaterCurveSettings), &Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_bUseCurveChannel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_bUseCurveChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_bUseCurveChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ElevationCurveAsset_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterCurveSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ElevationCurveAsset = { "ElevationCurveAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterCurveSettings, ElevationCurveAsset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ElevationCurveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ElevationCurveAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelEdgeOffset_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterCurveSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelEdgeOffset = { "ChannelEdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterCurveSettings, ChannelEdgeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelEdgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelEdgeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelDepth_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterCurveSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterCurveSettings, ChannelDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_CurveRampWidth_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterCurveSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_CurveRampWidth = { "CurveRampWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterCurveSettings, CurveRampWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_CurveRampWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_CurveRampWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_bUseCurveChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ElevationCurveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelEdgeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_ChannelDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewProp_CurveRampWidth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterCurveSettings",
		sizeof(FWaterCurveSettings),
		alignof(FWaterCurveSettings),
		Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterCurveSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterCurveSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterCurveSettings.InnerSingleton, Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterCurveSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterCurveSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterCurveSettings_h_Statics::ScriptStructInfo[] = {
		{ FWaterCurveSettings::StaticStruct, Z_Construct_UScriptStruct_FWaterCurveSettings_Statics::NewStructOps, TEXT("WaterCurveSettings"), &Z_Registration_Info_UScriptStruct_WaterCurveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterCurveSettings), 1417696216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterCurveSettings_h_3082493511(TEXT("/Script/Water"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterCurveSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterCurveSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
