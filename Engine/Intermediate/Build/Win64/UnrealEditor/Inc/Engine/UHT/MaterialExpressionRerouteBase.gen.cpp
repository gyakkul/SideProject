// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionRerouteBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRerouteBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionRerouteBase::StaticRegisterNativesUMaterialExpressionRerouteBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRerouteBase);
	UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase_NoRegister()
	{
		return UMaterialExpressionRerouteBase::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionRerouteBase.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRerouteBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRerouteBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::ClassParams = {
		&UMaterialExpressionRerouteBase::StaticClass,
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
		0x001000B1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRerouteBase>()
	{
		return UMaterialExpressionRerouteBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRerouteBase);
	UMaterialExpressionRerouteBase::~UMaterialExpressionRerouteBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRerouteBase, UMaterialExpressionRerouteBase::StaticClass, TEXT("UMaterialExpressionRerouteBase"), &Z_Registration_Info_UClass_UMaterialExpressionRerouteBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRerouteBase), 95005439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_93458804(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
