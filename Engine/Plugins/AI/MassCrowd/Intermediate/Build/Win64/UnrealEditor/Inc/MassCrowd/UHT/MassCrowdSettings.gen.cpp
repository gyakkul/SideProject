// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdSettings.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSettings();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSettings_NoRegister();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdLaneDensityDesc;
class UScriptStruct* FMassCrowdLaneDensityDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdLaneDensityDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdLaneDensityDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassCrowdLaneDensityDesc"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdLaneDensityDesc.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdLaneDensityDesc>()
{
	return FMassCrowdLaneDensityDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure holding data to associate lane densities to\n * weights so lane selection at intersection could use that\n * to maintain overall density during the simulation\n */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Structure holding data to associate lane densities to\nweights so lane selection at intersection could use that\nto maintain overall density during the simulation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdLaneDensityDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Lane Density" },
		{ "Comment", "/** Tag representing the lane density. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Tag representing the lane density." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassCrowdLaneDensityDesc, Tag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Tag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Lane Density" },
		{ "Comment", "/**\n\x09 * Weight associated to the current lane density.\n\x09 * This weight is used during lane selection at intersection\n\x09 * and the random selection will consider the weight of each\n\x09 * lane and the combined weight of all lanes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Weight associated to the current lane density.\nThis weight is used during lane selection at intersection\nand the random selection will consider the weight of each\nlane and the combined weight of all lanes." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassCrowdLaneDensityDesc, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_RenderColor_MetaData[] = {
		{ "Category", "Lane Density" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_RenderColor = { "RenderColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassCrowdLaneDensityDesc, RenderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_RenderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_RenderColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewProp_RenderColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		&NewStructOps,
		"MassCrowdLaneDensityDesc",
		sizeof(FMassCrowdLaneDensityDesc),
		alignof(FMassCrowdLaneDensityDesc),
		Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCrowdLaneDensityDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdLaneDensityDesc.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCrowdLaneDensityDesc.InnerSingleton;
	}
	void UMassCrowdSettings::StaticRegisterNativesUMassCrowdSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdSettings);
	UClass* Z_Construct_UClass_UMassCrowdSettings_NoRegister()
	{
		return UMassCrowdSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneBaseLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneBaseLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneRenderZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneRenderZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionLaneScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectionLaneScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneDensityScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneDensityScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenedLaneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OpenedLaneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosedLaneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosedLaneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrowdTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossingTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrossingTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SlotSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayTrackingData_MetaData[];
#endif
		static void NewProp_bDisplayTrackingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayTrackingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayStates_MetaData[];
#endif
		static void NewProp_bDisplayStates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayDensities_MetaData[];
#endif
		static void NewProp_bDisplayDensities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayDensities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleStoppingSpeedTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleStoppingSpeedTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleMovingDistanceTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleMovingDistanceTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleTimeToStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleTimeToStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleEffectRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleEffectRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistanceRandomDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistanceRandomDeviation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneDensities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneDensities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaneDensities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the MassCrowd plugin.\n */" },
		{ "DisplayName", "Mass Crowd" },
		{ "IncludePath", "MassCrowdSettings.h" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Settings for the MassCrowd plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneBaseLineThickness_MetaData[] = {
		{ "Category", "Lane Debug Rendering" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Base thickness used to render lane data specific to crowd. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Base thickness used to render lane data specific to crowd." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneBaseLineThickness = { "LaneBaseLineThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, LaneBaseLineThickness), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneBaseLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneBaseLineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneRenderZOffset_MetaData[] = {
		{ "Category", "Lane Debug Rendering" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Z offset used to render lane data specific to crowd over the actual zone graph. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Z offset used to render lane data specific to crowd over the actual zone graph." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneRenderZOffset = { "LaneRenderZOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, LaneRenderZOffset), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneRenderZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneRenderZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_IntersectionLaneScaleFactor_MetaData[] = {
		{ "Category", "Lane Debug Rendering" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Scale factor applied on the base thickness to render intersection lanes data. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Scale factor applied on the base thickness to render intersection lanes data." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_IntersectionLaneScaleFactor = { "IntersectionLaneScaleFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, IntersectionLaneScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_IntersectionLaneScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_IntersectionLaneScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensityScaleFactor_MetaData[] = {
		{ "Category", "Lane Debug Rendering" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Scale factor applied on the base or intersection thickness to render density outline. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Scale factor applied on the base or intersection thickness to render density outline." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensityScaleFactor = { "LaneDensityScaleFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, LaneDensityScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensityScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensityScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_OpenedLaneColor_MetaData[] = {
		{ "Category", "Lane Density" },
		{ "Comment", "/** Color used to render crowd lane that are opened for navigation. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Color used to render crowd lane that are opened for navigation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_OpenedLaneColor = { "OpenedLaneColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, OpenedLaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_OpenedLaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_OpenedLaneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ClosedLaneColor_MetaData[] = {
		{ "Category", "Lane Density" },
		{ "Comment", "/** Color used to render crowd lane that are closed to navigation. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Color used to render crowd lane that are closed to navigation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ClosedLaneColor = { "ClosedLaneColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, ClosedLaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ClosedLaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ClosedLaneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrowdTag_MetaData[] = {
		{ "Category", "Lane" },
		{ "Comment", "/** Tag required on a lane to build crowd related runtime data for it and render it. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Tag required on a lane to build crowd related runtime data for it and render it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrowdTag = { "CrowdTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, CrowdTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrowdTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrowdTag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrossingTag_MetaData[] = {
		{ "Category", "Lane" },
		{ "Comment", "/** Tag required on a lane to build intersection crossing runtime data for it. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Tag required on a lane to build intersection crossing runtime data for it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrossingTag = { "CrossingTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, CrossingTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrossingTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrossingTag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotSize_MetaData[] = {
		{ "Category", "WaitArea" },
		{ "Comment", "/** Distance reserved for each entity while waiting on an intersection lane. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Distance reserved for each entity while waiting on an intersection lane." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotSize = { "SlotSize", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, SlotSize), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotOffset_MetaData[] = {
		{ "Category", "WaitArea" },
		{ "Comment", "/** Offset from the lane entry where the slots are created. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Offset from the lane entry where the slots are created." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotOffset = { "SlotOffset", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, SlotOffset), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayTrackingData_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Text will be added on lanes with entity tracking or waiting area to indicate the current occupation */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Text will be added on lanes with entity tracking or waiting area to indicate the current occupation" },
	};
#endif
	void Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayTrackingData_SetBit(void* Obj)
	{
		((UMassCrowdSettings*)Obj)->bDisplayTrackingData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayTrackingData = { "bDisplayTrackingData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassCrowdSettings), &Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayTrackingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayTrackingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayTrackingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayStates_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Lanes will be displayed to indicates the current state. See MassCrowd settings for parameters. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Lanes will be displayed to indicates the current state. See MassCrowd settings for parameters." },
	};
#endif
	void Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayStates_SetBit(void* Obj)
	{
		((UMassCrowdSettings*)Obj)->bDisplayStates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayStates = { "bDisplayStates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassCrowdSettings), &Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayStates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayDensities_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Lanes will be displayed to represent their assigned densities. See MassCrowd settings for parameters. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Lanes will be displayed to represent their assigned densities. See MassCrowd settings for parameters." },
	};
#endif
	void Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayDensities_SetBit(void* Obj)
	{
		((UMassCrowdSettings*)Obj)->bDisplayDensities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayDensities = { "bDisplayDensities", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassCrowdSettings), &Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayDensities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayDensities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayDensities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleStoppingSpeedTolerance_MetaData[] = {
		{ "Category", "Obstacles" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** An obstacle is considered being stopped when it's speed is less than the tolerance. */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "An obstacle is considered being stopped when it's speed is less than the tolerance." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleStoppingSpeedTolerance = { "ObstacleStoppingSpeedTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, ObstacleStoppingSpeedTolerance), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleStoppingSpeedTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleStoppingSpeedTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleMovingDistanceTolerance_MetaData[] = {
		{ "Category", "Obstacles" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** An obstacle is considered moving when it has moved this much after being stationary. */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "An obstacle is considered moving when it has moved this much after being stationary." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleMovingDistanceTolerance = { "ObstacleMovingDistanceTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, ObstacleMovingDistanceTolerance), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleMovingDistanceTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleMovingDistanceTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleTimeToStop_MetaData[] = {
		{ "Category", "Obstacles" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The time an obstacle needs to be not moving before it is reported as stopped.*/" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "The time an obstacle needs to be not moving before it is reported as stopped." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleTimeToStop = { "ObstacleTimeToStop", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, ObstacleTimeToStop), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleTimeToStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleTimeToStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleEffectRadius_MetaData[] = {
		{ "Category", "Obstacles" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The radius an obstacle has effects on navigation.*/" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "The radius an obstacle has effects on navigation." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleEffectRadius = { "ObstacleEffectRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, ObstacleEffectRadius), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleEffectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleEffectRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Distance ahead of the current lane location for the next movement target location. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Distance ahead of the current lane location for the next movement target location." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistanceRandomDeviation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Random deviation of the of the MoveDistance */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "Random deviation of the of the MoveDistance" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistanceRandomDeviation = { "MoveDistanceRandomDeviation", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, MoveDistanceRandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistanceRandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistanceRandomDeviation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensities_Inner = { "LaneDensities", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc, METADATA_PARAMS(nullptr, 0) }; // 594307752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensities_MetaData[] = {
		{ "Category", "Lane Density" },
		{ "Comment", "/** List of all lane density descriptors. */" },
		{ "ModuleRelativePath", "Public/MassCrowdSettings.h" },
		{ "ToolTip", "List of all lane density descriptors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensities = { "LaneDensities", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSettings, LaneDensities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensities_MetaData)) }; // 594307752
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneBaseLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneRenderZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_IntersectionLaneScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensityScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_OpenedLaneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ClosedLaneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrowdTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_CrossingTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_SlotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayTrackingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_bDisplayDensities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleStoppingSpeedTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleMovingDistanceTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleTimeToStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_ObstacleEffectRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_MoveDistanceRandomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSettings_Statics::NewProp_LaneDensities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdSettings_Statics::ClassParams = {
		&UMassCrowdSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassCrowdSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdSettings()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdSettings.OuterSingleton, Z_Construct_UClass_UMassCrowdSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdSettings.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdSettings>()
	{
		return UMassCrowdSettings::StaticClass();
	}
	UMassCrowdSettings::UMassCrowdSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdSettings);
	UMassCrowdSettings::~UMassCrowdSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_Statics::ScriptStructInfo[] = {
		{ FMassCrowdLaneDensityDesc::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdLaneDensityDesc_Statics::NewStructOps, TEXT("MassCrowdLaneDensityDesc"), &Z_Registration_Info_UScriptStruct_MassCrowdLaneDensityDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdLaneDensityDesc), 594307752U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdSettings, UMassCrowdSettings::StaticClass, TEXT("UMassCrowdSettings"), &Z_Registration_Info_UClass_UMassCrowdSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdSettings), 1245453258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_733616920(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
