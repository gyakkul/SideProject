// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graphs/GenerateStaticMeshLODProcess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateStaticMeshLODProcess() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODProcess();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODProcess_NoRegister();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings();
	UPackage* Z_Construct_UPackage__Script_MeshLODToolset();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_MeshGeneratorModes;
	static UEnum* EGenerateStaticMeshLODProcess_MeshGeneratorModes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_MeshGeneratorModes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_MeshGeneratorModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateStaticMeshLODProcess_MeshGeneratorModes"));
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_MeshGeneratorModes.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateStaticMeshLODProcess_MeshGeneratorModes>()
	{
		return EGenerateStaticMeshLODProcess_MeshGeneratorModes_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics::Enumerators[] = {
		{ "EGenerateStaticMeshLODProcess_MeshGeneratorModes::Solidify", (int64)EGenerateStaticMeshLODProcess_MeshGeneratorModes::Solidify },
		{ "EGenerateStaticMeshLODProcess_MeshGeneratorModes::SolidifyAndClose", (int64)EGenerateStaticMeshLODProcess_MeshGeneratorModes::SolidifyAndClose },
		{ "EGenerateStaticMeshLODProcess_MeshGeneratorModes::CleanAndSimplify", (int64)EGenerateStaticMeshLODProcess_MeshGeneratorModes::CleanAndSimplify },
		{ "EGenerateStaticMeshLODProcess_MeshGeneratorModes::ConvexHull", (int64)EGenerateStaticMeshLODProcess_MeshGeneratorModes::ConvexHull },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics::Enum_MetaDataParams[] = {
		{ "CleanAndSimplify.Name", "EGenerateStaticMeshLODProcess_MeshGeneratorModes::CleanAndSimplify" },
		{ "ConvexHull.Name", "EGenerateStaticMeshLODProcess_MeshGeneratorModes::ConvexHull" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "Solidify.Comment", "// note: must keep in sync with FGenerateMeshLODGraph::ECoreMeshGeneratorMode\n" },
		{ "Solidify.Name", "EGenerateStaticMeshLODProcess_MeshGeneratorModes::Solidify" },
		{ "Solidify.ToolTip", "note: must keep in sync with FGenerateMeshLODGraph::ECoreMeshGeneratorMode" },
		{ "SolidifyAndClose.Name", "EGenerateStaticMeshLODProcess_MeshGeneratorModes::SolidifyAndClose" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateStaticMeshLODProcess_MeshGeneratorModes",
		"EGenerateStaticMeshLODProcess_MeshGeneratorModes",
		Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_MeshGeneratorModes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_MeshGeneratorModes.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_MeshGeneratorModes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcessSettings;
class UScriptStruct* FGenerateStaticMeshLODProcessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLODProcessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcessSettings.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLODProcessSettings>()
{
	return FGenerateStaticMeshLODProcessSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshGenerator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshGenerator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolidifyVoxelResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SolidifyVoxelResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosureDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClosureDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrefilterVertices_MetaData[];
#endif
		static void NewProp_bPrefilterVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrefilterVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrefilterGridResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PrefilterGridResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLODProcessSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_MeshGenerator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_MeshGenerator_MetaData[] = {
		{ "Category", "MeshGenerator" },
		{ "DisplayName", "Mesh Generator" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_MeshGenerator = { "MeshGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcessSettings, MeshGenerator), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_MeshGeneratorModes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_MeshGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_MeshGenerator_MetaData)) }; // 3757153369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_SolidifyVoxelResolution_MetaData[] = {
		{ "Category", "Solidify" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "8" },
		{ "Comment", "/** Target number of voxels along the maximum dimension for Solidify operation */" },
		{ "DisplayName", "Voxel Resolution" },
		{ "EditCondition", "MeshGenerator != EGenerateStaticMeshLODProcess_MeshGeneratorModes::ConvexHull" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Target number of voxels along the maximum dimension for Solidify operation" },
		{ "UIMax", "1024" },
		{ "UIMin", "8" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_SolidifyVoxelResolution = { "SolidifyVoxelResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcessSettings, SolidifyVoxelResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_SolidifyVoxelResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_SolidifyVoxelResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Solidify" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Winding number threshold to determine what is considered inside the mesh during Solidify */" },
		{ "EditCondition", "MeshGenerator != EGenerateStaticMeshLODProcess_MeshGeneratorModes::ConvexHull" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Winding number threshold to determine what is considered inside the mesh during Solidify" },
		{ "UIMax", ".9" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcessSettings, WindingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_WindingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_ClosureDistance_MetaData[] = {
		{ "Category", "Morphology" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Offset distance in the Morpohological Closure operation */" },
		{ "DisplayName", "Closure Distance" },
		{ "EditCondition", "MeshGenerator != EGenerateStaticMeshLODProcess_MeshGeneratorModes::ConvexHull" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Offset distance in the Morpohological Closure operation" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_ClosureDistance = { "ClosureDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcessSettings, ClosureDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_ClosureDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_ClosureDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_bPrefilterVertices_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Whether to subsample input vertices using a regular grid before computing the convex hull */" },
		{ "EditCondition", "MeshGenerator == EGenerateStaticMeshLODProcess_MeshGeneratorModes::ConvexHull" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Whether to subsample input vertices using a regular grid before computing the convex hull" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_bPrefilterVertices_SetBit(void* Obj)
	{
		((FGenerateStaticMeshLODProcessSettings*)Obj)->bPrefilterVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_bPrefilterVertices = { "bPrefilterVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateStaticMeshLODProcessSettings), &Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_bPrefilterVertices_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_bPrefilterVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_bPrefilterVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_PrefilterGridResolution_MetaData[] = {
		{ "Category", "Collision" },
		{ "ClampMax", "100" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Grid resolution (along the maximum-length axis) for subsampling before computing the convex hull */" },
		{ "EditCondition", "MeshGenerator == EGenerateStaticMeshLODProcess_MeshGeneratorModes::ConvexHull" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Grid resolution (along the maximum-length axis) for subsampling before computing the convex hull" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_PrefilterGridResolution = { "PrefilterGridResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcessSettings, PrefilterGridResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_PrefilterGridResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_PrefilterGridResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_MeshGenerator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_MeshGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_SolidifyVoxelResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_ClosureDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_bPrefilterVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewProp_PrefilterGridResolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLODProcessSettings",
		sizeof(FGenerateStaticMeshLODProcessSettings),
		alignof(FGenerateStaticMeshLODProcessSettings),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcessSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcessSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcessSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_PreprocessSettings;
class UScriptStruct* FGenerateStaticMeshLODProcess_PreprocessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_PreprocessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_PreprocessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLODProcess_PreprocessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_PreprocessSettings.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLODProcess_PreprocessSettings>()
{
	return FGenerateStaticMeshLODProcess_PreprocessSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterGroupLayer_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilterGroupLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThickenWeightMapName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ThickenWeightMapName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThickenAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThickenAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLODProcess_PreprocessSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_FilterGroupLayer_MetaData[] = {
		{ "Category", "Preprocessing" },
		{ "Comment", "/** Group layer to use for filtering out detail before processing */" },
		{ "DisplayName", "Detail Filter Group Layer" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Group layer to use for filtering out detail before processing" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_FilterGroupLayer = { "FilterGroupLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_PreprocessSettings, FilterGroupLayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_FilterGroupLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_FilterGroupLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenWeightMapName_MetaData[] = {
		{ "Category", "Preprocessing" },
		{ "Comment", "/** Weight map used during mesh thickening */" },
		{ "DisplayName", "Thicken Weight Map" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Weight map used during mesh thickening" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenWeightMapName = { "ThickenWeightMapName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_PreprocessSettings, ThickenWeightMapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenWeightMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenWeightMapName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenAmount_MetaData[] = {
		{ "Category", "Preprocessing" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amount to thicken the mesh prior to Solidifying. The thicken weight map values are multiplied by this value. */" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Amount to thicken the mesh prior to Solidifying. The thicken weight map values are multiplied by this value." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenAmount = { "ThickenAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_PreprocessSettings, ThickenAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_FilterGroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenWeightMapName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewProp_ThickenAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLODProcess_PreprocessSettings",
		sizeof(FGenerateStaticMeshLODProcess_PreprocessSettings),
		alignof(FGenerateStaticMeshLODProcess_PreprocessSettings),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_PreprocessSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_PreprocessSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_PreprocessSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_SimplifyMethod;
	static UEnum* EGenerateStaticMeshLODProcess_SimplifyMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_SimplifyMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_SimplifyMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateStaticMeshLODProcess_SimplifyMethod"));
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_SimplifyMethod.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateStaticMeshLODProcess_SimplifyMethod>()
	{
		return EGenerateStaticMeshLODProcess_SimplifyMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics::Enumerators[] = {
		{ "EGenerateStaticMeshLODProcess_SimplifyMethod::TriangleCount", (int64)EGenerateStaticMeshLODProcess_SimplifyMethod::TriangleCount },
		{ "EGenerateStaticMeshLODProcess_SimplifyMethod::VertexCount", (int64)EGenerateStaticMeshLODProcess_SimplifyMethod::VertexCount },
		{ "EGenerateStaticMeshLODProcess_SimplifyMethod::TrianglePercentage", (int64)EGenerateStaticMeshLODProcess_SimplifyMethod::TrianglePercentage },
		{ "EGenerateStaticMeshLODProcess_SimplifyMethod::GeometricTolerance", (int64)EGenerateStaticMeshLODProcess_SimplifyMethod::GeometricTolerance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics::Enum_MetaDataParams[] = {
		{ "GeometricTolerance.Name", "EGenerateStaticMeshLODProcess_SimplifyMethod::GeometricTolerance" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "TriangleCount.Comment", "// note: must keep in sync with UE::GeometryFlow::EMeshSimplifyTargetType\n" },
		{ "TriangleCount.Name", "EGenerateStaticMeshLODProcess_SimplifyMethod::TriangleCount" },
		{ "TriangleCount.ToolTip", "note: must keep in sync with UE::GeometryFlow::EMeshSimplifyTargetType" },
		{ "TrianglePercentage.Name", "EGenerateStaticMeshLODProcess_SimplifyMethod::TrianglePercentage" },
		{ "VertexCount.Name", "EGenerateStaticMeshLODProcess_SimplifyMethod::VertexCount" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateStaticMeshLODProcess_SimplifyMethod",
		"EGenerateStaticMeshLODProcess_SimplifyMethod",
		Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_SimplifyMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_SimplifyMethod.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_SimplifyMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_SimplifySettings;
class UScriptStruct* FGenerateStaticMeshLODProcess_SimplifySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_SimplifySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_SimplifySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLODProcess_SimplifySettings"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_SimplifySettings.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLODProcess_SimplifySettings>()
{
	return FGenerateStaticMeshLODProcess_SimplifySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLODProcess_SimplifySettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Simplify" },
		{ "DisplayName", "Simplification Target" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_SimplifySettings, Method), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_SimplifyMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Method_MetaData)) }; // 3073113435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetCount_MetaData[] = {
		{ "Category", "Simplify" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Target triangle/vertex count after simplification */" },
		{ "EditCondition", "Method == EGenerateStaticMeshLODProcess_SimplifyMethod::TriangleCount || Method == EGenerateStaticMeshLODProcess_SimplifyMethod::VertexCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Target triangle/vertex count after simplification" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_SimplifySettings, TargetCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetPercentage_MetaData[] = {
		{ "Category", "Simplify" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Target triangle/vertex count after simplification */" },
		{ "EditCondition", "Method == EGenerateStaticMeshLODProcess_SimplifyMethod::TrianglePercentage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Target triangle/vertex count after simplification" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetPercentage = { "TargetPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_SimplifySettings, TargetPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Simplify" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Deviation in World Units (Centimeters) */" },
		{ "EditCondition", "Method == EGenerateStaticMeshLODProcess_SimplifyMethod::GeometricTolerance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Deviation in World Units (Centimeters)" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_SimplifySettings, Tolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_TargetPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewProp_Tolerance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLODProcess_SimplifySettings",
		sizeof(FGenerateStaticMeshLODProcess_SimplifySettings),
		alignof(FGenerateStaticMeshLODProcess_SimplifySettings),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_SimplifySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_SimplifySettings.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_SimplifySettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_NormalsMethod;
	static UEnum* EGenerateStaticMeshLODProcess_NormalsMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_NormalsMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_NormalsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateStaticMeshLODProcess_NormalsMethod"));
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_NormalsMethod.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateStaticMeshLODProcess_NormalsMethod>()
	{
		return EGenerateStaticMeshLODProcess_NormalsMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics::Enumerators[] = {
		{ "EGenerateStaticMeshLODProcess_NormalsMethod::FromAngleThreshold", (int64)EGenerateStaticMeshLODProcess_NormalsMethod::FromAngleThreshold },
		{ "EGenerateStaticMeshLODProcess_NormalsMethod::PerVertex", (int64)EGenerateStaticMeshLODProcess_NormalsMethod::PerVertex },
		{ "EGenerateStaticMeshLODProcess_NormalsMethod::PerTriangle", (int64)EGenerateStaticMeshLODProcess_NormalsMethod::PerTriangle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics::Enum_MetaDataParams[] = {
		{ "FromAngleThreshold.Name", "EGenerateStaticMeshLODProcess_NormalsMethod::FromAngleThreshold" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "PerTriangle.Name", "EGenerateStaticMeshLODProcess_NormalsMethod::PerTriangle" },
		{ "PerVertex.Name", "EGenerateStaticMeshLODProcess_NormalsMethod::PerVertex" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateStaticMeshLODProcess_NormalsMethod",
		"EGenerateStaticMeshLODProcess_NormalsMethod",
		Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_NormalsMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_NormalsMethod.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_NormalsMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_NormalsSettings;
class UScriptStruct* FGenerateStaticMeshLODProcess_NormalsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_NormalsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_NormalsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLODProcess_NormalsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_NormalsSettings.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLODProcess_NormalsSettings>()
{
	return FGenerateStaticMeshLODProcess_NormalsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLODProcess_NormalsSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Normals" },
		{ "Comment", "/** Type of Normals to generate */" },
		{ "DisplayName", "Normals Method" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Type of Normals to generate" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_NormalsSettings, Method), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_NormalsMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Method_MetaData)) }; // 3108917089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Normals" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Split Normals (ie sharp edge) will be created along mesh edges with opening angles above this threshold */" },
		{ "EditCondition", "Method == EGenerateStaticMeshLODProcess_NormalsMethod::FromAngleThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Split Normals (ie sharp edge) will be created along mesh edges with opening angles above this threshold" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_NormalsSettings, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLODProcess_NormalsSettings",
		sizeof(FGenerateStaticMeshLODProcess_NormalsSettings),
		alignof(FGenerateStaticMeshLODProcess_NormalsSettings),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_NormalsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_NormalsSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_NormalsSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_AutoUVMethod;
	static UEnum* EGenerateStaticMeshLODProcess_AutoUVMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_AutoUVMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_AutoUVMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateStaticMeshLODProcess_AutoUVMethod"));
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_AutoUVMethod.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateStaticMeshLODProcess_AutoUVMethod>()
	{
		return EGenerateStaticMeshLODProcess_AutoUVMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics::Enumerators[] = {
		{ "EGenerateStaticMeshLODProcess_AutoUVMethod::PatchBuilder", (int64)EGenerateStaticMeshLODProcess_AutoUVMethod::PatchBuilder },
		{ "EGenerateStaticMeshLODProcess_AutoUVMethod::UVAtlas", (int64)EGenerateStaticMeshLODProcess_AutoUVMethod::UVAtlas },
		{ "EGenerateStaticMeshLODProcess_AutoUVMethod::XAtlas", (int64)EGenerateStaticMeshLODProcess_AutoUVMethod::XAtlas },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "PatchBuilder.Name", "EGenerateStaticMeshLODProcess_AutoUVMethod::PatchBuilder" },
		{ "UVAtlas.Name", "EGenerateStaticMeshLODProcess_AutoUVMethod::UVAtlas" },
		{ "XAtlas.Name", "EGenerateStaticMeshLODProcess_AutoUVMethod::XAtlas" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateStaticMeshLODProcess_AutoUVMethod",
		"EGenerateStaticMeshLODProcess_AutoUVMethod",
		Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_AutoUVMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_AutoUVMethod.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_AutoUVMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings_PatchBuilder;
class UScriptStruct* FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings_PatchBuilder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings_PatchBuilder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLODProcess_UVSettings_PatchBuilder"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings_PatchBuilder.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder>()
{
	return FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurvatureAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SmoothingSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_CurvatureAlignment_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** This parameter controls alignment of the initial patches to creases in the mesh */" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "This parameter controls alignment of the initial patches to creases in the mesh" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_CurvatureAlignment = { "CurvatureAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder, CurvatureAlignment), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_CurvatureAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_CurvatureAlignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingSteps_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of smoothing steps to apply; this slightly increases distortion but produces more stable results. */" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Number of smoothing steps to apply; this slightly increases distortion but produces more stable results." },
		{ "UIMax", "25" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingSteps = { "SmoothingSteps", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder, SmoothingSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingAlpha_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smoothing parameter; larger values result in faster smoothing in each step. */" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Smoothing parameter; larger values result in faster smoothing in each step." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingAlpha = { "SmoothingAlpha", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder, SmoothingAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_CurvatureAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewProp_SmoothingAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLODProcess_UVSettings_PatchBuilder",
		sizeof(FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder),
		alignof(FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings_PatchBuilder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings_PatchBuilder.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings_PatchBuilder.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings;
class UScriptStruct* FGenerateStaticMeshLODProcess_UVSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLODProcess_UVSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLODProcess_UVSettings>()
{
	return FGenerateStaticMeshLODProcess_UVSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_UVMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UVMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumUVAtlasCharts_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumUVAtlasCharts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInitialPatches_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumInitialPatches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MergingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchBuilder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatchBuilder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLODProcess_UVSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_UVMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_UVMethod_MetaData[] = {
		{ "Category", "UVGeneration" },
		{ "DisplayName", "UV Method" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_UVMethod = { "UVMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings, UVMethod), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProcess_AutoUVMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_UVMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_UVMethod_MetaData)) }; // 1509742618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumUVAtlasCharts_MetaData[] = {
		{ "Category", "UVAtlas" },
		{ "Comment", "/** Maximum number of charts to create in UVAtlas */" },
		{ "DisplayName", "Max Charts" },
		{ "EditCondition", "UVMethod == EGenerateStaticMeshLODProcess_AutoUVMethod::UVAtlas" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Maximum number of charts to create in UVAtlas" },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumUVAtlasCharts = { "NumUVAtlasCharts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings, NumUVAtlasCharts), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumUVAtlasCharts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumUVAtlasCharts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumInitialPatches_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "99999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of initial patches mesh will be split into before computing island merging */" },
		{ "EditCondition", "UVMethod == EGenerateStaticMeshLODProcess_AutoUVMethod::PatchBuilder" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Number of initial patches mesh will be split into before computing island merging" },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumInitialPatches = { "NumInitialPatches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings, NumInitialPatches), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumInitialPatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumInitialPatches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MergingThreshold_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Distortion/Stretching Threshold for island merging - larger values increase the allowable UV stretching */" },
		{ "EditCondition", "UVMethod == EGenerateStaticMeshLODProcess_AutoUVMethod::PatchBuilder" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Distortion/Stretching Threshold for island merging - larger values increase the allowable UV stretching" },
		{ "UIMax", "5.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MergingThreshold = { "MergingThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings, MergingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MergingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MergingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MaxAngleDeviation_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** UV islands will not be merged if their average face normals deviate by larger than this amount */" },
		{ "EditCondition", "UVMethod == EGenerateStaticMeshLODProcess_AutoUVMethod::PatchBuilder" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "UV islands will not be merged if their average face normals deviate by larger than this amount" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MaxAngleDeviation = { "MaxAngleDeviation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings, MaxAngleDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MaxAngleDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MaxAngleDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_PatchBuilder_MetaData[] = {
		{ "Category", "PatchBuilder" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "UV - PatchBuilder" },
		{ "EditCondition", "UVMethod == EGenerateStaticMeshLODProcess_AutoUVMethod::PatchBuilder" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_PatchBuilder = { "PatchBuilder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_UVSettings, PatchBuilder), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_PatchBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_PatchBuilder_MetaData)) }; // 19719138
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_UVMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_UVMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumUVAtlasCharts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_NumInitialPatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MergingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_MaxAngleDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewProp_PatchBuilder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLODProcess_UVSettings",
		sizeof(FGenerateStaticMeshLODProcess_UVSettings),
		alignof(FGenerateStaticMeshLODProcess_UVSettings),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateStaticMeshLODBakeResolution;
	static UEnum* EGenerateStaticMeshLODBakeResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODBakeResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateStaticMeshLODBakeResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateStaticMeshLODBakeResolution"));
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODBakeResolution.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateStaticMeshLODBakeResolution>()
	{
		return EGenerateStaticMeshLODBakeResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics::Enumerators[] = {
		{ "EGenerateStaticMeshLODBakeResolution::Resolution16", (int64)EGenerateStaticMeshLODBakeResolution::Resolution16 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution32", (int64)EGenerateStaticMeshLODBakeResolution::Resolution32 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution64", (int64)EGenerateStaticMeshLODBakeResolution::Resolution64 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution128", (int64)EGenerateStaticMeshLODBakeResolution::Resolution128 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution256", (int64)EGenerateStaticMeshLODBakeResolution::Resolution256 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution512", (int64)EGenerateStaticMeshLODBakeResolution::Resolution512 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution1024", (int64)EGenerateStaticMeshLODBakeResolution::Resolution1024 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution2048", (int64)EGenerateStaticMeshLODBakeResolution::Resolution2048 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution4096", (int64)EGenerateStaticMeshLODBakeResolution::Resolution4096 },
		{ "EGenerateStaticMeshLODBakeResolution::Resolution8192", (int64)EGenerateStaticMeshLODBakeResolution::Resolution8192 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "Resolution1024.DisplayName", "1024 x 1024" },
		{ "Resolution1024.Name", "EGenerateStaticMeshLODBakeResolution::Resolution1024" },
		{ "Resolution128.DisplayName", "128 x 128" },
		{ "Resolution128.Name", "EGenerateStaticMeshLODBakeResolution::Resolution128" },
		{ "Resolution16.DisplayName", "16 x 16" },
		{ "Resolution16.Name", "EGenerateStaticMeshLODBakeResolution::Resolution16" },
		{ "Resolution2048.DisplayName", "2048 x 2048" },
		{ "Resolution2048.Name", "EGenerateStaticMeshLODBakeResolution::Resolution2048" },
		{ "Resolution256.DisplayName", "256 x 256" },
		{ "Resolution256.Name", "EGenerateStaticMeshLODBakeResolution::Resolution256" },
		{ "Resolution32.DisplayName", "32 x 32" },
		{ "Resolution32.Name", "EGenerateStaticMeshLODBakeResolution::Resolution32" },
		{ "Resolution4096.DisplayName", "4096 x 4096" },
		{ "Resolution4096.Name", "EGenerateStaticMeshLODBakeResolution::Resolution4096" },
		{ "Resolution512.DisplayName", "512 x 512" },
		{ "Resolution512.Name", "EGenerateStaticMeshLODBakeResolution::Resolution512" },
		{ "Resolution64.DisplayName", "64 x 64" },
		{ "Resolution64.Name", "EGenerateStaticMeshLODBakeResolution::Resolution64" },
		{ "Resolution8192.DisplayName", "8192 x 8192" },
		{ "Resolution8192.Name", "EGenerateStaticMeshLODBakeResolution::Resolution8192" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateStaticMeshLODBakeResolution",
		"EGenerateStaticMeshLODBakeResolution",
		Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODBakeResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateStaticMeshLODBakeResolution.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODBakeResolution.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_TextureSettings;
class UScriptStruct* FGenerateStaticMeshLODProcess_TextureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_TextureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_TextureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLODProcess_TextureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_TextureSettings.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLODProcess_TextureSettings>()
{
	return FGenerateStaticMeshLODProcess_TextureSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BakeResolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeResolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakeThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCombineTextures_MetaData[];
#endif
		static void NewProp_bCombineTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombineTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLODProcess_TextureSettings>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeResolution_MetaData[] = {
		{ "Category", "Baking" },
		{ "Comment", "/** Resolution for normal map and texture baking */" },
		{ "DisplayName", "Bake Image Res" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Resolution for normal map and texture baking" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeResolution = { "BakeResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_TextureSettings, BakeResolution), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODBakeResolution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeResolution_MetaData)) }; // 592039100
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeThickness_MetaData[] = {
		{ "Category", "Baking" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How far away from the output mesh to search for input mesh during baking */" },
		{ "DisplayName", "Bake Thickness" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "How far away from the output mesh to search for input mesh during baking" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeThickness = { "BakeThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_TextureSettings, BakeThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_bCombineTextures_MetaData[] = {
		{ "Category", "Baking" },
		{ "DisplayName", "Combine Textures" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_bCombineTextures_SetBit(void* Obj)
	{
		((FGenerateStaticMeshLODProcess_TextureSettings*)Obj)->bCombineTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_bCombineTextures = { "bCombineTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateStaticMeshLODProcess_TextureSettings), &Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_bCombineTextures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_bCombineTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_bCombineTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeResolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_BakeThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewProp_bCombineTextures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLODProcess_TextureSettings",
		sizeof(FGenerateStaticMeshLODProcess_TextureSettings),
		alignof(FGenerateStaticMeshLODProcess_TextureSettings),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_TextureSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_TextureSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_TextureSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateStaticMeshLODSimpleCollisionGeometryType;
	static UEnum* EGenerateStaticMeshLODSimpleCollisionGeometryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODSimpleCollisionGeometryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateStaticMeshLODSimpleCollisionGeometryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateStaticMeshLODSimpleCollisionGeometryType"));
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODSimpleCollisionGeometryType.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateStaticMeshLODSimpleCollisionGeometryType>()
	{
		return EGenerateStaticMeshLODSimpleCollisionGeometryType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics::Enumerators[] = {
		{ "EGenerateStaticMeshLODSimpleCollisionGeometryType::AlignedBoxes", (int64)EGenerateStaticMeshLODSimpleCollisionGeometryType::AlignedBoxes },
		{ "EGenerateStaticMeshLODSimpleCollisionGeometryType::OrientedBoxes", (int64)EGenerateStaticMeshLODSimpleCollisionGeometryType::OrientedBoxes },
		{ "EGenerateStaticMeshLODSimpleCollisionGeometryType::MinimalSpheres", (int64)EGenerateStaticMeshLODSimpleCollisionGeometryType::MinimalSpheres },
		{ "EGenerateStaticMeshLODSimpleCollisionGeometryType::Capsules", (int64)EGenerateStaticMeshLODSimpleCollisionGeometryType::Capsules },
		{ "EGenerateStaticMeshLODSimpleCollisionGeometryType::ConvexHulls", (int64)EGenerateStaticMeshLODSimpleCollisionGeometryType::ConvexHulls },
		{ "EGenerateStaticMeshLODSimpleCollisionGeometryType::SweptHulls", (int64)EGenerateStaticMeshLODSimpleCollisionGeometryType::SweptHulls },
		{ "EGenerateStaticMeshLODSimpleCollisionGeometryType::MinVolume", (int64)EGenerateStaticMeshLODSimpleCollisionGeometryType::MinVolume },
		{ "EGenerateStaticMeshLODSimpleCollisionGeometryType::None", (int64)EGenerateStaticMeshLODSimpleCollisionGeometryType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics::Enum_MetaDataParams[] = {
		{ "AlignedBoxes.Comment", "// NOTE: This must be kept in sync with ESimpleCollisionGeometryType in GenerateSimpleCollisionNode.h\n" },
		{ "AlignedBoxes.Name", "EGenerateStaticMeshLODSimpleCollisionGeometryType::AlignedBoxes" },
		{ "AlignedBoxes.ToolTip", "NOTE: This must be kept in sync with ESimpleCollisionGeometryType in GenerateSimpleCollisionNode.h" },
		{ "Capsules.Name", "EGenerateStaticMeshLODSimpleCollisionGeometryType::Capsules" },
		{ "ConvexHulls.Name", "EGenerateStaticMeshLODSimpleCollisionGeometryType::ConvexHulls" },
		{ "MinimalSpheres.Name", "EGenerateStaticMeshLODSimpleCollisionGeometryType::MinimalSpheres" },
		{ "MinVolume.Name", "EGenerateStaticMeshLODSimpleCollisionGeometryType::MinVolume" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "None.Name", "EGenerateStaticMeshLODSimpleCollisionGeometryType::None" },
		{ "OrientedBoxes.Name", "EGenerateStaticMeshLODSimpleCollisionGeometryType::OrientedBoxes" },
		{ "SweptHulls.Name", "EGenerateStaticMeshLODSimpleCollisionGeometryType::SweptHulls" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateStaticMeshLODSimpleCollisionGeometryType",
		"EGenerateStaticMeshLODSimpleCollisionGeometryType",
		Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODSimpleCollisionGeometryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateStaticMeshLODSimpleCollisionGeometryType.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODSimpleCollisionGeometryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateStaticMeshLODProjectedHullAxisMode;
	static UEnum* EGenerateStaticMeshLODProjectedHullAxisMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProjectedHullAxisMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateStaticMeshLODProjectedHullAxisMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateStaticMeshLODProjectedHullAxisMode"));
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProjectedHullAxisMode.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateStaticMeshLODProjectedHullAxisMode>()
	{
		return EGenerateStaticMeshLODProjectedHullAxisMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics::Enumerators[] = {
		{ "EGenerateStaticMeshLODProjectedHullAxisMode::X", (int64)EGenerateStaticMeshLODProjectedHullAxisMode::X },
		{ "EGenerateStaticMeshLODProjectedHullAxisMode::Y", (int64)EGenerateStaticMeshLODProjectedHullAxisMode::Y },
		{ "EGenerateStaticMeshLODProjectedHullAxisMode::Z", (int64)EGenerateStaticMeshLODProjectedHullAxisMode::Z },
		{ "EGenerateStaticMeshLODProjectedHullAxisMode::SmallestBoxDimension", (int64)EGenerateStaticMeshLODProjectedHullAxisMode::SmallestBoxDimension },
		{ "EGenerateStaticMeshLODProjectedHullAxisMode::SmallestVolume", (int64)EGenerateStaticMeshLODProjectedHullAxisMode::SmallestVolume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// NOTE: This must be kept in sync with FMeshSimpleShapeApproximation::EProjectedHullAxisMode in MeshSimpleShapeApproximation.h\n" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "SmallestBoxDimension.Name", "EGenerateStaticMeshLODProjectedHullAxisMode::SmallestBoxDimension" },
		{ "SmallestVolume.Name", "EGenerateStaticMeshLODProjectedHullAxisMode::SmallestVolume" },
		{ "ToolTip", "NOTE: This must be kept in sync with FMeshSimpleShapeApproximation::EProjectedHullAxisMode in MeshSimpleShapeApproximation.h" },
		{ "X.Name", "EGenerateStaticMeshLODProjectedHullAxisMode::X" },
		{ "Y.Name", "EGenerateStaticMeshLODProjectedHullAxisMode::Y" },
		{ "Z.Name", "EGenerateStaticMeshLODProjectedHullAxisMode::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateStaticMeshLODProjectedHullAxisMode",
		"EGenerateStaticMeshLODProjectedHullAxisMode",
		Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLODProjectedHullAxisMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateStaticMeshLODProjectedHullAxisMode.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLODProjectedHullAxisMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_CollisionSettings;
class UScriptStruct* FGenerateStaticMeshLODProcess_CollisionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_CollisionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_CollisionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLODProcess_CollisionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_CollisionSettings.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLODProcess_CollisionSettings>()
{
	return FGenerateStaticMeshLODProcess_CollisionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionGroupLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionGroupLayerName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConvexTriangleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrefilterVertices_MetaData[];
#endif
		static void NewProp_bPrefilterVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrefilterVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrefilterGridResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PrefilterGridResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyPolygons_MetaData[];
#endif
		static void NewProp_bSimplifyPolygons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyPolygons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HullTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HullTolerance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SweepAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SweepAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLODProcess_CollisionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionGroupLayerName_MetaData[] = {
		{ "Comment", "// Transient property, not set directly by the user. The user controls a CollisionGroupLayerName dropdown property\n// on the Tool and that value is copied here.\n" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Transient property, not set directly by the user. The user controls a CollisionGroupLayerName dropdown property\non the Tool and that value is copied here." },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionGroupLayerName = { "CollisionGroupLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_CollisionSettings, CollisionGroupLayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionGroupLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionGroupLayerName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Type of simple collision objects to produce */" },
		{ "DisplayName", "Collision Type" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Type of simple collision objects to produce" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_CollisionSettings, CollisionType), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODSimpleCollisionGeometryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionType_MetaData)) }; // 2382346079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_ConvexTriangleCount_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Target triangle count for each convex hull after simplification */" },
		{ "DisplayName", "Convex Tri Count" },
		{ "EditCondition", "CollisionType == EGenerateStaticMeshLODSimpleCollisionGeometryType::ConvexHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Target triangle count for each convex hull after simplification" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_ConvexTriangleCount = { "ConvexTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_CollisionSettings, ConvexTriangleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_ConvexTriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_ConvexTriangleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bPrefilterVertices_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Whether to subsample input vertices using a regular grid before computing the convex hull */" },
		{ "EditCondition", "CollisionType == EGenerateStaticMeshLODSimpleCollisionGeometryType::ConvexHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Whether to subsample input vertices using a regular grid before computing the convex hull" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bPrefilterVertices_SetBit(void* Obj)
	{
		((FGenerateStaticMeshLODProcess_CollisionSettings*)Obj)->bPrefilterVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bPrefilterVertices = { "bPrefilterVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateStaticMeshLODProcess_CollisionSettings), &Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bPrefilterVertices_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bPrefilterVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bPrefilterVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_PrefilterGridResolution_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Grid resolution (along the maximum-length axis) for subsampling before computing the convex hull */" },
		{ "EditCondition", "CollisionType == EGenerateStaticMeshLODSimpleCollisionGeometryType::ConvexHulls && bPrefilterVertices" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Grid resolution (along the maximum-length axis) for subsampling before computing the convex hull" },
		{ "UIMax", "100" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_PrefilterGridResolution = { "PrefilterGridResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_CollisionSettings, PrefilterGridResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_PrefilterGridResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_PrefilterGridResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bSimplifyPolygons_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Whether to simplify polygons used for swept convex hulls */" },
		{ "EditCondition", "CollisionType == EGenerateStaticMeshLODSimpleCollisionGeometryType::SweptHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Whether to simplify polygons used for swept convex hulls" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bSimplifyPolygons_SetBit(void* Obj)
	{
		((FGenerateStaticMeshLODProcess_CollisionSettings*)Obj)->bSimplifyPolygons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bSimplifyPolygons = { "bSimplifyPolygons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateStaticMeshLODProcess_CollisionSettings), &Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bSimplifyPolygons_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bSimplifyPolygons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bSimplifyPolygons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_HullTolerance_MetaData[] = {
		{ "Category", "Collision" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Target minumum edge length for simplified swept convex hulls */" },
		{ "EditCondition", "CollisionType == EGenerateStaticMeshLODSimpleCollisionGeometryType::SweptHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Target minumum edge length for simplified swept convex hulls" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_HullTolerance = { "HullTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_CollisionSettings, HullTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_HullTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_HullTolerance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_SweepAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_SweepAxis_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Which axis to sweep along when computing swept convex hulls */" },
		{ "EditCondition", "CollisionType == EGenerateStaticMeshLODSimpleCollisionGeometryType::SweptHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Which axis to sweep along when computing swept convex hulls" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_SweepAxis = { "SweepAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLODProcess_CollisionSettings, SweepAxis), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLODProjectedHullAxisMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_SweepAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_SweepAxis_MetaData)) }; // 3395030589
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionGroupLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_ConvexTriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bPrefilterVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_PrefilterGridResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_bSimplifyPolygons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_HullTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_SweepAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewProp_SweepAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLODProcess_CollisionSettings",
		sizeof(FGenerateStaticMeshLODProcess_CollisionSettings),
		alignof(FGenerateStaticMeshLODProcess_CollisionSettings),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_CollisionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_CollisionSettings.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_CollisionSettings.InnerSingleton;
	}
	void UGenerateStaticMeshLODProcess::StaticRegisterNativesUGenerateStaticMeshLODProcess()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateStaticMeshLODProcess);
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODProcess_NoRegister()
	{
		return UGenerateStaticMeshLODProcess::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceStaticMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllDerivedTextures_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllDerivedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllDerivedTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DerivedNormalMapTex_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DerivedNormalMapTex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DerivedMultiTextureBakeResult_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DerivedMultiTextureBakeResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_SourceStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_SourceStaticMesh = { "SourceStaticMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODProcess, SourceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_SourceStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_SourceStaticMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_AllDerivedTextures_ElementProp = { "AllDerivedTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_AllDerivedTextures_MetaData[] = {
		{ "Comment", "// This list is for accumulating derived UTexture2D's created during WriteDerivedTextures(). We have to\n// maintain uproperty references to these or they may be garbage collected\n" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "This list is for accumulating derived UTexture2D's created during WriteDerivedTextures(). We have to\nmaintain uproperty references to these or they may be garbage collected" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_AllDerivedTextures = { "AllDerivedTextures", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODProcess, AllDerivedTextures), METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_AllDerivedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_AllDerivedTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedNormalMapTex_MetaData[] = {
		{ "Comment", "// Derived Normal Map\n" },
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
		{ "ToolTip", "Derived Normal Map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedNormalMapTex = { "DerivedNormalMapTex", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODProcess, DerivedNormalMapTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedNormalMapTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedNormalMapTex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedMultiTextureBakeResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/GenerateStaticMeshLODProcess.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedMultiTextureBakeResult = { "DerivedMultiTextureBakeResult", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODProcess, DerivedMultiTextureBakeResult), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedMultiTextureBakeResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedMultiTextureBakeResult_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_SourceStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_AllDerivedTextures_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_AllDerivedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedNormalMapTex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::NewProp_DerivedMultiTextureBakeResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateStaticMeshLODProcess>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::ClassParams = {
		&UGenerateStaticMeshLODProcess::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODProcess()
	{
		if (!Z_Registration_Info_UClass_UGenerateStaticMeshLODProcess.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateStaticMeshLODProcess.OuterSingleton, Z_Construct_UClass_UGenerateStaticMeshLODProcess_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateStaticMeshLODProcess.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UGenerateStaticMeshLODProcess>()
	{
		return UGenerateStaticMeshLODProcess::StaticClass();
	}
	UGenerateStaticMeshLODProcess::UGenerateStaticMeshLODProcess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateStaticMeshLODProcess);
	UGenerateStaticMeshLODProcess::~UGenerateStaticMeshLODProcess() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::EnumInfo[] = {
		{ EGenerateStaticMeshLODProcess_MeshGeneratorModes_StaticEnum, TEXT("EGenerateStaticMeshLODProcess_MeshGeneratorModes"), &Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_MeshGeneratorModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3757153369U) },
		{ EGenerateStaticMeshLODProcess_SimplifyMethod_StaticEnum, TEXT("EGenerateStaticMeshLODProcess_SimplifyMethod"), &Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_SimplifyMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3073113435U) },
		{ EGenerateStaticMeshLODProcess_NormalsMethod_StaticEnum, TEXT("EGenerateStaticMeshLODProcess_NormalsMethod"), &Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_NormalsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3108917089U) },
		{ EGenerateStaticMeshLODProcess_AutoUVMethod_StaticEnum, TEXT("EGenerateStaticMeshLODProcess_AutoUVMethod"), &Z_Registration_Info_UEnum_EGenerateStaticMeshLODProcess_AutoUVMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1509742618U) },
		{ EGenerateStaticMeshLODBakeResolution_StaticEnum, TEXT("EGenerateStaticMeshLODBakeResolution"), &Z_Registration_Info_UEnum_EGenerateStaticMeshLODBakeResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 592039100U) },
		{ EGenerateStaticMeshLODSimpleCollisionGeometryType_StaticEnum, TEXT("EGenerateStaticMeshLODSimpleCollisionGeometryType"), &Z_Registration_Info_UEnum_EGenerateStaticMeshLODSimpleCollisionGeometryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2382346079U) },
		{ EGenerateStaticMeshLODProjectedHullAxisMode_StaticEnum, TEXT("EGenerateStaticMeshLODProjectedHullAxisMode"), &Z_Registration_Info_UEnum_EGenerateStaticMeshLODProjectedHullAxisMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3395030589U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::ScriptStructInfo[] = {
		{ FGenerateStaticMeshLODProcessSettings::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings_Statics::NewStructOps, TEXT("GenerateStaticMeshLODProcessSettings"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLODProcessSettings), 3183980117U) },
		{ FGenerateStaticMeshLODProcess_PreprocessSettings::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings_Statics::NewStructOps, TEXT("GenerateStaticMeshLODProcess_PreprocessSettings"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_PreprocessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLODProcess_PreprocessSettings), 2333318121U) },
		{ FGenerateStaticMeshLODProcess_SimplifySettings::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings_Statics::NewStructOps, TEXT("GenerateStaticMeshLODProcess_SimplifySettings"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_SimplifySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLODProcess_SimplifySettings), 1872819562U) },
		{ FGenerateStaticMeshLODProcess_NormalsSettings::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings_Statics::NewStructOps, TEXT("GenerateStaticMeshLODProcess_NormalsSettings"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_NormalsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLODProcess_NormalsSettings), 1423837322U) },
		{ FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder_Statics::NewStructOps, TEXT("GenerateStaticMeshLODProcess_UVSettings_PatchBuilder"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings_PatchBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder), 19719138U) },
		{ FGenerateStaticMeshLODProcess_UVSettings::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings_Statics::NewStructOps, TEXT("GenerateStaticMeshLODProcess_UVSettings"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_UVSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLODProcess_UVSettings), 3025364498U) },
		{ FGenerateStaticMeshLODProcess_TextureSettings::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings_Statics::NewStructOps, TEXT("GenerateStaticMeshLODProcess_TextureSettings"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_TextureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLODProcess_TextureSettings), 1273141117U) },
		{ FGenerateStaticMeshLODProcess_CollisionSettings::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings_Statics::NewStructOps, TEXT("GenerateStaticMeshLODProcess_CollisionSettings"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLODProcess_CollisionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLODProcess_CollisionSettings), 2593582274U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateStaticMeshLODProcess, UGenerateStaticMeshLODProcess::StaticClass, TEXT("UGenerateStaticMeshLODProcess"), &Z_Registration_Info_UClass_UGenerateStaticMeshLODProcess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateStaticMeshLODProcess), 3941524757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_2075376905(TEXT("/Script/MeshLODToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Graphs_GenerateStaticMeshLODProcess_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
