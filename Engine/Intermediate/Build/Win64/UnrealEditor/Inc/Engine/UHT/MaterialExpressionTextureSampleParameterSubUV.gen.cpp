// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterSubUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameterSubUV::StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameterSubUV);
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameterSubUV::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlend_MetaData[];
#endif
		static void NewProp_bBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSampleParameterSubUV" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_SetBit(void* Obj)
	{
		((UMaterialExpressionTextureSampleParameterSubUV*)Obj)->bBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend = { "bBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionTextureSampleParameterSubUV), &Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterSubUV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::ClassParams = {
		&UMaterialExpressionTextureSampleParameterSubUV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameterSubUV>()
	{
		return UMaterialExpressionTextureSampleParameterSubUV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterSubUV);
	UMaterialExpressionTextureSampleParameterSubUV::~UMaterialExpressionTextureSampleParameterSubUV() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV, UMaterialExpressionTextureSampleParameterSubUV::StaticClass, TEXT("UMaterialExpressionTextureSampleParameterSubUV"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameterSubUV), 2446768523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_706082732(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
