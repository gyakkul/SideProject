// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionObjectOrientation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectOrientation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionObjectOrientation::StaticRegisterNativesUMaterialExpressionObjectOrientation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionObjectOrientation);
	UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister()
	{
		return UMaterialExpressionObjectOrientation::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectOrientation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectOrientation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectOrientation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::ClassParams = {
		&UMaterialExpressionObjectOrientation::StaticClass,
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
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.OuterSingleton, Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectOrientation>()
	{
		return UMaterialExpressionObjectOrientation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectOrientation);
	UMaterialExpressionObjectOrientation::~UMaterialExpressionObjectOrientation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionObjectOrientation, UMaterialExpressionObjectOrientation::StaticClass, TEXT("UMaterialExpressionObjectOrientation"), &Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionObjectOrientation), 1359475862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_2745585083(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
