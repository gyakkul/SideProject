// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionExecBegin.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionExecBegin() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecBegin();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionExecBegin::StaticRegisterNativesUMaterialExpressionExecBegin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionExecBegin);
	UClass* Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister()
	{
		return UMaterialExpressionExecBegin::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionExecBegin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Exec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionExecBegin.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionExecBegin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::NewProp_Exec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionExecBegin.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionExecBegin, Exec), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::NewProp_Exec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::NewProp_Exec_MetaData)) }; // 2208491086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::NewProp_Exec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionExecBegin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::ClassParams = {
		&UMaterialExpressionExecBegin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionExecBegin()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionExecBegin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionExecBegin.OuterSingleton, Z_Construct_UClass_UMaterialExpressionExecBegin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionExecBegin.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionExecBegin>()
	{
		return UMaterialExpressionExecBegin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionExecBegin);
	UMaterialExpressionExecBegin::~UMaterialExpressionExecBegin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecBegin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecBegin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionExecBegin, UMaterialExpressionExecBegin::StaticClass, TEXT("UMaterialExpressionExecBegin"), &Z_Registration_Info_UClass_UMaterialExpressionExecBegin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionExecBegin), 1689019693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecBegin_h_4072714440(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecBegin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecBegin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
