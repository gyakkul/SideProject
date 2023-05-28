// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionIfThenElse.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionIfThenElse() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionIfThenElse::StaticRegisterNativesUMaterialExpressionIfThenElse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionIfThenElse);
	UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse_NoRegister()
	{
		return UMaterialExpressionIfThenElse::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Then_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Then;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Else_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Else;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Condition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionIfThenElse.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIfThenElse.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Then_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIfThenElse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Then = { "Then", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIfThenElse, Then), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Then_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Then_MetaData)) }; // 2208491086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Else_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIfThenElse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Else = { "Else", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIfThenElse, Else), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Else_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Else_MetaData)) }; // 2208491086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Condition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIfThenElse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIfThenElse, Condition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Condition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Then,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Else,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Condition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionIfThenElse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::ClassParams = {
		&UMaterialExpressionIfThenElse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.OuterSingleton, Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionIfThenElse>()
	{
		return UMaterialExpressionIfThenElse::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionIfThenElse);
	UMaterialExpressionIfThenElse::~UMaterialExpressionIfThenElse() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionIfThenElse, UMaterialExpressionIfThenElse::StaticClass, TEXT("UMaterialExpressionIfThenElse"), &Z_Registration_Info_UClass_UMaterialExpressionIfThenElse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionIfThenElse), 4120887658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_1048409362(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
