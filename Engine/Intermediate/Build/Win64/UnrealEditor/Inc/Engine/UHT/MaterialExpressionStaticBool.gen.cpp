// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticBool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticBool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBool();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionStaticBool::StaticRegisterNativesUMaterialExpressionStaticBool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStaticBool);
	UClass* Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister()
	{
		return UMaterialExpressionStaticBool::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStaticBool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStaticBool.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "MaterialExpressionStaticBool" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBool.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((UMaterialExpressionStaticBool*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionStaticBool), &Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStaticBool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::ClassParams = {
		&UMaterialExpressionStaticBool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStaticBool()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStaticBool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStaticBool.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStaticBool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStaticBool.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStaticBool>()
	{
		return UMaterialExpressionStaticBool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticBool);
	UMaterialExpressionStaticBool::~UMaterialExpressionStaticBool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStaticBool, UMaterialExpressionStaticBool::StaticClass, TEXT("UMaterialExpressionStaticBool"), &Z_Registration_Info_UClass_UMaterialExpressionStaticBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStaticBool), 1266490804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_1609780268(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
