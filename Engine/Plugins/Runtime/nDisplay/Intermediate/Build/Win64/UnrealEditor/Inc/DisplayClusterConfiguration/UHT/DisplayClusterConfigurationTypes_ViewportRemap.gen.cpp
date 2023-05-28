// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_ViewportRemap.h"
#include "DisplayClusterConfigurationTypes_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_ViewportRemap() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RemapData;
class UScriptStruct* FDisplayClusterConfigurationViewport_RemapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RemapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RemapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_RemapData"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RemapData.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_RemapData>()
{
	return FDisplayClusterConfigurationViewport_RemapData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportRegion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputRegion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipH_MetaData[];
#endif
		static void NewProp_bFlipH_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipH;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipV_MetaData[];
#endif
		static void NewProp_bFlipV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Remapping configuration for a single remapped region, which can be any subregion of a viewport, and can be remapped to any\n * part of the screen, and can be rotated or flipped\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "Remapping configuration for a single remapped region, which can be any subregion of a viewport, and can be remapped to any\npart of the screen, and can be rotated or flipped" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_RemapData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_ViewportRegion_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The subregion of the viewport to remap; (0,0) x (W, H) will remap the entire viewport */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "The subregion of the viewport to remap; (0,0) x (W, H) will remap the entire viewport" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_ViewportRegion = { "ViewportRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RemapData, ViewportRegion), Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_ViewportRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_ViewportRegion_MetaData)) }; // 1616584617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_OutputRegion_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The region in screen space to output the remapped region to */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "The region in screen space to output the remapped region to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_OutputRegion = { "OutputRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RemapData, OutputRegion), Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_OutputRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_OutputRegion_MetaData)) }; // 1616584617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The angle in degrees to rotate the remapped region by; rotation is performed around the center of the output region */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "The angle in degrees to rotate the remapped region by; rotation is performed around the center of the output region" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RemapData, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipH_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Flips the remapped region horizontally */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "Flips the remapped region horizontally" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipH_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_RemapData*)Obj)->bFlipH = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipH = { "bFlipH", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_RemapData), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipH_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipH_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipV_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Flips the remapped region vertically */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "Flips the remapped region vertically" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipV_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_RemapData*)Obj)->bFlipV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipV = { "bFlipV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_RemapData), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipV_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_ViewportRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_OutputRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewProp_bFlipV,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_RemapData",
		sizeof(FDisplayClusterConfigurationViewport_RemapData),
		alignof(FDisplayClusterConfigurationViewport_RemapData),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RemapData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RemapData.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RemapData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Remap;
class UScriptStruct* FDisplayClusterConfigurationViewport_Remap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Remap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Remap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_Remap"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Remap.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_Remap>()
{
	return FDisplayClusterConfigurationViewport_Remap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRemap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRemap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemapRegions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapRegions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemapRegions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Configuration for all remapping to apply to a single viewport */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "Configuration for all remapping to apply to a single viewport" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_Remap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Enables or disables viweport output remapping */" },
		{ "DisplayName", "Enable Output Remapping" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "Enables or disables viweport output remapping" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_Remap*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_Remap), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_BaseRemap_MetaData[] = {
		{ "AngleInterval", "90" },
		{ "Category", "Configuration" },
		{ "Comment", "/** The base remap to apply to the entire viewport, used to apply flipping and rotation to the viewport */" },
		{ "EditCondition", "bEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "NoHeader", "" },
		{ "Simplified", "" },
		{ "ToolTip", "The base remap to apply to the entire viewport, used to apply flipping and rotation to the viewport" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_BaseRemap = { "BaseRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_Remap, BaseRemap), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_BaseRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_BaseRemap_MetaData)) }; // 439816455
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_RemapRegions_Inner = { "RemapRegions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData, METADATA_PARAMS(nullptr, 0) }; // 439816455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_RemapRegions_MetaData[] = {
		{ "Comment", "/** Additional remaps to apply to the viewport, can be used to subdivide the viewport into multiple outputs. Experimental, not exposed to users at this time */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_ViewportRemap.h" },
		{ "ToolTip", "Additional remaps to apply to the viewport, can be used to subdivide the viewport into multiple outputs. Experimental, not exposed to users at this time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_RemapRegions = { "RemapRegions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_Remap, RemapRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_RemapRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_RemapRegions_MetaData)) }; // 439816455
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_BaseRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_RemapRegions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewProp_RemapRegions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_Remap",
		sizeof(FDisplayClusterConfigurationViewport_Remap),
		alignof(FDisplayClusterConfigurationViewport_Remap),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Remap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Remap.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Remap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_ViewportRemap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_ViewportRemap_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationViewport_RemapData::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RemapData_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_RemapData"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RemapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_RemapData), 439816455U) },
		{ FDisplayClusterConfigurationViewport_Remap::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_Remap"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Remap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_Remap), 3057587866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_ViewportRemap_h_2059240111(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_ViewportRemap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_ViewportRemap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
