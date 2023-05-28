// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshVoxelFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVoxelFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScript3DGridParameters();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptGridSizingMethod;
	static UEnum* EGeometryScriptGridSizingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptGridSizingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptGridSizingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptGridSizingMethod"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptGridSizingMethod.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptGridSizingMethod>()
	{
		return EGeometryScriptGridSizingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics::Enumerators[] = {
		{ "EGeometryScriptGridSizingMethod::GridCellSize", (int64)EGeometryScriptGridSizingMethod::GridCellSize },
		{ "EGeometryScriptGridSizingMethod::GridResolution", (int64)EGeometryScriptGridSizingMethod::GridResolution },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GridCellSize.Name", "EGeometryScriptGridSizingMethod::GridCellSize" },
		{ "GridResolution.Name", "EGeometryScriptGridSizingMethod::GridResolution" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptGridSizingMethod",
		"EGeometryScriptGridSizingMethod",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptGridSizingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptGridSizingMethod.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptGridSizingMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScript3DGridParameters;
class UScriptStruct* FGeometryScript3DGridParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScript3DGridParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScript3DGridParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScript3DGridParameters"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScript3DGridParameters.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScript3DGridParameters>()
{
	return FGeometryScript3DGridParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SizeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GridResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/***\n * Parameters for 3D grids, eg grids used for sampling, SDFs, voxelization, etc\n */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ToolTip", "Parameters for 3D grids, eg grids used for sampling, SDFs, voxelization, etc" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScript3DGridParameters>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_SizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_SizeMethod_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** SizeMethod determines how the parameters below will be interpreted to define the size of a 3D sampling/voxel grid */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ToolTip", "SizeMethod determines how the parameters below will be interpreted to define the size of a 3D sampling/voxel grid" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_SizeMethod = { "SizeMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScript3DGridParameters, SizeMethod), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptGridSizingMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_SizeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_SizeMethod_MetaData)) }; // 3448417252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridCellSize_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Use a specific grid cell size, and construct a grid with dimensions large enough to contain the target object */" },
		{ "EditCondition", "SizeMethod == EGeometryScriptGridSizingMethod::GridCellSize" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ToolTip", "Use a specific grid cell size, and construct a grid with dimensions large enough to contain the target object" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridCellSize = { "GridCellSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScript3DGridParameters, GridCellSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridResolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Use a specific grid resolution, with the grid cell size derived form the target object bounds such that this is the number of cells along the longest box dimension */" },
		{ "EditCondition", "SizeMethod == EGeometryScriptGridSizingMethod::GridResolution" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ToolTip", "Use a specific grid resolution, with the grid cell size derived form the target object bounds such that this is the number of cells along the longest box dimension" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridResolution = { "GridResolution", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScript3DGridParameters, GridResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_SizeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_SizeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewProp_GridResolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScript3DGridParameters",
		sizeof(FGeometryScript3DGridParameters),
		alignof(FGeometryScript3DGridParameters),
		Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScript3DGridParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScript3DGridParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScript3DGridParameters.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScript3DGridParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSolidifyOptions;
class UScriptStruct* FGeometryScriptSolidifyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSolidifyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSolidifyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSolidifyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSolidifyOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSolidifyOptions>()
{
	return FGeometryScriptSolidifyOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolidAtBoundaries_MetaData[];
#endif
		static void NewProp_bSolidAtBoundaries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidAtBoundaries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendBounds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtendBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceSearchSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SurfaceSearchSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bThickenShells_MetaData[];
#endif
		static void NewProp_bThickenShells_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bThickenShells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShellThickness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ShellThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSolidifyOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_GridParameters_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_GridParameters = { "GridParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSolidifyOptions, GridParameters), Z_Construct_UScriptStruct_FGeometryScript3DGridParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_GridParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_GridParameters_MetaData)) }; // 3240383567
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSolidifyOptions, WindingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_WindingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bSolidAtBoundaries_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bSolidAtBoundaries_SetBit(void* Obj)
	{
		((FGeometryScriptSolidifyOptions*)Obj)->bSolidAtBoundaries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bSolidAtBoundaries = { "bSolidAtBoundaries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSolidifyOptions), &Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bSolidAtBoundaries_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bSolidAtBoundaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bSolidAtBoundaries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ExtendBounds_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ExtendBounds = { "ExtendBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSolidifyOptions, ExtendBounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ExtendBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ExtendBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_SurfaceSearchSteps_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_SurfaceSearchSteps = { "SurfaceSearchSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSolidifyOptions, SurfaceSearchSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_SurfaceSearchSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_SurfaceSearchSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bThickenShells_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When enabled, regions of the input mesh that have open boundaries (ie \"shells\") are thickened by extruding them into closed solids. This may be expensive on large meshes. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ToolTip", "When enabled, regions of the input mesh that have open boundaries (ie \"shells\") are thickened by extruding them into closed solids. This may be expensive on large meshes." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bThickenShells_SetBit(void* Obj)
	{
		((FGeometryScriptSolidifyOptions*)Obj)->bThickenShells = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bThickenShells = { "bThickenShells", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSolidifyOptions), &Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bThickenShells_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bThickenShells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bThickenShells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ShellThickness_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Open Shells are Thickened by offsetting vertices along their averaged vertex normals by this amount. Dimension is but clamped to twice the grid cell size. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ToolTip", "Open Shells are Thickened by offsetting vertices along their averaged vertex normals by this amount. Dimension is but clamped to twice the grid cell size." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ShellThickness = { "ShellThickness", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSolidifyOptions, ShellThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ShellThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ShellThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_GridParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bSolidAtBoundaries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ExtendBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_SurfaceSearchSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_bThickenShells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewProp_ShellThickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSolidifyOptions",
		sizeof(FGeometryScriptSolidifyOptions),
		alignof(FGeometryScriptSolidifyOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSolidifyOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSolidifyOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSolidifyOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptMorphologicalOpType;
	static UEnum* EGeometryScriptMorphologicalOpType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMorphologicalOpType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptMorphologicalOpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptMorphologicalOpType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMorphologicalOpType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMorphologicalOpType>()
	{
		return EGeometryScriptMorphologicalOpType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics::Enumerators[] = {
		{ "EGeometryScriptMorphologicalOpType::Dilate", (int64)EGeometryScriptMorphologicalOpType::Dilate },
		{ "EGeometryScriptMorphologicalOpType::Contract", (int64)EGeometryScriptMorphologicalOpType::Contract },
		{ "EGeometryScriptMorphologicalOpType::Close", (int64)EGeometryScriptMorphologicalOpType::Close },
		{ "EGeometryScriptMorphologicalOpType::Open", (int64)EGeometryScriptMorphologicalOpType::Open },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Close.Comment", "/** Dilate and then contract, to delete small negative features (sharp inner corners, small holes) */" },
		{ "Close.Name", "EGeometryScriptMorphologicalOpType::Close" },
		{ "Close.ToolTip", "Dilate and then contract, to delete small negative features (sharp inner corners, small holes)" },
		{ "Contract.Comment", "/** Shrink the shapes inward */" },
		{ "Contract.Name", "EGeometryScriptMorphologicalOpType::Contract" },
		{ "Contract.ToolTip", "Shrink the shapes inward" },
		{ "Dilate.Comment", "/** Expand the shapes outward */" },
		{ "Dilate.Name", "EGeometryScriptMorphologicalOpType::Dilate" },
		{ "Dilate.ToolTip", "Expand the shapes outward" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "Open.Comment", "/** Contract and then dilate, to delete small positive features (sharp outer corners, small isolated pieces) */" },
		{ "Open.Name", "EGeometryScriptMorphologicalOpType::Open" },
		{ "Open.ToolTip", "Contract and then dilate, to delete small positive features (sharp outer corners, small isolated pieces)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptMorphologicalOpType",
		"EGeometryScriptMorphologicalOpType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMorphologicalOpType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptMorphologicalOpType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMorphologicalOpType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMorphologyOptions;
class UScriptStruct* FGeometryScriptMorphologyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMorphologyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMorphologyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMorphologyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMorphologyOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMorphologyOptions>()
{
	return FGeometryScriptMorphologyOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SDFGridParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SDFGridParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateMeshGrid_MetaData[];
#endif
		static void NewProp_bUseSeparateMeshGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateMeshGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGridParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshGridParameters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMorphologyOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_SDFGridParameters_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_SDFGridParameters = { "SDFGridParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMorphologyOptions, SDFGridParameters), Z_Construct_UScriptStruct_FGeometryScript3DGridParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_SDFGridParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_SDFGridParameters_MetaData)) }; // 3240383567
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_bUseSeparateMeshGrid_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_bUseSeparateMeshGrid_SetBit(void* Obj)
	{
		((FGeometryScriptMorphologyOptions*)Obj)->bUseSeparateMeshGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_bUseSeparateMeshGrid = { "bUseSeparateMeshGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMorphologyOptions), &Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_bUseSeparateMeshGrid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_bUseSeparateMeshGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_bUseSeparateMeshGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_MeshGridParameters_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_MeshGridParameters = { "MeshGridParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMorphologyOptions, MeshGridParameters), Z_Construct_UScriptStruct_FGeometryScript3DGridParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_MeshGridParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_MeshGridParameters_MetaData)) }; // 3240383567
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMorphologyOptions, Operation), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMorphologicalOpType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Operation_MetaData)) }; // 1510658548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMorphologyOptions, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_SDFGridParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_bUseSeparateMeshGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_MeshGridParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewProp_Distance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMorphologyOptions",
		sizeof(FGeometryScriptMorphologyOptions),
		alignof(FGeometryScriptMorphologyOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMorphologyOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMorphologyOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMorphologyOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshVoxelFunctions::execApplyMeshMorphology)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMorphologyOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshVoxelFunctions::execApplyMeshSolidify)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptSolidifyOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshVoxelFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshVoxelFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyMeshMorphology", &UGeometryScriptLibrary_MeshVoxelFunctions::execApplyMeshMorphology },
			{ "ApplyMeshSolidify", &UGeometryScriptLibrary_MeshVoxelFunctions::execApplyMeshSolidify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics
	{
		struct GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshMorphology_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMorphologyOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshMorphology_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshMorphology_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions, METADATA_PARAMS(nullptr, 0) }; // 3276621355
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshMorphology_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshMorphology_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Voxel" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions, nullptr, "ApplyMeshMorphology", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshMorphology_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics
	{
		struct GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshSolidify_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptSolidifyOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshSolidify_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshSolidify_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions, METADATA_PARAMS(nullptr, 0) }; // 4277997489
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshSolidify_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshSolidify_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Voxel" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions, nullptr, "ApplyMeshSolidify", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::GeometryScriptLibrary_MeshVoxelFunctions_eventApplyMeshSolidify_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshVoxelFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology, "ApplyMeshMorphology" }, // 4031260877
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify, "ApplyMeshSolidify" }, // 3843239530
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshVoxelFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshVoxelFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshVoxelProcessing" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshVoxelFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshVoxelFunctions>()
	{
		return UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshVoxelFunctions::UGeometryScriptLibrary_MeshVoxelFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshVoxelFunctions);
	UGeometryScriptLibrary_MeshVoxelFunctions::~UGeometryScriptLibrary_MeshVoxelFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptGridSizingMethod_StaticEnum, TEXT("EGeometryScriptGridSizingMethod"), &Z_Registration_Info_UEnum_EGeometryScriptGridSizingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3448417252U) },
		{ EGeometryScriptMorphologicalOpType_StaticEnum, TEXT("EGeometryScriptMorphologicalOpType"), &Z_Registration_Info_UEnum_EGeometryScriptMorphologicalOpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1510658548U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScript3DGridParameters::StaticStruct, Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics::NewStructOps, TEXT("GeometryScript3DGridParameters"), &Z_Registration_Info_UScriptStruct_GeometryScript3DGridParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScript3DGridParameters), 3240383567U) },
		{ FGeometryScriptSolidifyOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics::NewStructOps, TEXT("GeometryScriptSolidifyOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSolidifyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSolidifyOptions), 4277997489U) },
		{ FGeometryScriptMorphologyOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics::NewStructOps, TEXT("GeometryScriptMorphologyOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMorphologyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMorphologyOptions), 3276621355U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions, UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshVoxelFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshVoxelFunctions), 2049174640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_2220844379(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
