// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionComposite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionComposite() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComposite();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComposite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionComposite::StaticRegisterNativesUMaterialExpressionComposite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionComposite);
	UClass* Z_Construct_UClass_UMaterialExpressionComposite_NoRegister()
	{
		return UMaterialExpressionComposite::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionComposite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubgraphName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubgraphName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputExpressions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputExpressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionComposite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComposite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Composite (subgraph) expression. Exists purely for organzational purposes.\n * Under the hood uses reroute expressions for graph compilation. See below\n * to understand how a particular reroute's input / output correlates to\n * the inputs / outputs of composites and their pin bases.\n * \n *      _________________          _________________\n *     |   INPUT BASE    |        |   OUTPUT BASE   |\n *     +--------+--------+        +--------+--------+\n *     |        |   (>)  |   ->   |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |        |        |        |        |\n *     +--------+--------+        +--------+--------+\n *     | NODE IN:  NONE  |        | NODE IN:  PINS  |\n *     | NODE OUT: PINS  |        | NODE OUT: NONE  |\n *     |_________________|        |_________________|\n *   \n *                   ^                |                       \n *                   |                v                                        \n *              ____________________________         \n *             |         COMPOSITE          |\n *             +---------+--------+---------+\n *         ->  |    (>)  |        |  (>)    |  ->\n *             |    (>)  |        |  (>)    |\n *             |    (>)  |        |  (>)    |\n *             |    (>)  |        |  (>)    |\n *             |         |        |         |\n *             +---------+--------+---------+\n *             | NODE IN:  TO INPUT BASE    |\n *             | NODE OUT: FROM OUTPUT BASE |\n *             |____________________________|\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionComposite.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComposite.h" },
		{ "ToolTip", "Composite (subgraph) expression. Exists purely for organzational purposes.\nUnder the hood uses reroute expressions for graph compilation. See below\nto understand how a particular reroute's input / output correlates to\nthe inputs / outputs of composites and their pin bases.\n\n     _________________          _________________\n    |   INPUT BASE    |        |   OUTPUT BASE   |\n    +--------+--------+        +--------+--------+\n    |        |   (>)  |   ->   |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |        |        |        |        |\n    +--------+--------+        +--------+--------+\n    | NODE IN:  NONE  |        | NODE IN:  PINS  |\n    | NODE OUT: PINS  |        | NODE OUT: NONE  |\n    |_________________|        |_________________|\n\n                  ^                |\n                  |                v\n             ____________________________\n            |         COMPOSITE          |\n            +---------+--------+---------+\n        ->  |    (>)  |        |  (>)    |  ->\n            |    (>)  |        |  (>)    |\n            |    (>)  |        |  (>)    |\n            |    (>)  |        |  (>)    |\n            |         |        |         |\n            +---------+--------+---------+\n            | NODE IN:  TO INPUT BASE    |\n            | NODE OUT: FROM OUTPUT BASE |\n            |____________________________|" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_SubgraphName_MetaData[] = {
		{ "Category", "MaterialExpressionComposite" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComposite.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_SubgraphName = { "SubgraphName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComposite, SubgraphName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_SubgraphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_SubgraphName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_InputExpressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComposite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_InputExpressions = { "InputExpressions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComposite, InputExpressions), Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_InputExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_InputExpressions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_OutputExpressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComposite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_OutputExpressions = { "OutputExpressions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComposite, OutputExpressions), Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_OutputExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_OutputExpressions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionComposite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_SubgraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_InputExpressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComposite_Statics::NewProp_OutputExpressions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionComposite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionComposite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionComposite_Statics::ClassParams = {
		&UMaterialExpressionComposite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionComposite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComposite_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComposite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComposite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionComposite()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionComposite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionComposite.OuterSingleton, Z_Construct_UClass_UMaterialExpressionComposite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionComposite.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionComposite>()
	{
		return UMaterialExpressionComposite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionComposite);
	UMaterialExpressionComposite::~UMaterialExpressionComposite() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComposite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComposite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionComposite, UMaterialExpressionComposite::StaticClass, TEXT("UMaterialExpressionComposite"), &Z_Registration_Info_UClass_UMaterialExpressionComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionComposite), 3867557343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComposite_h_41974720(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComposite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
