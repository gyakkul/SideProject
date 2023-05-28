// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstant4Vector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstant4Vector() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant4Vector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant4Vector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionConstant4Vector::StaticRegisterNativesUMaterialExpressionConstant4Vector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionConstant4Vector);
	UClass* Z_Construct_UClass_UMaterialExpressionConstant4Vector_NoRegister()
	{
		return UMaterialExpressionConstant4Vector::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionConstant4Vector.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant4Vector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "MaterialExpressionConstant4Vector" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant4Vector.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionConstant4Vector, Constant), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::NewProp_Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::NewProp_Constant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::NewProp_Constant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionConstant4Vector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::ClassParams = {
		&UMaterialExpressionConstant4Vector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionConstant4Vector()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.OuterSingleton, Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionConstant4Vector>()
	{
		return UMaterialExpressionConstant4Vector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstant4Vector);
	UMaterialExpressionConstant4Vector::~UMaterialExpressionConstant4Vector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant4Vector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant4Vector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionConstant4Vector, UMaterialExpressionConstant4Vector::StaticClass, TEXT("UMaterialExpressionConstant4Vector"), &Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionConstant4Vector), 1290074959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant4Vector_h_4218641454(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant4Vector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant4Vector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
