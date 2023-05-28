// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionEyeAdaptation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionEyeAdaptation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionEyeAdaptation::StaticRegisterNativesUMaterialExpressionEyeAdaptation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionEyeAdaptation);
	UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation_NoRegister()
	{
		return UMaterialExpressionEyeAdaptation::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides access to the EyeAdaptation render target.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionEyeAdaptation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionEyeAdaptation.h" },
		{ "ToolTip", "Provides access to the EyeAdaptation render target." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionEyeAdaptation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::ClassParams = {
		&UMaterialExpressionEyeAdaptation::StaticClass,
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
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.OuterSingleton, Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionEyeAdaptation>()
	{
		return UMaterialExpressionEyeAdaptation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionEyeAdaptation);
	UMaterialExpressionEyeAdaptation::~UMaterialExpressionEyeAdaptation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionEyeAdaptation, UMaterialExpressionEyeAdaptation::StaticClass, TEXT("UMaterialExpressionEyeAdaptation"), &Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionEyeAdaptation), 2784246947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_402505620(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
