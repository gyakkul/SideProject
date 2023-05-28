// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionWhileLoop.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionWhileLoop() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWhileLoop();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWhileLoop_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionWhileLoop::StaticRegisterNativesUMaterialExpressionWhileLoop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionWhileLoop);
	UClass* Z_Construct_UClass_UMaterialExpressionWhileLoop_NoRegister()
	{
		return UMaterialExpressionWhileLoop::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopBody_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoopBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Condition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionWhileLoop.h" },
		{ "MaterialControlFlow", "" },
		{ "MaterialNewHLSLGenerator", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWhileLoop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_LoopBody_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWhileLoop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_LoopBody = { "LoopBody", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionWhileLoop, LoopBody), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_LoopBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_LoopBody_MetaData)) }; // 2208491086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWhileLoop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionWhileLoop, Completed), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Completed_MetaData)) }; // 2208491086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Condition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWhileLoop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionWhileLoop, Condition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Condition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_LoopBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Condition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionWhileLoop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::ClassParams = {
		&UMaterialExpressionWhileLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionWhileLoop()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionWhileLoop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionWhileLoop.OuterSingleton, Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionWhileLoop.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionWhileLoop>()
	{
		return UMaterialExpressionWhileLoop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionWhileLoop);
	UMaterialExpressionWhileLoop::~UMaterialExpressionWhileLoop() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionWhileLoop, UMaterialExpressionWhileLoop::StaticClass, TEXT("UMaterialExpressionWhileLoop"), &Z_Registration_Info_UClass_UMaterialExpressionWhileLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionWhileLoop), 2590462894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_1620423451(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
