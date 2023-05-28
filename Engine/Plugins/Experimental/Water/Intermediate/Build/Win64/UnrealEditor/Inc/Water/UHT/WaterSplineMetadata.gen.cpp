// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterSplineMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterSplineMetadata() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
	ENGINE_API UClass* Z_Construct_UClass_USplineMetadata();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineMetadata();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineMetadata_NoRegister();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterSplineCurveDefaults();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterSplineCurveDefaults;
class UScriptStruct* FWaterSplineCurveDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterSplineCurveDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterSplineCurveDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterSplineCurveDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterSplineCurveDefaults.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterSplineCurveDefaults>()
{
	return FWaterSplineCurveDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAudioIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAudioIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterSplineCurveDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultDepth_MetaData[] = {
		{ "Category", "WaterCurveDefaults" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultDepth = { "DefaultDepth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterSplineCurveDefaults, DefaultDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultWidth_MetaData[] = {
		{ "Category", "WaterCurveDefaults" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultWidth = { "DefaultWidth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterSplineCurveDefaults, DefaultWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultVelocity_MetaData[] = {
		{ "Category", "WaterCurveDefaults" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultVelocity = { "DefaultVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterSplineCurveDefaults, DefaultVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultAudioIntensity_MetaData[] = {
		{ "Category", "WaterCurveDefaults" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultAudioIntensity = { "DefaultAudioIntensity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterSplineCurveDefaults, DefaultAudioIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultAudioIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultAudioIntensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewProp_DefaultAudioIntensity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterSplineCurveDefaults",
		sizeof(FWaterSplineCurveDefaults),
		alignof(FWaterSplineCurveDefaults),
		Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterSplineCurveDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterSplineCurveDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterSplineCurveDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterSplineCurveDefaults.InnerSingleton;
	}
	void UWaterSplineMetadata::StaticRegisterNativesUWaterSplineMetadata()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterSplineMetadata);
	UClass* Z_Construct_UClass_UWaterSplineMetadata_NoRegister()
	{
		return UWaterSplineMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UWaterSplineMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocityScalar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterVelocityScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverWidth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RiverWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioIntensity;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeWaterVelocity_MetaData[];
#endif
		static void NewProp_bShouldVisualizeWaterVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeWaterVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeRiverWidth_MetaData[];
#endif
		static void NewProp_bShouldVisualizeRiverWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeRiverWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeDepth_MetaData[];
#endif
		static void NewProp_bShouldVisualizeDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeDepth;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterSplineMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMetadata,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterSplineMetadata.h" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSplineMetadata, Depth), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocityScalar_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** The Current of the water at this vertex.  Magnitude and direction */" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
		{ "ToolTip", "The Current of the water at this vertex.  Magnitude and direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocityScalar = { "WaterVelocityScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSplineMetadata, WaterVelocityScalar), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocityScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocityScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_RiverWidth_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Rivers Only: The width of the river (from center) in each direction  */" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
		{ "ToolTip", "Rivers Only: The width of the river (from center) in each direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_RiverWidth = { "RiverWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSplineMetadata, RiverWidth), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_RiverWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_RiverWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_AudioIntensity_MetaData[] = {
		{ "Category", "Water|Audio" },
		{ "Comment", "/** A scalar used to define intensity of the water audio along the spline */" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
		{ "ToolTip", "A scalar used to define intensity of the water audio along the spline" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_AudioIntensity = { "AudioIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSplineMetadata, AudioIntensity), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_AudioIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_AudioIntensity_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeWaterVelocity_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Whether water velocity visualization should be displayed */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
		{ "ToolTip", "Whether water velocity visualization should be displayed" },
	};
#endif
	void Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeWaterVelocity_SetBit(void* Obj)
	{
		((UWaterSplineMetadata*)Obj)->bShouldVisualizeWaterVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeWaterVelocity = { "bShouldVisualizeWaterVelocity", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterSplineMetadata), &Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeWaterVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeWaterVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeWaterVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeRiverWidth_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Whether river width visualization should be displayed */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
		{ "ToolTip", "Whether river width visualization should be displayed" },
	};
#endif
	void Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeRiverWidth_SetBit(void* Obj)
	{
		((UWaterSplineMetadata*)Obj)->bShouldVisualizeRiverWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeRiverWidth = { "bShouldVisualizeRiverWidth", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterSplineMetadata), &Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeRiverWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeRiverWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeRiverWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeDepth_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Whether depth visualization should be displayed */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
		{ "ToolTip", "Whether depth visualization should be displayed" },
	};
#endif
	void Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeDepth_SetBit(void* Obj)
	{
		((UWaterSplineMetadata*)Obj)->bShouldVisualizeDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeDepth = { "bShouldVisualizeDepth", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterSplineMetadata), &Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeDepth_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterSplineMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocity = { "WaterVelocity", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSplineMetadata, WaterVelocity_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterSplineMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocityScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_RiverWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_AudioIntensity,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeWaterVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeRiverWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_bShouldVisualizeDepth,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineMetadata_Statics::NewProp_WaterVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterSplineMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterSplineMetadata>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterSplineMetadata_Statics::ClassParams = {
		&UWaterSplineMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterSplineMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterSplineMetadata()
	{
		if (!Z_Registration_Info_UClass_UWaterSplineMetadata.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterSplineMetadata.OuterSingleton, Z_Construct_UClass_UWaterSplineMetadata_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterSplineMetadata.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterSplineMetadata>()
	{
		return UWaterSplineMetadata::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterSplineMetadata);
	UWaterSplineMetadata::~UWaterSplineMetadata() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_Statics::ScriptStructInfo[] = {
		{ FWaterSplineCurveDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterSplineCurveDefaults_Statics::NewStructOps, TEXT("WaterSplineCurveDefaults"), &Z_Registration_Info_UScriptStruct_WaterSplineCurveDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterSplineCurveDefaults), 1062460365U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterSplineMetadata, UWaterSplineMetadata::StaticClass, TEXT("UWaterSplineMetadata"), &Z_Registration_Info_UClass_UWaterSplineMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterSplineMetadata), 914204411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_882748997(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineMetadata_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
