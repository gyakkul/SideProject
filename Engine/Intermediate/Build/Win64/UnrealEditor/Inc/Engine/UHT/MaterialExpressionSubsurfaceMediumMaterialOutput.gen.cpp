// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSubsurfaceMediumMaterialOutput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSubsurfaceMediumMaterialOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSubsurfaceMediumMaterialOutput::StaticRegisterNativesUMaterialExpressionSubsurfaceMediumMaterialOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSubsurfaceMediumMaterialOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_NoRegister()
	{
		return UMaterialExpressionSubsurfaceMediumMaterialOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeanFreePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeanFreePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScatteringDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScatteringDistribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for setting the mean free path and scattering distribution properties of subsurface profile (for the Path Tracer Only). */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSubsurfaceMediumMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSubsurfaceMediumMaterialOutput.h" },
		{ "ToolTip", "Material output expression for setting the mean free path and scattering distribution properties of subsurface profile (for the Path Tracer Only)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_MeanFreePath_MetaData[] = {
		{ "Comment", "/** Input for mean free path (cm). Fallback to the default behavior if not set (e.g., Subsurfaceprofile shading: Use the derived MFP) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSubsurfaceMediumMaterialOutput.h" },
		{ "ToolTip", "Input for mean free path (cm). Fallback to the default behavior if not set (e.g., Subsurfaceprofile shading: Use the derived MFP)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_MeanFreePath = { "MeanFreePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSubsurfaceMediumMaterialOutput, MeanFreePath), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_MeanFreePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_MeanFreePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_ScatteringDistribution_MetaData[] = {
		{ "Comment", "/** Input for scattering distribution. Valid range is (-1, 1). Fallback to zero if not set*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSubsurfaceMediumMaterialOutput.h" },
		{ "ToolTip", "Input for scattering distribution. Valid range is (-1, 1). Fallback to zero if not set" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_ScatteringDistribution = { "ScatteringDistribution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSubsurfaceMediumMaterialOutput, ScatteringDistribution), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_ScatteringDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_ScatteringDistribution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_MeanFreePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::NewProp_ScatteringDistribution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSubsurfaceMediumMaterialOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::ClassParams = {
		&UMaterialExpressionSubsurfaceMediumMaterialOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSubsurfaceMediumMaterialOutput>()
	{
		return UMaterialExpressionSubsurfaceMediumMaterialOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSubsurfaceMediumMaterialOutput);
	UMaterialExpressionSubsurfaceMediumMaterialOutput::~UMaterialExpressionSubsurfaceMediumMaterialOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSubsurfaceMediumMaterialOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSubsurfaceMediumMaterialOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput, UMaterialExpressionSubsurfaceMediumMaterialOutput::StaticClass, TEXT("UMaterialExpressionSubsurfaceMediumMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSubsurfaceMediumMaterialOutput), 3009882911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSubsurfaceMediumMaterialOutput_h_1859490744(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSubsurfaceMediumMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSubsurfaceMediumMaterialOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
