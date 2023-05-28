// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeTexturePatchPS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeTexturePatchPS() {}
// Cross Module References
	LANDSCAPEPATCH_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams();
	UPackage* Z_Construct_UPackage__Script_LandscapePatch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeHeightPatchConvertToNativeParams;
class UScriptStruct* FLandscapeHeightPatchConvertToNativeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeHeightPatchConvertToNativeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeHeightPatchConvertToNativeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams, (UObject*)Z_Construct_UPackage__Script_LandscapePatch(), TEXT("LandscapeHeightPatchConvertToNativeParams"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeHeightPatchConvertToNativeParams.OuterSingleton;
}
template<> LANDSCAPEPATCH_API UScriptStruct* StaticStruct<FLandscapeHeightPatchConvertToNativeParams>()
{
	return FLandscapeHeightPatchConvertToNativeParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroInEncoding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZeroInEncoding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Values needed to convert a patch stored in some source encoding into the native (two byte int) encoding and back\n" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatchPS.h" },
		{ "ToolTip", "Values needed to convert a patch stored in some source encoding into the native (two byte int) encoding and back" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeHeightPatchConvertToNativeParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_ZeroInEncoding_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTexturePatchPS.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_ZeroInEncoding = { "ZeroInEncoding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeHeightPatchConvertToNativeParams, ZeroInEncoding), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_ZeroInEncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_ZeroInEncoding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTexturePatchPS.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightScale = { "HeightScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeHeightPatchConvertToNativeParams, HeightScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTexturePatchPS.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeHeightPatchConvertToNativeParams, HeightOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_ZeroInEncoding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewProp_HeightOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
		nullptr,
		&NewStructOps,
		"LandscapeHeightPatchConvertToNativeParams",
		sizeof(FLandscapeHeightPatchConvertToNativeParams),
		alignof(FLandscapeHeightPatchConvertToNativeParams),
		Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeHeightPatchConvertToNativeParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeHeightPatchConvertToNativeParams.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeHeightPatchConvertToNativeParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatchPS_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatchPS_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeHeightPatchConvertToNativeParams::StaticStruct, Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams_Statics::NewStructOps, TEXT("LandscapeHeightPatchConvertToNativeParams"), &Z_Registration_Info_UScriptStruct_LandscapeHeightPatchConvertToNativeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeHeightPatchConvertToNativeParams), 1795467887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatchPS_h_1748540108(TEXT("/Script/LandscapePatch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatchPS_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatchPS_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
