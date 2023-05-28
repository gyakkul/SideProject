// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionVertexInterpolator.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVertexInterpolator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexInterpolator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexInterpolator_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionVertexInterpolator::StaticRegisterNativesUMaterialExpressionVertexInterpolator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVertexInterpolator);
	UClass* Z_Construct_UClass_UMaterialExpressionVertexInterpolator_NoRegister()
	{
		return UMaterialExpressionVertexInterpolator::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVertexInterpolator.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVertexInterpolator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVertexInterpolator.h" },
		{ "RequiredInput", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionVertexInterpolator, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVertexInterpolator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::ClassParams = {
		&UMaterialExpressionVertexInterpolator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVertexInterpolator()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVertexInterpolator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVertexInterpolator>()
	{
		return UMaterialExpressionVertexInterpolator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVertexInterpolator);
	UMaterialExpressionVertexInterpolator::~UMaterialExpressionVertexInterpolator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexInterpolator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexInterpolator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVertexInterpolator, UMaterialExpressionVertexInterpolator::StaticClass, TEXT("UMaterialExpressionVertexInterpolator"), &Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVertexInterpolator), 2371327946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexInterpolator_h_2389930032(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexInterpolator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexInterpolator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
