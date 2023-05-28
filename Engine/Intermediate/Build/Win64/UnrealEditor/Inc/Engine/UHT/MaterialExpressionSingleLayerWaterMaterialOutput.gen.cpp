// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSingleLayerWaterMaterialOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSingleLayerWaterMaterialOutput::StaticRegisterNativesUMaterialExpressionSingleLayerWaterMaterialOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSingleLayerWaterMaterialOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_NoRegister()
	{
		return UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScatteringCoefficients_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScatteringCoefficients;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionCoefficients_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsorptionCoefficients;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorScaleBehindWater_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScaleBehindWater;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for writing single layer water volume material properties. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Material output expression for writing single layer water volume material properties." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients_MetaData[] = {
		{ "Comment", "/** Input for scattering coefficient describing how light scatter around and is absorbed. Valid range is [0,+inf[. Unit is 1/cm. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Input for scattering coefficient describing how light scatter around and is absorbed. Valid range is [0,+inf[. Unit is 1/cm." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients = { "ScatteringCoefficients", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSingleLayerWaterMaterialOutput, ScatteringCoefficients), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients_MetaData[] = {
		{ "Comment", "/** Input for scattering coefficient describing how light bounce is absorbed. Valid range is [0,+inf[. Unit is 1/cm. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Input for scattering coefficient describing how light bounce is absorbed. Valid range is [0,+inf[. Unit is 1/cm." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients = { "AbsorptionCoefficients", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSingleLayerWaterMaterialOutput, AbsorptionCoefficients), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG_MetaData[] = {
		{ "Comment", "/** Input for phase function 'g' parameter describing how much forward(g>0) or backward (g<0) light scatter around. Valid range is [-1,1]. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Input for phase function 'g' parameter describing how much forward(g>0) or backward (g<0) light scatter around. Valid range is [-1,1]." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG = { "PhaseG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSingleLayerWaterMaterialOutput, PhaseG), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ColorScaleBehindWater_MetaData[] = {
		{ "Comment", "/** Input for custom color multiplier for scene color behind water. Can be used for caustics textures etc. Defaults to 1.0. Valid range is [0,+inf[. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSingleLayerWaterMaterialOutput.h" },
		{ "ToolTip", "Input for custom color multiplier for scene color behind water. Can be used for caustics textures etc. Defaults to 1.0. Valid range is [0,+inf[." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ColorScaleBehindWater = { "ColorScaleBehindWater", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSingleLayerWaterMaterialOutput, ColorScaleBehindWater), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ColorScaleBehindWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ColorScaleBehindWater_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ScatteringCoefficients,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_AbsorptionCoefficients,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_PhaseG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::NewProp_ColorScaleBehindWater,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSingleLayerWaterMaterialOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::ClassParams = {
		&UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSingleLayerWaterMaterialOutput>()
	{
		return UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSingleLayerWaterMaterialOutput);
	UMaterialExpressionSingleLayerWaterMaterialOutput::~UMaterialExpressionSingleLayerWaterMaterialOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput, UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass, TEXT("UMaterialExpressionSingleLayerWaterMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSingleLayerWaterMaterialOutput), 3938184334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_1329132276(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSingleLayerWaterMaterialOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
