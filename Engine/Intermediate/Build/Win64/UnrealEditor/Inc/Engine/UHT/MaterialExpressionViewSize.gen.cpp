// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionViewSize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionViewSize() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewSize();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewSize_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionViewSize::StaticRegisterNativesUMaterialExpressionViewSize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionViewSize);
	UClass* Z_Construct_UClass_UMaterialExpressionViewSize_NoRegister()
	{
		return UMaterialExpressionViewSize::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionViewSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionViewSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionViewSize_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionViewSize.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewSize.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionViewSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionViewSize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionViewSize_Statics::ClassParams = {
		&UMaterialExpressionViewSize::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionViewSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionViewSize()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionViewSize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionViewSize.OuterSingleton, Z_Construct_UClass_UMaterialExpressionViewSize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionViewSize.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionViewSize>()
	{
		return UMaterialExpressionViewSize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionViewSize);
	UMaterialExpressionViewSize::~UMaterialExpressionViewSize() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewSize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewSize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionViewSize, UMaterialExpressionViewSize::StaticClass, TEXT("UMaterialExpressionViewSize"), &Z_Registration_Info_UClass_UMaterialExpressionViewSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionViewSize), 2343162290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewSize_h_2488297792(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionViewSize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
