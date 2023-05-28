// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Protocols/CompositionGraphCaptureProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositionGraphCaptureProtocol() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHDRCaptureGamut;
	static UEnum* EHDRCaptureGamut_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("EHDRCaptureGamut"));
		}
		return Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UEnum* StaticEnum<EHDRCaptureGamut>()
	{
		return EHDRCaptureGamut_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enumerators[] = {
		{ "HCGM_Rec709", (int64)HCGM_Rec709 },
		{ "HCGM_P3DCI", (int64)HCGM_P3DCI },
		{ "HCGM_Rec2020", (int64)HCGM_Rec2020 },
		{ "HCGM_ACES", (int64)HCGM_ACES },
		{ "HCGM_ACEScg", (int64)HCGM_ACEScg },
		{ "HCGM_Linear", (int64)HCGM_Linear },
		{ "HCGM_MAX", (int64)HCGM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Used by UCompositionGraphCaptureSettings. Matches gamut order in EDisplayColorGamut */" },
		{ "HCGM_ACES.DisplayName", "ACES" },
		{ "HCGM_ACES.Name", "HCGM_ACES" },
		{ "HCGM_ACEScg.DisplayName", "ACEScg" },
		{ "HCGM_ACEScg.Name", "HCGM_ACEScg" },
		{ "HCGM_Linear.DisplayName", "Linear" },
		{ "HCGM_Linear.Name", "HCGM_Linear" },
		{ "HCGM_MAX.Name", "HCGM_MAX" },
		{ "HCGM_P3DCI.DisplayName", "P3 D65" },
		{ "HCGM_P3DCI.Name", "HCGM_P3DCI" },
		{ "HCGM_Rec2020.DisplayName", "Rec.2020" },
		{ "HCGM_Rec2020.Name", "HCGM_Rec2020" },
		{ "HCGM_Rec709.DisplayName", "Rec.709 / sRGB" },
		{ "HCGM_Rec709.Name", "HCGM_Rec709" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Used by UCompositionGraphCaptureSettings. Matches gamut order in EDisplayColorGamut" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		"EHDRCaptureGamut",
		"EHDRCaptureGamut",
		Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut()
	{
		if (!Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton, Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses;
class UScriptStruct* FCompositionGraphCapturePasses::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CompositionGraphCapturePasses"));
	}
	return Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FCompositionGraphCapturePasses>()
{
	return FCompositionGraphCapturePasses::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositionGraphCapturePasses>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Composition Graph Settings" },
		{ "Comment", "/** List of passes to record by name. */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "List of passes to record by name." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositionGraphCapturePasses, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"CompositionGraphCapturePasses",
		sizeof(FCompositionGraphCapturePasses),
		alignof(FCompositionGraphCapturePasses),
		Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses()
	{
		if (!Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.InnerSingleton, Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.InnerSingleton;
	}
	void UCompositionGraphCaptureProtocol::StaticRegisterNativesUCompositionGraphCaptureProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositionGraphCaptureProtocol);
	UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister()
	{
		return UCompositionGraphCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeRenderPasses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncludeRenderPasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureFramesInHDR_MetaData[];
#endif
		static void NewProp_bCaptureFramesInHDR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureFramesInHDR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HDRCompressionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HDRCompressionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureGamut_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureGamut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessingMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableScreenPercentage_MetaData[];
#endif
		static void NewProp_bDisableScreenPercentage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableScreenPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingMaterialPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessingMaterialPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "CustomRenderPasses" },
		{ "DisplayName", "Custom Render Passes" },
		{ "IncludePath", "Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** A list of render passes to include in the capture. Leave empty to export all available passes. */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "A list of render passes to include in the capture. Leave empty to export all available passes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses = { "IncludeRenderPasses", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, IncludeRenderPasses), Z_Construct_UScriptStruct_FCompositionGraphCapturePasses, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses_MetaData)) }; // 3568526628
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** Whether to capture the frames as HDR textures (*.exr format) */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Whether to capture the frames as HDR textures (*.exr format)" },
	};
#endif
	void Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_SetBit(void* Obj)
	{
		((UCompositionGraphCaptureProtocol*)Obj)->bCaptureFramesInHDR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR = { "bCaptureFramesInHDR", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCompositionGraphCaptureProtocol), &Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Compression Quality for HDR Frames (0 for no compression, 1 for default compression which can be slow) */" },
		{ "EditCondition", "bCaptureFramesInHDR" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Compression Quality for HDR Frames (0 for no compression, 1 for default compression which can be slow)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality = { "HDRCompressionQuality", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, HDRCompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** The color gamut to use when storing HDR captured data. The gamut depends on whether the bCaptureFramesInHDR option is enabled. */" },
		{ "EditCondition", "bCaptureFramesInHDR" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "The color gamut to use when storing HDR captured data. The gamut depends on whether the bCaptureFramesInHDR option is enabled." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut = { "CaptureGamut", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, CaptureGamut), Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut_MetaData)) }; // 2905175880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial_MetaData[] = {
		{ "AllowedClasses", "" },
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** Custom post processing material to use for rendering */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Custom post processing material to use for rendering" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial = { "PostProcessingMaterial", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, PostProcessingMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** Whether to disable screen percentage */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Whether to disable screen percentage" },
	};
#endif
	void Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_SetBit(void* Obj)
	{
		((UCompositionGraphCaptureProtocol*)Obj)->bDisableScreenPercentage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage = { "bDisableScreenPercentage", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCompositionGraphCaptureProtocol), &Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr = { "PostProcessingMaterialPtr", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositionGraphCaptureProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::ClassParams = {
		&UCompositionGraphCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol()
	{
		if (!Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton, Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UCompositionGraphCaptureProtocol>()
	{
		return UCompositionGraphCaptureProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositionGraphCaptureProtocol);
	UCompositionGraphCaptureProtocol::~UCompositionGraphCaptureProtocol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::EnumInfo[] = {
		{ EHDRCaptureGamut_StaticEnum, TEXT("EHDRCaptureGamut"), &Z_Registration_Info_UEnum_EHDRCaptureGamut, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2905175880U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ScriptStructInfo[] = {
		{ FCompositionGraphCapturePasses::StaticStruct, Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewStructOps, TEXT("CompositionGraphCapturePasses"), &Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositionGraphCapturePasses), 3568526628U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositionGraphCaptureProtocol, UCompositionGraphCaptureProtocol::StaticClass, TEXT("UCompositionGraphCaptureProtocol"), &Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositionGraphCaptureProtocol), 3677499689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_245281837(TEXT("/Script/MovieSceneCapture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
