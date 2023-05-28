// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/ChaosFleshBindingsNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosFleshBindingsNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateSurfaceBindings();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FGenerateSurfaceBindings>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateSurfaceBindings cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateSurfaceBindings;
class UScriptStruct* FGenerateSurfaceBindings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateSurfaceBindings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateSurfaceBindings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateSurfaceBindings, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("GenerateSurfaceBindings"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateSurfaceBindings.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FGenerateSurfaceBindings>()
{
	return FGenerateSurfaceBindings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeometryGroupGuidsIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryGroupGuidsIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryGroupGuidsIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoSurfaceProjection_MetaData[];
#endif
		static void NewProp_bDoSurfaceProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoSurfaceProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceProjectionIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SurfaceProjectionIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoOrphanReparenting_MetaData[];
#endif
		static void NewProp_bDoOrphanReparenting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoOrphanReparenting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Generate barycentric bindings (used by the FleshDeformer deformer graph) of a render surface to a tetrahedral mesh.\n" },
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshBindingsNodes.h" },
		{ "ToolTip", "Generate barycentric bindings (used by the FleshDeformer deformer graph) of a render surface to a tetrahedral mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateSurfaceBindings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "// Passthrough geometry collection. Bindings are stored as standalone groups in the \\p Collection, keyed by the name of the input render mesh and all available LOD's.\n" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshBindingsNodes.h" },
		{ "ToolTip", "Passthrough geometry collection. Bindings are stored as standalone groups in the \\p Collection, keyed by the name of the input render mesh and all available LOD's." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateSurfaceBindings, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_StaticMeshIn_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "// The input mesh, whose render surface is used to generate bindings.\n" },
		{ "DataflowInput", "" },
		{ "DisplayName", "StaticMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshBindingsNodes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The input mesh, whose render surface is used to generate bindings." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_StaticMeshIn = { "StaticMeshIn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateSurfaceBindings, StaticMeshIn), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_StaticMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_StaticMeshIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SkeletalMeshIn_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "// The input mesh, whose render surface is used to generate bindings.\n" },
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshBindingsNodes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The input mesh, whose render surface is used to generate bindings." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateSurfaceBindings, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SkeletalMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SkeletalMeshIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_GeometryGroupGuidsIn_Inner = { "GeometryGroupGuidsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_GeometryGroupGuidsIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "(Optional)GeometryGroupGuidsIn" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshBindingsNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_GeometryGroupGuidsIn = { "GeometryGroupGuidsIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateSurfaceBindings, GeometryGroupGuidsIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_GeometryGroupGuidsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_GeometryGroupGuidsIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoSurfaceProjection_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "// Enable binding to the exterior hull of the tetrahedron mesh.\n" },
		{ "DisplayName", "DoSurfaceProjection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshBindingsNodes.h" },
		{ "ToolTip", "Enable binding to the exterior hull of the tetrahedron mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoSurfaceProjection_SetBit(void* Obj)
	{
		((FGenerateSurfaceBindings*)Obj)->bDoSurfaceProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoSurfaceProjection = { "bDoSurfaceProjection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateSurfaceBindings), &Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoSurfaceProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoSurfaceProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoSurfaceProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SurfaceProjectionIterations_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "// The maximum number of iterations to try expanding the domain while looking for surface triangles to bind to.\n" },
		{ "DisplayName", "SurfaceProjectionIterations" },
		{ "EditCondition", "bDoSurfaceProjection == true" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshBindingsNodes.h" },
		{ "ToolTip", "The maximum number of iterations to try expanding the domain while looking for surface triangles to bind to." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SurfaceProjectionIterations = { "SurfaceProjectionIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateSurfaceBindings, SurfaceProjectionIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SurfaceProjectionIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SurfaceProjectionIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoOrphanReparenting_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "// When nodes aren't contained in tetrahedra and surface projection fails, try to find suitable bindings by looking to neighboring parents.\n" },
		{ "DisplayName", "DoOrphanReparenting" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshBindingsNodes.h" },
		{ "ToolTip", "When nodes aren't contained in tetrahedra and surface projection fails, try to find suitable bindings by looking to neighboring parents." },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoOrphanReparenting_SetBit(void* Obj)
	{
		((FGenerateSurfaceBindings*)Obj)->bDoOrphanReparenting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoOrphanReparenting = { "bDoOrphanReparenting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateSurfaceBindings), &Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoOrphanReparenting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoOrphanReparenting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoOrphanReparenting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_StaticMeshIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SkeletalMeshIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_GeometryGroupGuidsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_GeometryGroupGuidsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoSurfaceProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_SurfaceProjectionIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewProp_bDoOrphanReparenting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GenerateSurfaceBindings",
		sizeof(FGenerateSurfaceBindings),
		alignof(FGenerateSurfaceBindings),
		Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateSurfaceBindings()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateSurfaceBindings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateSurfaceBindings.InnerSingleton, Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateSurfaceBindings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshBindingsNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshBindingsNodes_h_Statics::ScriptStructInfo[] = {
		{ FGenerateSurfaceBindings::StaticStruct, Z_Construct_UScriptStruct_FGenerateSurfaceBindings_Statics::NewStructOps, TEXT("GenerateSurfaceBindings"), &Z_Registration_Info_UScriptStruct_GenerateSurfaceBindings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateSurfaceBindings), 2884506091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshBindingsNodes_h_2976015400(TEXT("/Script/ChaosFleshNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshBindingsNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshBindingsNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
