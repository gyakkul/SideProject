// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPrecomputedAOMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPrecomputedAOMask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPrecomputedAOMask::StaticRegisterNativesUMaterialExpressionPrecomputedAOMask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPrecomputedAOMask);
	UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_NoRegister()
	{
		return UMaterialExpressionPrecomputedAOMask::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPrecomputedAOMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPrecomputedAOMask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPrecomputedAOMask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::ClassParams = {
		&UMaterialExpressionPrecomputedAOMask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPrecomputedAOMask>()
	{
		return UMaterialExpressionPrecomputedAOMask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPrecomputedAOMask);
	UMaterialExpressionPrecomputedAOMask::~UMaterialExpressionPrecomputedAOMask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask, UMaterialExpressionPrecomputedAOMask::StaticClass, TEXT("UMaterialExpressionPrecomputedAOMask"), &Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPrecomputedAOMask), 686822519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_51464700(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
