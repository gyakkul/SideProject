// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSkyAtmosphereViewLuminance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyAtmosphereViewLuminance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSkyAtmosphereViewLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereViewLuminance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereViewLuminance);
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereViewLuminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereViewLuminance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereViewLuminance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass,
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
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereViewLuminance>()
	{
		return UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereViewLuminance);
	UMaterialExpressionSkyAtmosphereViewLuminance::~UMaterialExpressionSkyAtmosphereViewLuminance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance, UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereViewLuminance"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereViewLuminance), 3806218762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_337668378(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
