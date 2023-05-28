// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionShadingModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionShadingModel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadingModel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionShadingModel::StaticRegisterNativesUMaterialExpressionShadingModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionShadingModel);
	UClass* Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister()
	{
		return UMaterialExpressionShadingModel::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionShadingModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionShadingModel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadingModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "Category", "ShadingModel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadingModel.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ValidEnumValues", "MSM_DefaultLit, MSM_Subsurface, MSM_PreintegratedSkin, MSM_ClearCoat, MSM_SubsurfaceProfile, MSM_TwoSidedFoliage, MSM_Hair, MSM_Cloth, MSM_Eye" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionShadingModel, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel_MetaData)) }; // 3734556393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionShadingModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::ClassParams = {
		&UMaterialExpressionShadingModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionShadingModel()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionShadingModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionShadingModel.OuterSingleton, Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionShadingModel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionShadingModel>()
	{
		return UMaterialExpressionShadingModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionShadingModel);
	UMaterialExpressionShadingModel::~UMaterialExpressionShadingModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionShadingModel, UMaterialExpressionShadingModel::StaticClass, TEXT("UMaterialExpressionShadingModel"), &Z_Registration_Info_UClass_UMaterialExpressionShadingModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionShadingModel), 4237910860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_1550286856(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
