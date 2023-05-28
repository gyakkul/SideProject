// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPreSkinnedLocalBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreSkinnedLocalBounds() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPreSkinnedLocalBounds::StaticRegisterNativesUMaterialExpressionPreSkinnedLocalBounds()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPreSkinnedLocalBounds);
	UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_NoRegister()
	{
		return UMaterialExpressionPreSkinnedLocalBounds::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPreSkinnedLocalBounds.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreSkinnedLocalBounds.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPreSkinnedLocalBounds>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::ClassParams = {
		&UMaterialExpressionPreSkinnedLocalBounds::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPreSkinnedLocalBounds>()
	{
		return UMaterialExpressionPreSkinnedLocalBounds::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreSkinnedLocalBounds);
	UMaterialExpressionPreSkinnedLocalBounds::~UMaterialExpressionPreSkinnedLocalBounds() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedLocalBounds_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedLocalBounds_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds, UMaterialExpressionPreSkinnedLocalBounds::StaticClass, TEXT("UMaterialExpressionPreSkinnedLocalBounds"), &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedLocalBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPreSkinnedLocalBounds), 2157007375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedLocalBounds_h_744879907(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedLocalBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedLocalBounds_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
