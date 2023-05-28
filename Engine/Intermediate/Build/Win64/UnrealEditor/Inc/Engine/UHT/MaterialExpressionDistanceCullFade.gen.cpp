// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDistanceCullFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDistanceCullFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDistanceCullFade::StaticRegisterNativesUMaterialExpressionDistanceCullFade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDistanceCullFade);
	UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister()
	{
		return UMaterialExpressionDistanceCullFade::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDistanceCullFade.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceCullFade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDistanceCullFade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::ClassParams = {
		&UMaterialExpressionDistanceCullFade::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDistanceCullFade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDistanceCullFade>()
	{
		return UMaterialExpressionDistanceCullFade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDistanceCullFade);
	UMaterialExpressionDistanceCullFade::~UMaterialExpressionDistanceCullFade() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDistanceCullFade, UMaterialExpressionDistanceCullFade::StaticClass, TEXT("UMaterialExpressionDistanceCullFade"), &Z_Registration_Info_UClass_UMaterialExpressionDistanceCullFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDistanceCullFade), 2916934738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_2160598062(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceCullFade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
