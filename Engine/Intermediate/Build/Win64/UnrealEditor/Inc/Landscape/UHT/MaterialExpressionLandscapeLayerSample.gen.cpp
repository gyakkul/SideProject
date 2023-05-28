// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Materials/MaterialExpressionLandscapeLayerSample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void UMaterialExpressionLandscapeLayerSample::StaticRegisterNativesUMaterialExpressionLandscapeLayerSample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeLayerSample);
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerSample::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSample.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSample.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSample, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSample.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight = { "PreviewWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSample, PreviewWeight), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerSample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::ClassParams = {
		&UMaterialExpressionLandscapeLayerSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerSample>()
	{
		return UMaterialExpressionLandscapeLayerSample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerSample);
	UMaterialExpressionLandscapeLayerSample::~UMaterialExpressionLandscapeLayerSample() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample, UMaterialExpressionLandscapeLayerSample::StaticClass, TEXT("UMaterialExpressionLandscapeLayerSample"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeLayerSample), 3871138816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSample_h_959918880(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
