// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPixelDepth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPixelDepth() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPixelDepth::StaticRegisterNativesUMaterialExpressionPixelDepth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPixelDepth);
	UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth_NoRegister()
	{
		return UMaterialExpressionPixelDepth::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPixelDepth.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPixelDepth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPixelDepth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::ClassParams = {
		&UMaterialExpressionPixelDepth::StaticClass,
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
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPixelDepth>()
	{
		return UMaterialExpressionPixelDepth::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPixelDepth);
	UMaterialExpressionPixelDepth::~UMaterialExpressionPixelDepth() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPixelDepth, UMaterialExpressionPixelDepth::StaticClass, TEXT("UMaterialExpressionPixelDepth"), &Z_Registration_Info_UClass_UMaterialExpressionPixelDepth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPixelDepth), 2952360224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_2483423882(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
