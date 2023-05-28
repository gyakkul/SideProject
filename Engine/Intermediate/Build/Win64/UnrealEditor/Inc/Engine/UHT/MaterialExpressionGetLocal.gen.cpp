// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionGetLocal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGetLocal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetLocal();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetLocal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionGetLocal::StaticRegisterNativesUMaterialExpressionGetLocal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionGetLocal);
	UClass* Z_Construct_UClass_UMaterialExpressionGetLocal_NoRegister()
	{
		return UMaterialExpressionGetLocal::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionGetLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LocalName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionGetLocal.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetLocal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::NewProp_LocalName_MetaData[] = {
		{ "Category", "MaterialLocals" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetLocal.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::NewProp_LocalName = { "LocalName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionGetLocal, LocalName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::NewProp_LocalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::NewProp_LocalName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::NewProp_LocalName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionGetLocal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::ClassParams = {
		&UMaterialExpressionGetLocal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionGetLocal()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionGetLocal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionGetLocal.OuterSingleton, Z_Construct_UClass_UMaterialExpressionGetLocal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionGetLocal.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionGetLocal>()
	{
		return UMaterialExpressionGetLocal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGetLocal);
	UMaterialExpressionGetLocal::~UMaterialExpressionGetLocal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionGetLocal, UMaterialExpressionGetLocal::StaticClass, TEXT("UMaterialExpressionGetLocal"), &Z_Registration_Info_UClass_UMaterialExpressionGetLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionGetLocal), 1156262638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_2486197652(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetLocal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
