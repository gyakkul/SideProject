// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionGenericConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGenericConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionGenericConstant::StaticRegisterNativesUMaterialExpressionGenericConstant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionGenericConstant);
	UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant_NoRegister()
	{
		return UMaterialExpressionGenericConstant::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionGenericConstant.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGenericConstant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionGenericConstant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::ClassParams = {
		&UMaterialExpressionGenericConstant::StaticClass,
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
		0x000800B1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.OuterSingleton, Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionGenericConstant.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionGenericConstant>()
	{
		return UMaterialExpressionGenericConstant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGenericConstant);
	UMaterialExpressionGenericConstant::~UMaterialExpressionGenericConstant() {}
	void UMaterialExpressionConstantDouble::StaticRegisterNativesUMaterialExpressionConstantDouble()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionConstantDouble);
	UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble_NoRegister()
	{
		return UMaterialExpressionConstantDouble::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionGenericConstant,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionGenericConstant.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGenericConstant.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "MaterialExpressionConstant" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGenericConstant.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionConstantDouble, Value), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionConstantDouble>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::ClassParams = {
		&UMaterialExpressionConstantDouble::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.OuterSingleton, Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionConstantDouble.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionConstantDouble>()
	{
		return UMaterialExpressionConstantDouble::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstantDouble);
	UMaterialExpressionConstantDouble::~UMaterialExpressionConstantDouble() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionGenericConstant, UMaterialExpressionGenericConstant::StaticClass, TEXT("UMaterialExpressionGenericConstant"), &Z_Registration_Info_UClass_UMaterialExpressionGenericConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionGenericConstant), 1152431419U) },
		{ Z_Construct_UClass_UMaterialExpressionConstantDouble, UMaterialExpressionConstantDouble::StaticClass, TEXT("UMaterialExpressionConstantDouble"), &Z_Registration_Info_UClass_UMaterialExpressionConstantDouble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionConstantDouble), 4034180570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_2142594208(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
