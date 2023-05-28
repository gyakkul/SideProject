// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionParticleRelativeTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleRelativeTime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionParticleRelativeTime::StaticRegisterNativesUMaterialExpressionParticleRelativeTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleRelativeTime);
	UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_NoRegister()
	{
		return UMaterialExpressionParticleRelativeTime::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleRelativeTime.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleRelativeTime.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleRelativeTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::ClassParams = {
		&UMaterialExpressionParticleRelativeTime::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleRelativeTime>()
	{
		return UMaterialExpressionParticleRelativeTime::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleRelativeTime);
	UMaterialExpressionParticleRelativeTime::~UMaterialExpressionParticleRelativeTime() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleRelativeTime, UMaterialExpressionParticleRelativeTime::StaticClass, TEXT("UMaterialExpressionParticleRelativeTime"), &Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleRelativeTime), 825070076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_2777826198(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
