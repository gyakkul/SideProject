// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/ComposureUVMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposureUVMap() {}
// Cross Module References
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FComposureUVMapSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComposureUVMapSettings;
class UScriptStruct* FComposureUVMapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComposureUVMapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComposureUVMapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComposureUVMapSettings, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("ComposureUVMapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ComposureUVMapSettings.OuterSingleton;
}
template<> COMPOSURE_API UScriptStruct* StaticStruct<FComposureUVMapSettings>()
{
	return FComposureUVMapSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreUVDisplacementMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreUVDisplacementMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostUVDisplacementMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostUVDisplacementMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementDecodeParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplacementDecodeParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplacementTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDisplacementBlueAndAlphaChannels_MetaData[];
#endif
		static void NewProp_bUseDisplacementBlueAndAlphaChannels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDisplacementBlueAndAlphaChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComposureUVMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComposureUVMapSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PreUVDisplacementMatrix_MetaData[] = {
		{ "Category", "UV Mapping" },
		{ "Comment", "/** UV Matrix to apply before sampling DisplacementTexture. */" },
		{ "ModuleRelativePath", "Public/ComposureUVMap.h" },
		{ "ToolTip", "UV Matrix to apply before sampling DisplacementTexture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PreUVDisplacementMatrix = { "PreUVDisplacementMatrix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComposureUVMapSettings, PreUVDisplacementMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PreUVDisplacementMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PreUVDisplacementMatrix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PostUVDisplacementMatrix_MetaData[] = {
		{ "Category", "UV Mapping" },
		{ "Comment", "/** UV Matrix to apply after displacing UV using DisplacementTexture. */" },
		{ "ModuleRelativePath", "Public/ComposureUVMap.h" },
		{ "ToolTip", "UV Matrix to apply after displacing UV using DisplacementTexture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PostUVDisplacementMatrix = { "PostUVDisplacementMatrix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComposureUVMapSettings, PostUVDisplacementMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PostUVDisplacementMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PostUVDisplacementMatrix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementDecodeParameters_MetaData[] = {
		{ "Category", "UV Mapping" },
		{ "Comment", "/** Decoding parameters for DisplacementTexture. DeltaUV = ((RedChannel, GreenChannel) - Y) * X. */" },
		{ "ModuleRelativePath", "Public/ComposureUVMap.h" },
		{ "ToolTip", "Decoding parameters for DisplacementTexture. DeltaUV = ((RedChannel, GreenChannel) - Y) * X." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementDecodeParameters = { "DisplacementDecodeParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComposureUVMapSettings, DisplacementDecodeParameters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementDecodeParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementDecodeParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementTexture_MetaData[] = {
		{ "Category", "UV Mapping" },
		{ "Comment", "/** Displacement texture to use. */" },
		{ "ModuleRelativePath", "Public/ComposureUVMap.h" },
		{ "ToolTip", "Displacement texture to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementTexture = { "DisplacementTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComposureUVMapSettings, DisplacementTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_bUseDisplacementBlueAndAlphaChannels_MetaData[] = {
		{ "Category", "UV Mapping" },
		{ "Comment", "/** Whether to use blue and alpha channel instead of red and green channel in computation of DeltaUV. */" },
		{ "ModuleRelativePath", "Public/ComposureUVMap.h" },
		{ "ToolTip", "Whether to use blue and alpha channel instead of red and green channel in computation of DeltaUV." },
	};
#endif
	void Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_bUseDisplacementBlueAndAlphaChannels_SetBit(void* Obj)
	{
		((FComposureUVMapSettings*)Obj)->bUseDisplacementBlueAndAlphaChannels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_bUseDisplacementBlueAndAlphaChannels = { "bUseDisplacementBlueAndAlphaChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FComposureUVMapSettings), &Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_bUseDisplacementBlueAndAlphaChannels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_bUseDisplacementBlueAndAlphaChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_bUseDisplacementBlueAndAlphaChannels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PreUVDisplacementMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_PostUVDisplacementMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementDecodeParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_DisplacementTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewProp_bUseDisplacementBlueAndAlphaChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		&NewStructOps,
		"ComposureUVMapSettings",
		sizeof(FComposureUVMapSettings),
		alignof(FComposureUVMapSettings),
		Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComposureUVMapSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ComposureUVMapSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComposureUVMapSettings.InnerSingleton, Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComposureUVMapSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposureUVMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposureUVMap_h_Statics::ScriptStructInfo[] = {
		{ FComposureUVMapSettings::StaticStruct, Z_Construct_UScriptStruct_FComposureUVMapSettings_Statics::NewStructOps, TEXT("ComposureUVMapSettings"), &Z_Registration_Info_UScriptStruct_ComposureUVMapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComposureUVMapSettings), 3070718327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposureUVMap_h_1012488961(TEXT("/Script/Composure"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposureUVMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposureUVMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
