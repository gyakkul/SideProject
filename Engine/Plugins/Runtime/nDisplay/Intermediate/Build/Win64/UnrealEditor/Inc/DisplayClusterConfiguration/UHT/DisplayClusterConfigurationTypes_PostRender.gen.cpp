// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_PostRender.h"
#include "DisplayClusterConfigurationTypes_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_PostRender() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_Override;
class UScriptStruct* FDisplayClusterConfigurationPostRender_Override::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_Override.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_Override.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationPostRender_Override"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_Override.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationPostRender_Override>()
{
	return FDisplayClusterConfigurationPostRender_Override::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowReplace_MetaData[];
#endif
		static void NewProp_bAllowReplace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowReplace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseTextureRegion_MetaData[];
#endif
		static void NewProp_bShouldUseTextureRegion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseTextureRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureRegion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureRegion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationPostRender_Override>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bAllowReplace_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Disable default render, and resolve SourceTexture to viewport */" },
		{ "DisplayName", "Enable Viewport Texture Replacement" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Disable default render, and resolve SourceTexture to viewport" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bAllowReplace_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationPostRender_Override*)Obj)->bAllowReplace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bAllowReplace = { "bAllowReplace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationPostRender_Override), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bAllowReplace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bAllowReplace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bAllowReplace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_SourceTexture_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Texture to use in place of the inner frustum. */" },
		{ "EditCondition", "bAllowReplace" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Texture to use in place of the inner frustum." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_Override, SourceTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_SourceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_SourceTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bShouldUseTextureRegion_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Set to True to crop the texture for the inner frustum as specified below. */" },
		{ "DisplayName", "Use Texture Crop" },
		{ "EditCondition", "bAllowReplace" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Set to True to crop the texture for the inner frustum as specified below." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bShouldUseTextureRegion_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationPostRender_Override*)Obj)->bShouldUseTextureRegion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bShouldUseTextureRegion = { "bShouldUseTextureRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationPostRender_Override), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bShouldUseTextureRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bShouldUseTextureRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bShouldUseTextureRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_TextureRegion_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Texture Crop */" },
		{ "DisplayName", "Texture Crop" },
		{ "EditCondition", "bAllowReplace && bShouldUseTextureRegion" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Texture Crop" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_TextureRegion = { "TextureRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_Override, TextureRegion), Z_Construct_UScriptStruct_FDisplayClusterReplaceTextureCropRectangle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_TextureRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_TextureRegion_MetaData)) }; // 1685760012
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bAllowReplace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_SourceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_bShouldUseTextureRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewProp_TextureRegion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationPostRender_Override",
		sizeof(FDisplayClusterConfigurationPostRender_Override),
		alignof(FDisplayClusterConfigurationPostRender_Override),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_Override.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_Override.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_Override.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_BlurPostprocess;
