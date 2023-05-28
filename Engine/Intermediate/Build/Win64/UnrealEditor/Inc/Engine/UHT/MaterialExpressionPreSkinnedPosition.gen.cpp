// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPreSkinnedPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreSkinnedPosition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPreSkinnedPosition::StaticRegisterNativesUMaterialExpressionPreSkinnedPosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPreSkinnedPosition);
	UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister()
	{
		return UMaterialExpressionPreSkinnedPosition::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPreSkinnedPosition.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreSkinnedPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPreSkinnedPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::ClassParams = {
		&UMaterialExpressionPreSkinnedPosition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPreSkinnedPosition>()
	{
		return UMaterialExpressionPreSkinnedPosition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreSkinnedPosition);
	UMaterialExpressionPreSkinnedPosition::~UMaterialExpressionPreSkinnedPosition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition, UMaterialExpressionPreSkinnedPosition::StaticClass, TEXT("UMaterialExpressionPreSkinnedPosition"), &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPreSkinnedPosition), 877257682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_2149181166(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
