// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialLayerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialLayerOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionMaterialLayerOutput::StaticRegisterNativesUMaterialExpressionMaterialLayerOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialLayerOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_NoRegister()
	{
		return UMaterialExpressionMaterialLayerOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionFunctionOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialLayerOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialLayerOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialLayerOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::ClassParams = {
		&UMaterialExpressionMaterialLayerOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialLayerOutput>()
	{
		return UMaterialExpressionMaterialLayerOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialLayerOutput);
	UMaterialExpressionMaterialLayerOutput::~UMaterialExpressionMaterialLayerOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput, UMaterialExpressionMaterialLayerOutput::StaticClass, TEXT("UMaterialExpressionMaterialLayerOutput"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialLayerOutput), 3524783444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_795653519(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
