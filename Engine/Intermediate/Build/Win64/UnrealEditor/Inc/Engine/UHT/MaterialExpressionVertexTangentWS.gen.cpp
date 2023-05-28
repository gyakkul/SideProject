// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionVertexTangentWS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVertexTangentWS() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexTangentWS();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexTangentWS_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionVertexTangentWS::StaticRegisterNativesUMaterialExpressionVertexTangentWS()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVertexTangentWS);
	UClass* Z_Construct_UClass_UMaterialExpressionVertexTangentWS_NoRegister()
	{
		return UMaterialExpressionVertexTangentWS::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVertexTangentWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVertexTangentWS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVertexTangentWS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::ClassParams = {
		&UMaterialExpressionVertexTangentWS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVertexTangentWS()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVertexTangentWS>()
	{
		return UMaterialExpressionVertexTangentWS::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVertexTangentWS);
	UMaterialExpressionVertexTangentWS::~UMaterialExpressionVertexTangentWS() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVertexTangentWS, UMaterialExpressionVertexTangentWS::StaticClass, TEXT("UMaterialExpressionVertexTangentWS"), &Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVertexTangentWS), 3661802641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_3865076805(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
