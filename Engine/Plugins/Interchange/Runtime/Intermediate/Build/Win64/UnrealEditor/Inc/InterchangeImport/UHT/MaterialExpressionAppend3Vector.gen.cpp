// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MaterialX/MaterialExpressionAppend3Vector.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAppend3Vector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionAppend3Vector();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionAppend3Vector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UMaterialExpressionAppend3Vector::StaticRegisterNativesUMaterialExpressionAppend3Vector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAppend3Vector);
	UClass* Z_Construct_UClass_UMaterialExpressionAppend3Vector_NoRegister()
	{
		return UMaterialExpressionAppend3Vector::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material expression that allows combining 3 channels together to create a vector with more channel than the original\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressionAppend3Vector.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionAppend3Vector.h" },
		{ "ToolTip", "A material expression that allows combining 3 channels together to create a vector with more channel than the original" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionAppend3Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionAppend3Vector, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionAppend3Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionAppend3Vector, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_C_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionAppend3Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionAppend3Vector, C), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_C_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::NewProp_C,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAppend3Vector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::ClassParams = {
		&UMaterialExpressionAppend3Vector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionAppend3Vector()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionAppend3Vector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAppend3Vector.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAppend3Vector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionAppend3Vector.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionAppend3Vector>()
	{
		return UMaterialExpressionAppend3Vector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAppend3Vector);
	UMaterialExpressionAppend3Vector::~UMaterialExpressionAppend3Vector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionAppend3Vector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionAppend3Vector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAppend3Vector, UMaterialExpressionAppend3Vector::StaticClass, TEXT("UMaterialExpressionAppend3Vector"), &Z_Registration_Info_UClass_UMaterialExpressionAppend3Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAppend3Vector), 4010046629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionAppend3Vector_h_1675318272(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionAppend3Vector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionAppend3Vector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
