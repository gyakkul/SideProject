// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionCustomOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCustomOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionCustomOutput::StaticRegisterNativesUMaterialExpressionCustomOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCustomOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput_NoRegister()
	{
		return UMaterialExpressionCustomOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCustomOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustomOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCustomOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::ClassParams = {
		&UMaterialExpressionCustomOutput::StaticClass,
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
		0x000820B1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCustomOutput>()
	{
		return UMaterialExpressionCustomOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustomOutput);
	UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCustomOutput, UMaterialExpressionCustomOutput::StaticClass, TEXT("UMaterialExpressionCustomOutput"), &Z_Registration_Info_UClass_UMaterialExpressionCustomOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCustomOutput), 287390615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_3657086961(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
