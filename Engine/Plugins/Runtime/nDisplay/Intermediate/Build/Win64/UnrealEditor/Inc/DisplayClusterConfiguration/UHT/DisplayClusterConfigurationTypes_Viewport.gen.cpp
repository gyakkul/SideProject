// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_Viewport.h"
#include "DisplayClusterConfigurationTypes_Base.h"
#include "DisplayClusterConfigurationTypes_Media.h"
#include "DisplayClusterConfigurationTypes_Postprocess.h"
#include "DisplayClusterConfigurationTypes_PostRender.h"
#include "DisplayClusterConfigurationTypes_ViewportRemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_Viewport() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationData_Base();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationViewport();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationViewport_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Overscan;
class UScriptStruct* FDisplayClusterConfigurationViewport_Overscan::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Overscan.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Overscan.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_Overscan"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Overscan.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_Overscan>()
{
	return FDisplayClusterConfigurationViewport_Overscan::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOversize_MetaData[];
#endif
		static void NewProp_bOversize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOversize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_Overscan>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "/** Enable/disable Viewport Overscan and specify units as percent or pixel values. */" },
		{ "DisplayName", "Enable" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Enable/disable Viewport Overscan and specify units as percent or pixel values." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_Overscan*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_Overscan), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "/** Enable/disable Viewport Overscan and specify units as percent or pixel values. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Enable/disable Viewport Overscan and specify units as percent or pixel values." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_Overscan, Mode), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Mode_MetaData)) }; // 2734492961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "/** Left */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Left" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_Overscan, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "/** Right */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Right" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_Overscan, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "/** Top */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Top" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_Overscan, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Bottom_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "/** Bottom */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Bottom" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_Overscan, Bottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Bottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bOversize_MetaData[] = {
		{ "Category", "NDisplay Viewport" },
		{ "Comment", "/** Set to True to render at the overscan resolution, set to false to render at the resolution in the configuration and scale for overscan. */" },
		{ "DisplayAfter", "Mode" },
		{ "DisplayName", "Adapt Resolution" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Set to True to render at the overscan resolution, set to false to render at the resolution in the configuration and scale for overscan." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bOversize_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_Overscan*)Obj)->bOversize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bOversize = { "bOversize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_Overscan), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bOversize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bOversize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bOversize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_Bottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewProp_bOversize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_Overscan",
		sizeof(FDisplayClusterConfigurationViewport_Overscan),
		alignof(FDisplayClusterConfigurationViewport_Overscan),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Overscan.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Overscan.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Overscan.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ICVFX;
class UScriptStruct* FDisplayClusterConfigurationViewport_ICVFX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ICVFX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ICVFX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_ICVFX"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ICVFX.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_ICVFX>()
{
	return FDisplayClusterConfigurationViewport_ICVFX::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowICVFX_MetaData[];
#endif
		static void NewProp_bAllowICVFX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowICVFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInnerFrustum_MetaData[];
#endif
		static void NewProp_bAllowInnerFrustum_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInnerFrustum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CameraRenderMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRenderMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraRenderMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightcardRenderMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightcardRenderMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightcardRenderMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_ICVFX>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowICVFX_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "Comment", "/** Enable in-camera VFX for this Viewport (works only with supported Projection Policies) */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Enable in-camera VFX for this Viewport (works only with supported Projection Policies)" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowICVFX_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ICVFX*)Obj)->bAllowICVFX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowICVFX = { "bAllowICVFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_ICVFX), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowICVFX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowICVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowICVFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowInnerFrustum_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "Comment", "/** Allow the inner frustum to appear on this Viewport */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Allow the inner frustum to appear on this Viewport" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowInnerFrustum_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_ICVFX*)Obj)->bAllowInnerFrustum = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowInnerFrustum = { "bAllowInnerFrustum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_ICVFX), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowInnerFrustum_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowInnerFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowInnerFrustum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_CameraRenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_CameraRenderMode_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "Comment", "/** Disable incamera render to this viewport */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Disable incamera render to this viewport" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_CameraRenderMode = { "CameraRenderMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ICVFX, CameraRenderMode), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_CameraRenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_CameraRenderMode_MetaData)) }; // 3491160545
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_LightcardRenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_LightcardRenderMode_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "Comment", "/** Use unique lightcard mode for this viewport */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Use unique lightcard mode for this viewport" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_LightcardRenderMode = { "LightcardRenderMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_ICVFX, LightcardRenderMode), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_LightcardRenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_LightcardRenderMode_MetaData)) }; // 3924757711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowICVFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_bAllowInnerFrustum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_CameraRenderMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_CameraRenderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_LightcardRenderMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewProp_LightcardRenderMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_ICVFX",
		sizeof(FDisplayClusterConfigurationViewport_ICVFX),
		alignof(FDisplayClusterConfigurationViewport_ICVFX),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ICVFX.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ICVFX.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ICVFX.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RenderSettings;
class UScriptStruct* FDisplayClusterConfigurationViewport_RenderSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RenderSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RenderSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationViewport_RenderSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RenderSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationViewport_RenderSettings>()
{
	return FDisplayClusterConfigurationViewport_RenderSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCrossGPUTransfer_MetaData[];
#endif
		static void NewProp_bEnableCrossGPUTransfer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCrossGPUTransfer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoGPUIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StereoGPUIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StereoMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StereoMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderTargetRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPostprocess_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPostprocess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Replace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Replace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostprocessBlur_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostprocessBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateMips_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overscan_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Overscan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Media;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderFamilyGroup_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RenderFamilyGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationViewport_RenderSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_bEnableCrossGPUTransfer_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/* Enable cross-GPU transfer for this viewport.\n\x09 * It may be disabled in some configurations. For example, when using offscreen rendering with TextureShare,\n\x09 * cross-gpu transfer can be disabled for this viewport to improve performance, because when transfer is called, \n\x09 * it freezes the GPUs until synchronization is reached.\n\x09 * (TextureShare uses its own implementation of the crossGPU transfer for the shared textures.) */" },
		{ "DisplayName", "Enable Cross-GPU Transfer" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Enable cross-GPU transfer for this viewport.\n       * It may be disabled in some configurations. For example, when using offscreen rendering with TextureShare,\n       * cross-gpu transfer can be disabled for this viewport to improve performance, because when transfer is called,\n       * it freezes the GPUs until synchronization is reached.\n       * (TextureShare uses its own implementation of the crossGPU transfer for the shared textures.)" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_bEnableCrossGPUTransfer_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationViewport_RenderSettings*)Obj)->bEnableCrossGPUTransfer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_bEnableCrossGPUTransfer = { "bEnableCrossGPUTransfer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationViewport_RenderSettings), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_bEnableCrossGPUTransfer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_bEnableCrossGPUTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_bEnableCrossGPUTransfer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoGPUIndex_MetaData[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/** Specify which GPU should render the second Stereo eye */" },
		{ "DisplayName", "Stereo GPU Index" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Specify which GPU should render the second Stereo eye" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoGPUIndex = { "StereoGPUIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, StereoGPUIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoGPUIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoGPUIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoMode_MetaData[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/** Enables and sets Stereo mode */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Enables and sets Stereo mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoMode = { "StereoMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, StereoMode), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoMode_MetaData)) }; // 2328558816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_BufferRatio_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** Adjust resolution scaling for an individual viewport.  Viewport Screen Percentage Multiplier is applied to this value. */" },
		{ "DisplayName", "Screen Percentage" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Adjust resolution scaling for an individual viewport.  Viewport Screen Percentage Multiplier is applied to this value." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_BufferRatio = { "BufferRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, BufferRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_BufferRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_BufferRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderTargetRatio_MetaData[] = {
		{ "Comment", "/** Adjust resolution scaling for an individual viewport.  Viewport Screen Percentage Multiplier is applied to this value. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Adjust resolution scaling for an individual viewport.  Viewport Screen Percentage Multiplier is applied to this value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderTargetRatio = { "RenderTargetRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, RenderTargetRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderTargetRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderTargetRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_CustomPostprocess_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_CustomPostprocess = { "CustomPostprocess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, CustomPostprocess), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_CustomPostprocess, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_CustomPostprocess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_CustomPostprocess_MetaData)) }; // 2155419442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Replace_MetaData[] = {
		{ "Category", "Texture Replacement" },
		{ "Comment", "/** Override viewport render from source texture */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Override viewport render from source texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Replace = { "Replace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, Replace), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Replace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Replace_MetaData)) }; // 3227398443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_PostprocessBlur_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Add postprocess blur to viewport */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Add postprocess blur to viewport" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_PostprocessBlur = { "PostprocessBlur", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, PostprocessBlur), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_PostprocessBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_PostprocessBlur_MetaData)) }; // 1715073451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_GenerateMips_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Generate Mips texture for this viewport (used, only if projection policy supports this feature) */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Generate Mips texture for this viewport (used, only if projection policy supports this feature)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_GenerateMips = { "GenerateMips", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, GenerateMips), Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_GenerateMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_GenerateMips_MetaData)) }; // 577332739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Overscan_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Render a larger frame than specified in the configuration to achieve continuity across displays when using post-processing effects. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Render a larger frame than specified in the configuration to achieve continuity across displays when using post-processing effects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Overscan = { "Overscan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, Overscan), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Overscan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Overscan_MetaData)) }; // 1309298969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Media_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "// Media settings\n" },
		{ "DisplayName", "Media" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Media settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, Media), Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Media_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Media_MetaData)) }; // 535632961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderFamilyGroup_MetaData[] = {
		{ "Comment", "// Experimental: Support special frame builder mode - merge viewports to single viewfamily by group num\n// [not implemented yet]\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Experimental: Support special frame builder mode - merge viewports to single viewfamily by group num\n[not implemented yet]" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderFamilyGroup = { "RenderFamilyGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationViewport_RenderSettings, RenderFamilyGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderFamilyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderFamilyGroup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_bEnableCrossGPUTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoGPUIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_StereoMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_BufferRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderTargetRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_CustomPostprocess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Replace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_PostprocessBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_GenerateMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Overscan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_Media,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewProp_RenderFamilyGroup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationViewport_RenderSettings",
		sizeof(FDisplayClusterConfigurationViewport_RenderSettings),
		alignof(FDisplayClusterConfigurationViewport_RenderSettings),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RenderSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RenderSettings.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RenderSettings.InnerSingleton;
	}
	void UDisplayClusterConfigurationViewport::StaticRegisterNativesUDisplayClusterConfigurationViewport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfigurationViewport);
	UClass* Z_Construct_UClass_UDisplayClusterConfigurationViewport_NoRegister()
	{
		return UDisplayClusterConfigurationViewport::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRendering_MetaData[];
#endif
		static void NewProp_bAllowRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionPolicy;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPreviewFrustumRendering_MetaData[];
#endif
		static void NewProp_bAllowPreviewFrustumRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPreviewFrustumRendering;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportRemap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OverlapOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GPUIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ICVFX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ICVFX;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixedAspectRatio_MetaData[];
#endif
		static void NewProp_bFixedAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnlocked_MetaData[];
#endif
		static void NewProp_bIsUnlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnlocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterConfigurationData_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DisplayClusterConfigurationTypes_Viewport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowRendering_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Enables or disables rendering of this specific Viewport */" },
		{ "DisplayName", "Enable Viewport" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Enables or disables rendering of this specific Viewport" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowRendering_SetBit(void* Obj)
	{
		((UDisplayClusterConfigurationViewport*)Obj)->bAllowRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowRendering = { "bAllowRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterConfigurationViewport), &Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowRendering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Reference to the nDisplay View Origin */" },
		{ "DisplayName", "View Origin" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Reference to the nDisplay View Origin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfigurationViewport, Camera), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ProjectionPolicy_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Specify your Projection Policy Settings */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Specify your Projection Policy Settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ProjectionPolicy = { "ProjectionPolicy", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfigurationViewport, ProjectionPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ProjectionPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ProjectionPolicy_MetaData)) }; // 1920878084
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowPreviewFrustumRendering_MetaData[] = {
		{ "Category", "Preview" },
		{ "DisplayName", "Preview Frustum" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowPreviewFrustumRendering_SetBit(void* Obj)
	{
		((UDisplayClusterConfigurationViewport*)Obj)->bAllowPreviewFrustumRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowPreviewFrustumRendering = { "bAllowPreviewFrustumRendering", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterConfigurationViewport), &Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowPreviewFrustumRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowPreviewFrustumRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowPreviewFrustumRendering_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Region_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Define the Viewport 2D coordinates */" },
		{ "DisplayMode", "Compound" },
		{ "FixedAspectRatioProperty", "bFixedAspectRatio" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Define the Viewport 2D coordinates" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfigurationViewport, Region), Z_Construct_UScriptStruct_FDisplayClusterConfigurationRectangle, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Region_MetaData)) }; // 1616584617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ViewportRemap_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Define the Viewport Remap settings */" },
		{ "DisplayName", "Remapping" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Define the Viewport Remap settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ViewportRemap = { "ViewportRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfigurationViewport, ViewportRemap), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Remap, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ViewportRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ViewportRemap_MetaData)) }; // 3057587866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_OverlapOrder_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Allows Viewports to overlap and sets Viewport overlapping order priority */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Allows Viewports to overlap and sets Viewport overlapping order priority" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_OverlapOrder = { "OverlapOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfigurationViewport, OverlapOrder), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_OverlapOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_OverlapOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_GPUIndex_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Specify which GPU should render this Viewport. \"-1\" is default. */" },
		{ "DisplayName", "GPU Index" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Specify which GPU should render this Viewport. \"-1\" is default." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_GPUIndex = { "GPUIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfigurationViewport, GPUIndex), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_GPUIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_GPUIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_RenderSettings_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "// Configure render for this viewport\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Configure render for this viewport" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_RenderSettings = { "RenderSettings", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfigurationViewport, RenderSettings), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_RenderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_RenderSettings_MetaData)) }; // 3669240246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ICVFX_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "Comment", "// Configure ICVFX for this viewport\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Configure ICVFX for this viewport" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ICVFX = { "ICVFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfigurationViewport, ICVFX), Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ICVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ICVFX_MetaData)) }; // 1147670710
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bFixedAspectRatio_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Locks the Viewport aspect ratio for easier resizing */" },
		{ "HideProperty", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Locks the Viewport aspect ratio for easier resizing" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bFixedAspectRatio_SetBit(void* Obj)
	{
		((UDisplayClusterConfigurationViewport*)Obj)->bFixedAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bFixedAspectRatio = { "bFixedAspectRatio", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterConfigurationViewport), &Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bFixedAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bFixedAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bFixedAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsUnlocked_MetaData[] = {
		{ "Category", "Configuration" },
		{ "HideProperty", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsUnlocked_SetBit(void* Obj)
	{
		((UDisplayClusterConfigurationViewport*)Obj)->bIsUnlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsUnlocked = { "bIsUnlocked", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterConfigurationViewport), &Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsUnlocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Category", "Configuration" },
		{ "HideProperty", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UDisplayClusterConfigurationViewport*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterConfigurationViewport), &Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsVisible_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ProjectionPolicy,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bAllowPreviewFrustumRendering,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ViewportRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_OverlapOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_GPUIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_RenderSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_ICVFX,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bFixedAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsUnlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::NewProp_bIsVisible,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfigurationViewport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::ClassParams = {
		&UDisplayClusterConfigurationViewport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterConfigurationViewport()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfigurationViewport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfigurationViewport.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfigurationViewport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfigurationViewport.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UClass* StaticClass<UDisplayClusterConfigurationViewport>()
	{
		return UDisplayClusterConfigurationViewport::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfigurationViewport);
	UDisplayClusterConfigurationViewport::~UDisplayClusterConfigurationViewport() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRenderFrame;
class UScriptStruct* FDisplayClusterConfigurationRenderFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRenderFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRenderFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationRenderFrame"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRenderFrame.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationRenderFrame>()
{
	return FDisplayClusterConfigurationRenderFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRenderTargetAtlasing_MetaData[];
#endif
		static void NewProp_bAllowRenderTargetAtlasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRenderTargetAtlasing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewFamilyMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewFamilyMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewFamilyMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseParentViewportRenderFamily_MetaData[];
#endif
		static void NewProp_bShouldUseParentViewportRenderFamily_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseParentViewportRenderFamily;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterRenderTargetRatioMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterRenderTargetRatioMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterICVFXInnerViewportRenderTargetRatioMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterICVFXInnerViewportRenderTargetRatioMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterICVFXOuterViewportRenderTargetRatioMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterICVFXOuterViewportRenderTargetRatioMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterBufferRatioMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterBufferRatioMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterICVFXInnerFrustumBufferRatioMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterICVFXInnerFrustumBufferRatioMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterICVFXOuterViewportBufferRatioMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterICVFXOuterViewportBufferRatioMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowWarpBlend_MetaData[];
#endif
		static void NewProp_bAllowWarpBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWarpBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This struct now stored in UDisplayClusterConfigurationData, and replicated with MultiUser\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "This struct now stored in UDisplayClusterConfigurationData, and replicated with MultiUser" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationRenderFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowRenderTargetAtlasing_MetaData[] = {
		{ "Comment", "// Performance: Allow merge multiple viewports on single RTT with atlasing (required for bAllowViewFamilyMergeOptimization)\n// [not implemented yet] Experimental\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Performance: Allow merge multiple viewports on single RTT with atlasing (required for bAllowViewFamilyMergeOptimization)\n[not implemented yet] Experimental" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowRenderTargetAtlasing_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationRenderFrame*)Obj)->bAllowRenderTargetAtlasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowRenderTargetAtlasing = { "bAllowRenderTargetAtlasing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationRenderFrame), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowRenderTargetAtlasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowRenderTargetAtlasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowRenderTargetAtlasing_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ViewFamilyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ViewFamilyMode_MetaData[] = {
		{ "Comment", "// Performance: Allow viewfamily merge optimization (render multiple viewports contexts within single family)\n// [not implemented yet] Experimental\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Performance: Allow viewfamily merge optimization (render multiple viewports contexts within single family)\n[not implemented yet] Experimental" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ViewFamilyMode = { "ViewFamilyMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationRenderFrame, ViewFamilyMode), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ViewFamilyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ViewFamilyMode_MetaData)) }; // 1432233356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bShouldUseParentViewportRenderFamily_MetaData[] = {
		{ "Comment", "// Performance: Allow to use parent ViewFamily from parent viewport \n// (icvfx has child viewports: lightcard and chromakey with prj_view matrices copied from parent viewport. May sense to use same viewfamily?)\n// [not implemented yet] Experimental\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Performance: Allow to use parent ViewFamily from parent viewport\n(icvfx has child viewports: lightcard and chromakey with prj_view matrices copied from parent viewport. May sense to use same viewfamily?)\n[not implemented yet] Experimental" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bShouldUseParentViewportRenderFamily_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationRenderFrame*)Obj)->bShouldUseParentViewportRenderFamily = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bShouldUseParentViewportRenderFamily = { "bShouldUseParentViewportRenderFamily", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationRenderFrame), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bShouldUseParentViewportRenderFamily_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bShouldUseParentViewportRenderFamily_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bShouldUseParentViewportRenderFamily_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterRenderTargetRatioMult_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.05" },
		{ "Comment", "// Multiply all viewports RTT size's for whole cluster by this value\n" },
		{ "DisplayName", "Global Viewport RTT Size Multiplier" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Multiply all viewports RTT size's for whole cluster by this value" },
		{ "UIMax", "10" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterRenderTargetRatioMult = { "ClusterRenderTargetRatioMult", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationRenderFrame, ClusterRenderTargetRatioMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterRenderTargetRatioMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterRenderTargetRatioMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerViewportRenderTargetRatioMult_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.05" },
		{ "Comment", "// Multiply inner frustum RTT size's for whole cluster by this value\n" },
		{ "DisplayName", "Inner Frustum RTT Size Multiplier" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Multiply inner frustum RTT size's for whole cluster by this value" },
		{ "UIMax", "10" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerViewportRenderTargetRatioMult = { "ClusterICVFXInnerViewportRenderTargetRatioMult", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationRenderFrame, ClusterICVFXInnerViewportRenderTargetRatioMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerViewportRenderTargetRatioMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerViewportRenderTargetRatioMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportRenderTargetRatioMult_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.05" },
		{ "Comment", "// Multiply outer viewports RTT size's for whole cluster by this value\n" },
		{ "DisplayName", "Outer Viewport RTT Size Multiplier" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Multiply outer viewports RTT size's for whole cluster by this value" },
		{ "UIMax", "10" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportRenderTargetRatioMult = { "ClusterICVFXOuterViewportRenderTargetRatioMult", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationRenderFrame, ClusterICVFXOuterViewportRenderTargetRatioMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportRenderTargetRatioMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportRenderTargetRatioMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterBufferRatioMult_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.05" },
		{ "Comment", "// Multiply all buffer ratios for whole cluster by this value\n" },
		{ "DisplayName", "Global Viewport Screen Percentage Multiplier" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Multiply all buffer ratios for whole cluster by this value" },
		{ "UIMax", "10" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterBufferRatioMult = { "ClusterBufferRatioMult", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationRenderFrame, ClusterBufferRatioMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterBufferRatioMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterBufferRatioMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerFrustumBufferRatioMult_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.05" },
		{ "Comment", "// Multiply inner frustums buffer ratios for whole cluster by this value\n" },
		{ "DisplayName", "Inner Frustum Screen Percentage Multiplier" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Multiply inner frustums buffer ratios for whole cluster by this value" },
		{ "UIMax", "10" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerFrustumBufferRatioMult = { "ClusterICVFXInnerFrustumBufferRatioMult", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationRenderFrame, ClusterICVFXInnerFrustumBufferRatioMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerFrustumBufferRatioMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerFrustumBufferRatioMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportBufferRatioMult_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.05" },
		{ "Comment", "// Multiply the screen percentage for all viewports in the cluster by this value.\n" },
		{ "DisplayName", "Viewport Screen Percentage Multiplier" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Multiply the screen percentage for all viewports in the cluster by this value." },
		{ "UIMax", "1" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportBufferRatioMult = { "ClusterICVFXOuterViewportBufferRatioMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationRenderFrame, ClusterICVFXOuterViewportBufferRatioMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportBufferRatioMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportBufferRatioMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowWarpBlend_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "// Allow warpblend render\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Viewport.h" },
		{ "ToolTip", "Allow warpblend render" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowWarpBlend_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationRenderFrame*)Obj)->bAllowWarpBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowWarpBlend = { "bAllowWarpBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationRenderFrame), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowWarpBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowWarpBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowWarpBlend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowRenderTargetAtlasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ViewFamilyMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ViewFamilyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bShouldUseParentViewportRenderFamily,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterRenderTargetRatioMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerViewportRenderTargetRatioMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportRenderTargetRatioMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterBufferRatioMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXInnerFrustumBufferRatioMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_ClusterICVFXOuterViewportBufferRatioMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewProp_bAllowWarpBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationRenderFrame",
		sizeof(FDisplayClusterConfigurationRenderFrame),
		alignof(FDisplayClusterConfigurationRenderFrame),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRenderFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRenderFrame.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRenderFrame.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Viewport_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Viewport_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationViewport_Overscan::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_Overscan_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_Overscan"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_Overscan, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_Overscan), 1309298969U) },
		{ FDisplayClusterConfigurationViewport_ICVFX::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_ICVFX_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_ICVFX"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_ICVFX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_ICVFX), 1147670710U) },
		{ FDisplayClusterConfigurationViewport_RenderSettings::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationViewport_RenderSettings_Statics::NewStructOps, TEXT("DisplayClusterConfigurationViewport_RenderSettings"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationViewport_RenderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationViewport_RenderSettings), 3669240246U) },
		{ FDisplayClusterConfigurationRenderFrame::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationRenderFrame_Statics::NewStructOps, TEXT("DisplayClusterConfigurationRenderFrame"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationRenderFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationRenderFrame), 1054241926U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Viewport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterConfigurationViewport, UDisplayClusterConfigurationViewport::StaticClass, TEXT("UDisplayClusterConfigurationViewport"), &Z_Registration_Info_UClass_UDisplayClusterConfigurationViewport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfigurationViewport), 1521051053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Viewport_h_195467769(TEXT("/Script/DisplayClusterConfiguration"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Viewport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Viewport_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Viewport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Viewport_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
