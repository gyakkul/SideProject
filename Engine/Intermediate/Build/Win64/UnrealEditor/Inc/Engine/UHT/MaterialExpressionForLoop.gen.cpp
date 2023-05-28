// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionForLoop.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionForLoop() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionForLoop();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionForLoop_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionForLoop::StaticRegisterNativesUMaterialExpressionForLoop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionForLoop);
	UClass* Z_Construct_UClass_UMaterialExpressionForLoop_NoRegister()
	{
		return UMaterialExpressionForLoop::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionForLoop_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexStep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionForLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionForLoop_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionForLoop.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_LoopBody_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_LoopBody = { "LoopBody", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionForLoop, LoopBody), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_LoopBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_LoopBody_MetaData)) }; // 2208491086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionForLoop, Completed), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_Completed_MetaData)) }; // 2208491086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_StartIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionForLoop, StartIndex), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_StartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_StartIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_EndIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionForLoop, EndIndex), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_EndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_EndIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_IndexStep_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_IndexStep = { "IndexStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionForLoop, IndexStep), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_IndexStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_IndexStep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionForLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_LoopBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_EndIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_IndexStep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionForLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionForLoop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::ClassParams = {
		&UMaterialExpressionForLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionForLoop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionForLoop()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionForLoop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionForLoop.OuterSingleton, Z_Construct_UClass_UMaterialExpressionForLoop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionForLoop.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionForLoop>()
	{
		return UMaterialExpressionForLoop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionForLoop);
	UMaterialExpressionForLoop::~UMaterialExpressionForLoop() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionForLoop, UMaterialExpressionForLoop::StaticClass, TEXT("UMaterialExpressionForLoop"), &Z_Registration_Info_UClass_UMaterialExpressionForLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionForLoop), 3339819443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_3180783366(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
