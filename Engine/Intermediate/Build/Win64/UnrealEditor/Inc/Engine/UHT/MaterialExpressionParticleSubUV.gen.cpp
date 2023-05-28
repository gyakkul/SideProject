// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionParticleSubUV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleSubUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionParticleSubUV::StaticRegisterNativesUMaterialExpressionParticleSubUV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleSubUV);
	UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister()
	{
		return UMaterialExpressionParticleSubUV::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics
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
	UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSample,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleSubUV.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSubUV.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend_MetaData[] = {
		{ "Category", "MaterialExpressionParticleSubUV" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSubUV.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend_SetBit(void* Obj)
	{
		((UMaterialExpressionParticleSubUV*)Obj)->bBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend = { "bBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionParticleSubUV), &Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleSubUV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::ClassParams = {
		&UMaterialExpressionParticleSubUV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleSubUV>()
	{
		return UMaterialExpressionParticleSubUV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleSubUV);
	UMaterialExpressionParticleSubUV::~UMaterialExpressionParticleSubUV() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleSubUV, UMaterialExpressionParticleSubUV::StaticClass, TEXT("UMaterialExpressionParticleSubUV"), &Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleSubUV), 3509460291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_2063768003(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
