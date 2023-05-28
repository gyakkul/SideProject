// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialGraph/MaterialGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraph();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraph_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraph::StaticRegisterNativesUMaterialGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraph);
	UClass* Z_Construct_UClass_UMaterialGraph_NoRegister()
	{
		return UMaterialGraph::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubgraphExpression_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubgraphExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterialFullName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalMaterialFullName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraph.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** Material this Graph represents */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "Material this Graph represents" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraph, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction_MetaData[] = {
		{ "Comment", "/** Material Function this Graph represents (NULL for Materials) */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "Material Function this Graph represents (NULL for Materials)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraph, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode_MetaData[] = {
		{ "Comment", "/** Root node representing Material inputs (NULL for Material Functions) */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "Root node representing Material inputs (NULL for Material Functions)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraph, RootNode), Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_SubgraphExpression_MetaData[] = {
		{ "Comment", "/** Expression this subgraph represents (NULL if not subgraph, Material [Function] still populated) */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "Expression this subgraph represents (NULL if not subgraph, Material [Function] still populated)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_SubgraphExpression = { "SubgraphExpression", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraph, SubgraphExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_SubgraphExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_SubgraphExpression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName_MetaData[] = {
		{ "Comment", "/** The name of the material that we are editing */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraph.h" },
		{ "ToolTip", "The name of the material that we are editing" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName = { "OriginalMaterialFullName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraph, OriginalMaterialFullName), METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_MaterialFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_RootNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_SubgraphExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraph_Statics::NewProp_OriginalMaterialFullName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraph_Statics::ClassParams = {
		&UMaterialGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::PropPointers),
		0,
		0x001000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraph()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraph.OuterSingleton, Z_Construct_UClass_UMaterialGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraph.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraph>()
	{
		return UMaterialGraph::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraph, UMaterialGraph::StaticClass, TEXT("UMaterialGraph"), &Z_Registration_Info_UClass_UMaterialGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraph), 3739608355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_4209598050(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
