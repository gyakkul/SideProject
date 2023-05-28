// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionAtmosphericLightColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAtmosphericLightColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionAtmosphericLightColor::StaticRegisterNativesUMaterialExpressionAtmosphericLightColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAtmosphericLightColor);
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister()
	{
		return UMaterialExpressionAtmosphericLightColor::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Atmosphere Sun Light Illuminance On Ground" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAtmosphericLightColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericLightColor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAtmosphericLightColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::ClassParams = {
		&UMaterialExpressionAtmosphericLightColor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAtmosphericLightColor>()
	{
		return UMaterialExpressionAtmosphericLightColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAtmosphericLightColor);
	UMaterialExpressionAtmosphericLightColor::~UMaterialExpressionAtmosphericLightColor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor, UMaterialExpressionAtmosphericLightColor::StaticClass, TEXT("UMaterialExpressionAtmosphericLightColor"), &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAtmosphericLightColor), 674972976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_3362674271(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
