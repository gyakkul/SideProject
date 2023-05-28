// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPreSkinnedNormal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreSkinnedNormal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPreSkinnedNormal::StaticRegisterNativesUMaterialExpressionPreSkinnedNormal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPreSkinnedNormal);
	UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_NoRegister()
	{
		return UMaterialExpressionPreSkinnedNormal::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPreSkinnedNormal.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreSkinnedNormal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPreSkinnedNormal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics::ClassParams = {
		&UMaterialExpressionPreSkinnedNormal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPreSkinnedNormal>()
	{
		return UMaterialExpressionPreSkinnedNormal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreSkinnedNormal);
	UMaterialExpressionPreSkinnedNormal::~UMaterialExpressionPreSkinnedNormal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedNormal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedNormal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal, UMaterialExpressionPreSkinnedNormal::StaticClass, TEXT("UMaterialExpressionPreSkinnedNormal"), &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedNormal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPreSkinnedNormal), 1732426345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedNormal_h_2865598815(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedNormal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedNormal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
