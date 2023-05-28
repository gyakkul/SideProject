// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionObjectLocalBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectLocalBounds() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionObjectLocalBounds::StaticRegisterNativesUMaterialExpressionObjectLocalBounds()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionObjectLocalBounds);
	UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_NoRegister()
	{
		return UMaterialExpressionObjectLocalBounds::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectLocalBounds.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectLocalBounds.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectLocalBounds>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::ClassParams = {
		&UMaterialExpressionObjectLocalBounds::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.OuterSingleton, Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectLocalBounds>()
	{
		return UMaterialExpressionObjectLocalBounds::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectLocalBounds);
	UMaterialExpressionObjectLocalBounds::~UMaterialExpressionObjectLocalBounds() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionObjectLocalBounds, UMaterialExpressionObjectLocalBounds::StaticClass, TEXT("UMaterialExpressionObjectLocalBounds"), &Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionObjectLocalBounds), 2408063982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_1919769680(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
