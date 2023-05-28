// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGMeshSampler.h"
#include "GeometryScript/MeshSamplingFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMeshSampler() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGMeshSamplerSettings();
	PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGMeshSamplerSettings_NoRegister();
	PCGGEOMETRYSCRIPTINTEROP_API UEnum* Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod();
	UPackage* Z_Construct_UPackage__Script_PCGGeometryScriptInterop();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMeshSamplingMethod;
	static UEnum* EPCGMeshSamplingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod, (UObject*)Z_Construct_UPackage__Script_PCGGeometryScriptInterop(), TEXT("EPCGMeshSamplingMethod"));
		}
		return Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.OuterSingleton;
	}
	template<> PCGGEOMETRYSCRIPTINTEROP_API UEnum* StaticEnum<EPCGMeshSamplingMethod>()
	{
		return EPCGMeshSamplingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::Enumerators[] = {
		{ "EPCGMeshSamplingMethod::OnePointPerTriangle", (int64)EPCGMeshSamplingMethod::OnePointPerTriangle },
		{ "EPCGMeshSamplingMethod::OnePointPerVertex", (int64)EPCGMeshSamplingMethod::OnePointPerVertex },
		{ "EPCGMeshSamplingMethod::PoissonSampling", (int64)EPCGMeshSamplingMethod::PoissonSampling },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "OnePointPerTriangle.Comment", "/** Sample one point (at the center) of each triangle of the mesh. */" },
		{ "OnePointPerTriangle.Name", "EPCGMeshSamplingMethod::OnePointPerTriangle" },
		{ "OnePointPerTriangle.ToolTip", "Sample one point (at the center) of each triangle of the mesh." },
		{ "OnePointPerVertex.Comment", "/** Sample one point per vertex on the mesh. */" },
		{ "OnePointPerVertex.Name", "EPCGMeshSamplingMethod::OnePointPerVertex" },
		{ "OnePointPerVertex.ToolTip", "Sample one point per vertex on the mesh." },
		{ "PoissonSampling.Comment", "/** Use Poisson sampling to sample points on the mesh. Can be expensive and therefore it is not framebound. */" },
		{ "PoissonSampling.Name", "EPCGMeshSamplingMethod::PoissonSampling" },
		{ "PoissonSampling.ToolTip", "Use Poisson sampling to sample points on the mesh. Can be expensive and therefore it is not framebound." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCGGeometryScriptInterop,
		nullptr,
		"EPCGMeshSamplingMethod",
		"EPCGMeshSamplingMethod",
		Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod()
	{
		if (!Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.InnerSingleton, Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMeshSamplingMethod.InnerSingleton;
	}
	void UPCGMeshSamplerSettings::StaticRegisterNativesUPCGMeshSamplerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMeshSamplerSettings);
	UClass* Z_Construct_UClass_UPCGMeshSamplerSettings_NoRegister()
	{
		return UPCGMeshSamplerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMeshSamplerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SamplingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRedAsDensity_MetaData[];
#endif
		static void NewProp_bUseRedAsDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRedAsDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVoxelize_MetaData[];
#endif
		static void NewProp_bVoxelize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoxelize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHiddenTriangles_MetaData[];
#endif
		static void NewProp_bRemoveHiddenTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHiddenTriangles;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedLODType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedLODType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedLODType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedLODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedLODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonUniformSamplingOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NonUniformSamplingOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGGeometryScriptInterop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Sample points on a mesh\n*/" },
		{ "IncludePath", "Elements/PCGMeshSampler.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "ToolTip", "Sample points on a mesh" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingMethod = { "SamplingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSamplerSettings, SamplingMethod), Z_Construct_UEnum_PCGGeometryScriptInterop_EPCGMeshSamplingMethod, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingMethod_MetaData)) }; // 1049294944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_StaticMeshPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "Settings" },
		{ "Comment", "/** Soft Object Path to the mesh to sample from. Will be loaded. */" },
		{ "DisplayName", "Static Mesh" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Soft Object Path to the mesh to sample from. Will be loaded." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_StaticMeshPath = { "StaticMeshPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSamplerSettings, StaticMeshPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_StaticMeshPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_StaticMeshPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bUseRedAsDensity_MetaData[] = {
		{ "Category", "Settings|Per-Vertex Options" },
		{ "Comment", "/** In \"One Point Per Vertex\" option, will assign point density from the red component of the vertex color. */" },
		{ "EditCondition", "SamplingMethod == EPCGMeshSamplingMethod::OnePointPerVertex" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "In \"One Point Per Vertex\" option, will assign point density from the red component of the vertex color." },
	};
#endif
	void Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bUseRedAsDensity_SetBit(void* Obj)
	{
		((UPCGMeshSamplerSettings*)Obj)->bUseRedAsDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bUseRedAsDensity = { "bUseRedAsDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMeshSamplerSettings), &Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bUseRedAsDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bUseRedAsDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bUseRedAsDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bVoxelize_MetaData[] = {
		{ "Category", "Settings|Voxelize Options" },
		{ "Comment", "/** Enable voxelisation as a preparation pass. Can be more expensive given the VoxelSize. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Enable voxelisation as a preparation pass. Can be more expensive given the VoxelSize." },
	};
#endif
	void Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bVoxelize_SetBit(void* Obj)
	{
		((UPCGMeshSamplerSettings*)Obj)->bVoxelize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bVoxelize = { "bVoxelize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMeshSamplerSettings), &Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bVoxelize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bVoxelize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bVoxelize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Settings|Voxelize Options" },
		{ "Comment", "/** Size of a voxel for the voxelization. */" },
		{ "EditCondition", "bVoxelize" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Size of a voxel for the voxelization." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSamplerSettings, VoxelSize), METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bRemoveHiddenTriangles_MetaData[] = {
		{ "Category", "Settings|Voxelize Options" },
		{ "Comment", "/** Post-processing pass after voxelization to remove hidden triangles. */" },
		{ "EditCondition", "bVoxelize" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Post-processing pass after voxelization to remove hidden triangles." },
	};
#endif
	void Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bRemoveHiddenTriangles_SetBit(void* Obj)
	{
		((UPCGMeshSamplerSettings*)Obj)->bRemoveHiddenTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bRemoveHiddenTriangles = { "bRemoveHiddenTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMeshSamplerSettings), &Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bRemoveHiddenTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bRemoveHiddenTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bRemoveHiddenTriangles_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODType_MetaData[] = {
		{ "Category", "Settings|LODSettings" },
		{ "Comment", "/** LOD type to use when creating DynamicMesh from specified StaticMesh. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "LOD type to use when creating DynamicMesh from specified StaticMesh." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODType = { "RequestedLODType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSamplerSettings, RequestedLODType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLODType, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODType_MetaData)) }; // 68706456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODIndex = { "RequestedLODIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSamplerSettings, RequestedLODIndex), METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingOptions_MetaData[] = {
		{ "Category", "Settings|Poisson sampling" },
		{ "Comment", "// Poisson Sampling parameters\n" },
		{ "EditCondition", "SamplingMethod == EPCGMeshSamplingMethod::PoissonSampling" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Poisson Sampling parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingOptions = { "SamplingOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSamplerSettings, SamplingOptions), Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingOptions_MetaData)) }; // 4269836427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_NonUniformSamplingOptions_MetaData[] = {
		{ "Category", "Settings|Poisson sampling" },
		{ "EditCondition", "SamplingMethod == EPCGMeshSamplingMethod::PoissonSampling" },
		{ "ModuleRelativePath", "Public/Elements/PCGMeshSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_NonUniformSamplingOptions = { "NonUniformSamplingOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMeshSamplerSettings, NonUniformSamplingOptions), Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions, METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_NonUniformSamplingOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_NonUniformSamplingOptions_MetaData)) }; // 3113657192
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_StaticMeshPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bUseRedAsDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bVoxelize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_bRemoveHiddenTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_RequestedLODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_SamplingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::NewProp_NonUniformSamplingOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMeshSamplerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::ClassParams = {
		&UPCGMeshSamplerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMeshSamplerSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMeshSamplerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMeshSamplerSettings.OuterSingleton, Z_Construct_UClass_UPCGMeshSamplerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMeshSamplerSettings.OuterSingleton;
	}
	template<> PCGGEOMETRYSCRIPTINTEROP_API UClass* StaticClass<UPCGMeshSamplerSettings>()
	{
		return UPCGMeshSamplerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMeshSamplerSettings);
	UPCGMeshSamplerSettings::~UPCGMeshSamplerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_Statics::EnumInfo[] = {
		{ EPCGMeshSamplingMethod_StaticEnum, TEXT("EPCGMeshSamplingMethod"), &Z_Registration_Info_UEnum_EPCGMeshSamplingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1049294944U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMeshSamplerSettings, UPCGMeshSamplerSettings::StaticClass, TEXT("UPCGMeshSamplerSettings"), &Z_Registration_Info_UClass_UPCGMeshSamplerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMeshSamplerSettings), 1760240145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_534255802(TEXT("/Script/PCGGeometryScriptInterop"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGMeshSampler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
