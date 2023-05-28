// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionScreenPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionScreenPosition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionScreenPosition::StaticRegisterNativesUMaterialExpressionScreenPosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionScreenPosition);
	UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition_NoRegister()
	{
		return UMaterialExpressionScreenPosition::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionScreenPosition.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScreenPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionScreenPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::ClassParams = {
		&UMaterialExpressionScreenPosition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.OuterSingleton, Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionScreenPosition>()
	{
		return UMaterialExpressionScreenPosition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionScreenPosition);
	UMaterialExpressionScreenPosition::~UMaterialExpressionScreenPosition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionScreenPosition, UMaterialExpressionScreenPosition::StaticClass, TEXT("UMaterialExpressionScreenPosition"), &Z_Registration_Info_UClass_UMaterialExpressionScreenPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionScreenPosition), 2461564390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_2838900163(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
