// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothLODData.h"
#include "ClothCollisionData.h"
#include "ClothLODData_Legacy.h"
#include "ClothPhysicalMeshData.h"
#include "PointWeightMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothLODData() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothLODDataCommon;
class UScriptStruct* FClothLODDataCommon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothLODDataCommon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothLODDataCommon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothLODDataCommon, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothLODDataCommon"));
	}
	return Z_Registration_Info_UScriptStruct_ClothLODDataCommon.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothLODDataCommon>()
{
	return FClothLODDataCommon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothLODDataCommon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMeshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalMeshData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultipleInfluences_MetaData[];
#endif
		static void NewProp_bUseMultipleInfluences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultipleInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinningKernelRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkinningKernelRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothTransition_MetaData[];
#endif
		static void NewProp_bSmoothTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothTransition;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterMasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterMasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterMasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointWeightMaps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointWeightMaps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointWeightMaps;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Common Cloth LOD representation for all clothing assets. */" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Common Cloth LOD representation for all clothing assets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothLODDataCommon>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData_MetaData[] = {
		{ "Category", "SimMesh" },
		{ "Comment", "// Raw phys mesh data\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Raw phys mesh data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData = { "PhysicalMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothLODDataCommon, PhysicalMeshData), Z_Construct_UScriptStruct_FClothPhysicalMeshData, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData_MetaData)) }; // 423704680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData_MetaData[] = {
		{ "Category", "Collision" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is no longer supported. Use Physics Asset instead." },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothLODDataCommon, CollisionData), Z_Construct_UScriptStruct_FClothCollisionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData_MetaData)) }; // 986026815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences_MetaData[] = {
		{ "Comment", "// Whether to use multiple triangles to interpolate from simulated cloth mesh to render mesh\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Whether to use multiple triangles to interpolate from simulated cloth mesh to render mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences_SetBit(void* Obj)
	{
		((FClothLODDataCommon*)Obj)->bUseMultipleInfluences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences = { "bUseMultipleInfluences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FClothLODDataCommon), &Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_SkinningKernelRadius_MetaData[] = {
		{ "Comment", "// Radius of the weighting kernel used to interpolate from simulated cloth mesh to render mesh\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Radius of the weighting kernel used to interpolate from simulated cloth mesh to render mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_SkinningKernelRadius = { "SkinningKernelRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothLODDataCommon, SkinningKernelRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_SkinningKernelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_SkinningKernelRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition_MetaData[] = {
		{ "Comment", "// Whether to enable smooth transition from skinned mesh to clothed mesh.\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Whether to enable smooth transition from skinned mesh to clothed mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition_SetBit(void* Obj)
	{
		((FClothLODDataCommon*)Obj)->bSmoothTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition = { "bSmoothTransition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FClothLODDataCommon), &Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_Inner = { "ParameterMasks", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClothParameterMask_Legacy, METADATA_PARAMS(nullptr, 0) }; // 2609652381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks = { "ParameterMasks", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothLODDataCommon, ParameterMasks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_MetaData)) }; // 2609652381
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_Inner = { "PointWeightMaps", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPointWeightMap, METADATA_PARAMS(nullptr, 0) }; // 3433712234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_MetaData[] = {
		{ "Category", "Masks" },
		{ "Comment", "// Parameter masks defining the physics mesh masked data\n" },
		{ "ModuleRelativePath", "Public/ClothLODData.h" },
		{ "ToolTip", "Parameter masks defining the physics mesh masked data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps = { "PointWeightMaps", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothLODDataCommon, PointWeightMaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_MetaData)) }; // 3433712234
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PhysicalMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_CollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bUseMultipleInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_SkinningKernelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_bSmoothTransition,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_ParameterMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewProp_PointWeightMaps,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothLODDataCommon",
		sizeof(FClothLODDataCommon),
		alignof(FClothLODDataCommon),
		Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothLODDataCommon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothLODDataCommon.InnerSingleton, Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothLODDataCommon.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_Statics::ScriptStructInfo[] = {
		{ FClothLODDataCommon::StaticStruct, Z_Construct_UScriptStruct_FClothLODDataCommon_Statics::NewStructOps, TEXT("ClothLODDataCommon"), &Z_Registration_Info_UScriptStruct_ClothLODDataCommon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothLODDataCommon), 2797891056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_3685867944(TEXT("/Script/ClothingSystemRuntimeCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
