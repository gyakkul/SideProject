// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/ChaosFleshRadialTetrahedronNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosFleshRadialTetrahedronNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FRadialTetrahedronDataflowNodes>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRadialTetrahedronDataflowNodes cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialTetrahedronDataflowNodes;
class UScriptStruct* FRadialTetrahedronDataflowNodes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialTetrahedronDataflowNodes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialTetrahedronDataflowNodes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("RadialTetrahedronDataflowNodes"));
	}
	return Z_Registration_Info_UScriptStruct_RadialTetrahedronDataflowNodes.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FRadialTetrahedronDataflowNodes>()
{
	return FRadialTetrahedronDataflowNodes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialSample_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RadialSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSample_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AngularSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSample_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulgeRatio_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_BulgeRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialTetrahedronDataflowNodes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialTetrahedronDataflowNodes, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialTetrahedronDataflowNodes, InnerRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialTetrahedronDataflowNodes, OuterRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_OuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialTetrahedronDataflowNodes, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_RadialSample_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_RadialSample = { "RadialSample", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialTetrahedronDataflowNodes, RadialSample), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_RadialSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_RadialSample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_AngularSample_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_AngularSample = { "AngularSample", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialTetrahedronDataflowNodes, AngularSample), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_AngularSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_AngularSample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_VerticalSample_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_VerticalSample = { "VerticalSample", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialTetrahedronDataflowNodes, VerticalSample), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_VerticalSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_VerticalSample_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_BulgeRatio_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshRadialTetrahedronNodes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_BulgeRatio = { "BulgeRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialTetrahedronDataflowNodes, BulgeRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_BulgeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_BulgeRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_RadialSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_AngularSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_VerticalSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewProp_BulgeRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"RadialTetrahedronDataflowNodes",
		sizeof(FRadialTetrahedronDataflowNodes),
		alignof(FRadialTetrahedronDataflowNodes),
		Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes()
	{
		if (!Z_Registration_Info_UScriptStruct_RadialTetrahedronDataflowNodes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialTetrahedronDataflowNodes.InnerSingleton, Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RadialTetrahedronDataflowNodes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshRadialTetrahedronNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshRadialTetrahedronNodes_h_Statics::ScriptStructInfo[] = {
		{ FRadialTetrahedronDataflowNodes::StaticStruct, Z_Construct_UScriptStruct_FRadialTetrahedronDataflowNodes_Statics::NewStructOps, TEXT("RadialTetrahedronDataflowNodes"), &Z_Registration_Info_UScriptStruct_RadialTetrahedronDataflowNodes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialTetrahedronDataflowNodes), 203703619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshRadialTetrahedronNodes_h_4208912214(TEXT("/Script/ChaosFleshNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshRadialTetrahedronNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshRadialTetrahedronNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