class UScriptStruct* FDisplayClusterConfigurationPostRender_BlurPostprocess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_BlurPostprocess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_BlurPostprocess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationPostRender_BlurPostprocess"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_BlurPostprocess.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationPostRender_BlurPostprocess>()
{
	return FDisplayClusterConfigurationPostRender_BlurPostprocess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KernelRadius_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_KernelRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KernelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KernelScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationPostRender_BlurPostprocess>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Enable/disable Post Process Blur and specify method. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Enable/disable Post Process Blur and specify method." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_BlurPostprocess, Mode), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_Mode_MetaData)) }; // 2427162365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelRadius_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Kernel Radius */" },
		{ "EditCondition", "Mode != EDisplayClusterConfiguration_PostRenderBlur::None" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Kernel Radius" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelRadius = { "KernelRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_BlurPostprocess, KernelRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelScale_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Kernel Scale */" },
		{ "EditCondition", "Mode != EDisplayClusterConfiguration_PostRenderBlur::None" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Kernel Scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelScale = { "KernelScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_BlurPostprocess, KernelScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewProp_KernelScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationPostRender_BlurPostprocess",
		sizeof(FDisplayClusterConfigurationPostRender_BlurPostprocess),
		alignof(FDisplayClusterConfigurationPostRender_BlurPostprocess),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_BlurPostprocess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_BlurPostprocess.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_BlurPostprocess.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_GenerateMips;
class UScriptStruct* FDisplayClusterConfigurationPostRender_GenerateMips::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_GenerateMips.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_GenerateMips.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationPostRender_GenerateMips"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_GenerateMips.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationPostRender_GenerateMips>()
{
	return FDisplayClusterConfigurationPostRender_GenerateMips::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateMips_MetaData[];
#endif
		static void NewProp_bAutoGenerateMips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipsSamplerFilter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipsSamplerFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipsAddressU_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipsAddressU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipsAddressV_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipsAddressV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledMaxNumMips_MetaData[];
#endif
		static void NewProp_bEnabledMaxNumMips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledMaxNumMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumMips_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxNumMips;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationPostRender_GenerateMips>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bAutoGenerateMips_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Generate and use mipmaps for the inner frustum.  Disabling this can improve performance but result in visual artifacts on the inner frustum. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Generate and use mipmaps for the inner frustum.  Disabling this can improve performance but result in visual artifacts on the inner frustum." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bAutoGenerateMips_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationPostRender_GenerateMips*)Obj)->bAutoGenerateMips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bAutoGenerateMips = { "bAutoGenerateMips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationPostRender_GenerateMips), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bAutoGenerateMips_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bAutoGenerateMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bAutoGenerateMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsSamplerFilter_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Mips Sampler Filter */" },
		{ "EditCondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Mips Sampler Filter" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsSamplerFilter = { "MipsSamplerFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_GenerateMips, MipsSamplerFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsSamplerFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsSamplerFilter_MetaData)) }; // 1243172109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressU_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** AutoGenerateMips sampler address mode for U channel. Defaults to clamp. */" },
		{ "EditCondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "AutoGenerateMips sampler address mode for U channel. Defaults to clamp." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressU = { "MipsAddressU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_GenerateMips, MipsAddressU), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressU_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressV_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** AutoGenerateMips sampler address mode for V channel. Defaults to clamp. */" },
		{ "EditCondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "AutoGenerateMips sampler address mode for V channel. Defaults to clamp." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressV = { "MipsAddressV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_GenerateMips, MipsAddressV), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressV_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bEnabledMaxNumMips_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Performance: Allows a limited number of MIPs for high resolution. */" },
		{ "DisplayName", "Enable Maximum Number of Mips" },
		{ "EditCondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Performance: Allows a limited number of MIPs for high resolution." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bEnabledMaxNumMips_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationPostRender_GenerateMips*)Obj)->bEnabledMaxNumMips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bEnabledMaxNumMips = { "bEnabledMaxNumMips", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationPostRender_GenerateMips), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bEnabledMaxNumMips_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bEnabledMaxNumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bEnabledMaxNumMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MaxNumMips_MetaData[] = {
		{ "Category", "NDisplay Render" },
		{ "Comment", "/** Performance: Use this value as the maximum number of MIPs for high resolution.  */" },
		{ "DisplayName", "Maximum Number of Mips" },
		{ "EditCondition", "bAutoGenerateMips && bEnabledMaxNumMips" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_PostRender.h" },
		{ "ToolTip", "Performance: Use this value as the maximum number of MIPs for high resolution." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MaxNumMips = { "MaxNumMips", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationPostRender_GenerateMips, MaxNumMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MaxNumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MaxNumMips_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bAutoGenerateMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsSamplerFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MipsAddressV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_bEnabledMaxNumMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewProp_MaxNumMips,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationPostRender_GenerateMips",
		sizeof(FDisplayClusterConfigurationPostRender_GenerateMips),
		alignof(FDisplayClusterConfigurationPostRender_GenerateMips),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_GenerateMips.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_GenerateMips.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_GenerateMips.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_PostRender_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_PostRender_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationPostRender_Override::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_Override_Statics::NewStructOps, TEXT("DisplayClusterConfigurationPostRender_Override"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_Override, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationPostRender_Override), 3227398443U) },
		{ FDisplayClusterConfigurationPostRender_BlurPostprocess::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_BlurPostprocess_Statics::NewStructOps, TEXT("DisplayClusterConfigurationPostRender_BlurPostprocess"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_BlurPostprocess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationPostRender_BlurPostprocess), 1715073451U) },
		{ FDisplayClusterConfigurationPostRender_GenerateMips::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationPostRender_GenerateMips_Statics::NewStructOps, TEXT("DisplayClusterConfigurationPostRender_GenerateMips"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationPostRender_GenerateMips, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationPostRender_GenerateMips), 577332739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_PostRender_h_4219894008(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_PostRender_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_PostRender_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
