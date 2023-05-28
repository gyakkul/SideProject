// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSetLocal.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSetLocal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSetLocal();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSetLocal_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSetLocal::StaticRegisterNativesUMaterialExpressionSetLocal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSetLocal);
	UClass* Z_Construct_UClass_UMaterialExpressionSetLocal_NoRegister()
	{
		return UMaterialExpressionSetLocal::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSetLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Exec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LocalName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSetLocal.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetLocal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Exec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetLocal.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSetLocal, Exec), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Exec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Exec_MetaData)) }; // 2208491086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetLocal.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSetLocal, Value), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_LocalName_MetaData[] = {
		{ "Category", "MaterialLocals" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetLocal.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_LocalName = { "LocalName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSetLocal, LocalName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_LocalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_LocalName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Exec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::NewProp_LocalName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSetLocal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::ClassParams = {
		&UMaterialExpressionSetLocal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSetLocal()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSetLocal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSetLocal.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSetLocal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSetLocal.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSetLocal>()
	{
		return UMaterialExpressionSetLocal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSetLocal);
	UMaterialExpressionSetLocal::~UMaterialExpressionSetLocal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetLocal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetLocal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSetLocal, UMaterialExpressionSetLocal::StaticClass, TEXT("UMaterialExpressionSetLocal"), &Z_Registration_Info_UClass_UMaterialExpressionSetLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSetLocal), 1219019848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetLocal_h_3458256980(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetLocal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetLocal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
