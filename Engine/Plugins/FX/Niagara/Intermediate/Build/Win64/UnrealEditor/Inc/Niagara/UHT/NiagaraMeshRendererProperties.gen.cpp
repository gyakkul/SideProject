// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraMeshRendererProperties.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraParameterBinding.h"
#include "../Public/NiagaraRendererProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMeshRendererProperties() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMICOverride();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMeshFacingMode;
	static UEnum* ENiagaraMeshFacingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshFacingMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshFacingMode>()
	{
		return ENiagaraMeshFacingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enumerators[] = {
		{ "ENiagaraMeshFacingMode::Default", (int64)ENiagaraMeshFacingMode::Default },
		{ "ENiagaraMeshFacingMode::Velocity", (int64)ENiagaraMeshFacingMode::Velocity },
		{ "ENiagaraMeshFacingMode::CameraPosition", (int64)ENiagaraMeshFacingMode::CameraPosition },
		{ "ENiagaraMeshFacingMode::CameraPlane", (int64)ENiagaraMeshFacingMode::CameraPlane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enum_MetaDataParams[] = {
		{ "CameraPlane.Comment", "/** Has the mesh local-space X-axis point towards the closest point on the camera view plane.*/" },
		{ "CameraPlane.Name", "ENiagaraMeshFacingMode::CameraPlane" },
		{ "CameraPlane.ToolTip", "Has the mesh local-space X-axis point towards the closest point on the camera view plane." },
		{ "CameraPosition.Comment", "/** Has the mesh local-space X-axis point towards the camera's position.*/" },
		{ "CameraPosition.Name", "ENiagaraMeshFacingMode::CameraPosition" },
		{ "CameraPosition.ToolTip", "Has the mesh local-space X-axis point towards the camera's position." },
		{ "Comment", "/** This enum decides how a mesh particle will orient its \"facing\" axis relative to camera. Must keep these in sync with NiagaraMeshVertexFactory.ush*/" },
		{ "Default.Comment", "/** Ignores the camera altogether. The mesh aligns its local-space X-axis with the particles' local-space X-axis, after transforming by the Particles.Transform vector (if it exists).*/" },
		{ "Default.Name", "ENiagaraMeshFacingMode::Default" },
		{ "Default.ToolTip", "Ignores the camera altogether. The mesh aligns its local-space X-axis with the particles' local-space X-axis, after transforming by the Particles.Transform vector (if it exists)." },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "This enum decides how a mesh particle will orient its \"facing\" axis relative to camera. Must keep these in sync with NiagaraMeshVertexFactory.ush" },
		{ "Velocity.Comment", "/** The mesh aligns it's local-space X-axis with the particle's Particles.Velocity vector.*/" },
		{ "Velocity.Name", "ENiagaraMeshFacingMode::Velocity" },
		{ "Velocity.ToolTip", "The mesh aligns it's local-space X-axis with the particle's Particles.Velocity vector." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraMeshFacingMode",
		"ENiagaraMeshFacingMode",
		Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace;
	static UEnum* ENiagaraMeshPivotOffsetSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshPivotOffsetSpace"));
		}
		return Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshPivotOffsetSpace>()
	{
		return ENiagaraMeshPivotOffsetSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enumerators[] = {
		{ "ENiagaraMeshPivotOffsetSpace::Mesh", (int64)ENiagaraMeshPivotOffsetSpace::Mesh },
		{ "ENiagaraMeshPivotOffsetSpace::Simulation", (int64)ENiagaraMeshPivotOffsetSpace::Simulation },
		{ "ENiagaraMeshPivotOffsetSpace::World", (int64)ENiagaraMeshPivotOffsetSpace::World },
		{ "ENiagaraMeshPivotOffsetSpace::Local", (int64)ENiagaraMeshPivotOffsetSpace::Local },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enum_MetaDataParams[] = {
		{ "Local.Comment", "/** The pivot offset is in the emitter's local space */" },
		{ "Local.Name", "ENiagaraMeshPivotOffsetSpace::Local" },
		{ "Local.ToolTip", "The pivot offset is in the emitter's local space" },
		{ "Mesh.Comment", "/** The pivot offset is in the mesh's local space (default) */" },
		{ "Mesh.Name", "ENiagaraMeshPivotOffsetSpace::Mesh" },
		{ "Mesh.ToolTip", "The pivot offset is in the mesh's local space (default)" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "Simulation.Comment", "/** The pivot offset is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise */" },
		{ "Simulation.Name", "ENiagaraMeshPivotOffsetSpace::Simulation" },
		{ "Simulation.ToolTip", "The pivot offset is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise" },
		{ "World.Comment", "/** The pivot offset is in world space */" },
		{ "World.Name", "ENiagaraMeshPivotOffsetSpace::World" },
		{ "World.ToolTip", "The pivot offset is in world space" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraMeshPivotOffsetSpace",
		"ENiagaraMeshPivotOffsetSpace",
		Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace;
	static UEnum* ENiagaraMeshLockedAxisSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshLockedAxisSpace"));
		}
		return Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshLockedAxisSpace>()
	{
		return ENiagaraMeshLockedAxisSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enumerators[] = {
		{ "ENiagaraMeshLockedAxisSpace::Simulation", (int64)ENiagaraMeshLockedAxisSpace::Simulation },
		{ "ENiagaraMeshLockedAxisSpace::World", (int64)ENiagaraMeshLockedAxisSpace::World },
		{ "ENiagaraMeshLockedAxisSpace::Local", (int64)ENiagaraMeshLockedAxisSpace::Local },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enum_MetaDataParams[] = {
		{ "Local.Comment", "/** The locked axis is in the emitter's local space */" },
		{ "Local.Name", "ENiagaraMeshLockedAxisSpace::Local" },
		{ "Local.ToolTip", "The locked axis is in the emitter's local space" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "Simulation.Comment", "/** The locked axis is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise */" },
		{ "Simulation.Name", "ENiagaraMeshLockedAxisSpace::Simulation" },
		{ "Simulation.ToolTip", "The locked axis is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise" },
		{ "World.Comment", "/** The locked axis is in world space */" },
		{ "World.Name", "ENiagaraMeshLockedAxisSpace::World" },
		{ "World.ToolTip", "The locked axis is in world space" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraMeshLockedAxisSpace",
		"ENiagaraMeshLockedAxisSpace",
		Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride;
class UScriptStruct* FNiagaraMeshMICOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshMICOverride"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshMICOverride>()
{
	return FNiagaraMeshMICOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplacementMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshMICOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshMICOverride, OriginalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_OriginalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_OriginalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_ReplacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_ReplacementMaterial = { "ReplacementMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshMICOverride, ReplacementMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_ReplacementMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_ReplacementMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_OriginalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_ReplacementMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMeshMICOverride",
		sizeof(FNiagaraMeshMICOverride),
		alignof(FNiagaraMeshMICOverride),
		Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMICOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride;
class UScriptStruct* FNiagaraMeshMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshMaterialOverride>()
{
	return FNiagaraMeshMaterialOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExplicitMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserParamBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserParamBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshMaterialOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat = { "ExplicitMat", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshMaterialOverride, ExplicitMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding = { "UserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshMaterialOverride, UserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData)) }; // 1724214256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMeshMaterialOverride",
		sizeof(FNiagaraMeshMaterialOverride),
		alignof(FNiagaraMeshMaterialOverride),
		Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties;
class UScriptStruct* FNiagaraMeshRendererMeshProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshRendererMeshProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshRendererMeshProperties>()
{
	return FNiagaraMeshRendererMeshProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserParamBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserParamBinding;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshParameterBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshParameterBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotOffsetSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffsetSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotOffsetSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshRendererMeshProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The mesh to use when rendering this slot */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The mesh to use when rendering this slot" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_UserParamBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_UserParamBinding = { "UserParamBinding", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, UserParamBinding_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_UserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_UserParamBinding_MetaData)) }; // 1724214256
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_MeshParameterBinding_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Binding to supported mesh types. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Binding to supported mesh types." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_MeshParameterBinding = { "MeshParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, MeshParameterBinding), Z_Construct_UScriptStruct_FNiagaraParameterBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_MeshParameterBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_MeshParameterBinding_MetaData)) }; // 3357512247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Scale of the mesh */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Scale of the mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Rotation of the mesh */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Rotation of the mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Offset of the mesh pivot */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Offset of the mesh pivot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** What space is the pivot offset in? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "What space is the pivot offset in?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace = { "PivotOffsetSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, PivotOffsetSpace), Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_MetaData)) }; // 4211381530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_UserParamBinding,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_MeshParameterBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMeshRendererMeshProperties",
		sizeof(FNiagaraMeshRendererMeshProperties),
		alignof(FNiagaraMeshRendererMeshProperties),
		Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.InnerSingleton;
	}
	void UNiagaraMeshRendererProperties::StaticRegisterNativesUNiagaraMeshRendererProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraMeshRendererProperties);
	UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister()
	{
		return UNiagaraMeshRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterials_MetaData[];
#endif
		static void NewProp_bOverrideMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeterogeneousVolumes_MetaData[];
#endif
		static void NewProp_bUseHeterogeneousVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeterogeneousVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSortOnlyWhenTranslucent_MetaData[];
#endif
		static void NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortOnlyWhenTranslucent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortPrecision_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortPrecision;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GpuTranslucentLatency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuTranslucentLatency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuTranslucentLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubImageBlend_MetaData[];
#endif
		static void NewProp_bSubImageBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubImageBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFrustumCulling_MetaData[];
#endif
		static void NewProp_bEnableFrustumCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFrustumCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraDistanceCulling_MetaData[];
#endif
		static void NewProp_bEnableCameraDistanceCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraDistanceCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMeshFlipbook_MetaData[];
#endif
		static void NewProp_bEnableMeshFlipbook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMeshFlipbook;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MICOverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MICOverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MICOverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FacingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FacingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FacingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockedAxisEnable_MetaData[];
#endif
		static void NewProp_bLockedAxisEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockedAxisEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockedAxisSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxisSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LockedAxisSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBoundsScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshBoundsScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RendererVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshOrientationBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshOrientationBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImageIndexBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageIndexBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterialBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial1Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial1Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial2Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial2Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial3Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial3Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRandomBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialRandomBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSortingBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSortingBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedAgeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedAgeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffsetBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndexBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshIndexBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameterBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialParameterBindings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevPositionBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevPositionBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevScaleBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevScaleBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevMeshOrientationBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevMeshOrientationBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevCameraOffsetBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevCameraOffsetBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevVelocityBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevVelocityBinding;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstFlipbookFrame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FirstFlipbookFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookSuffixFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FlipbookSuffixFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookSuffixNumDigits_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FlipbookSuffixNumDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFlipbookFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumFlipbookFrames;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotOffsetSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffsetSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotOffsetSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Renderer" },
		{ "IncludePath", "NiagaraMeshRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties, METADATA_PARAMS(nullptr, 0) }; // 1087831559
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09 * The static mesh(es) to be instanced when rendering mesh particles.\n\x09 *\n\x09 * NOTES:\n\x09 * - If \"Override Material\" is not specified, the mesh's material is used. Override materials must have the Niagara Mesh Particles flag checked.\n\x09 * - If \"Enable Mesh Flipbook\" is specified, this mesh is assumed to be the first frame of the flipbook.\n\x09 */" },
		{ "EditCondition", "!bEnableMeshFlipbook" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The static mesh(es) to be instanced when rendering mesh particles.\n\nNOTES:\n- If \"Override Material\" is not specified, the mesh's material is used. Override materials must have the Niagara Mesh Particles flag checked.\n- If \"Enable Mesh Flipbook\" is specified, this mesh is assumed to be the first frame of the flipbook." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_MetaData)) }; // 1087831559
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_MetaData)) }; // 919437016
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Determines how we sort the particles prior to rendering.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Determines how we sort the particles prior to rendering." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SortMode), Z_Construct_UEnum_Niagara_ENiagaraSortMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData)) }; // 527975467
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Whether or not to use the OverrideMaterials array instead of the mesh's existing materials.*/" },
		{ "DisplayName", "Enable Material Overrides" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to use the OverrideMaterials array instead of the mesh's existing materials." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bOverrideMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials = { "bOverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Whether or not to render with heterogeneous volumes.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to render with heterogeneous volumes." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bUseHeterogeneousVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes = { "bUseHeterogeneousVolumes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** If true, the particles are only sorted when using a translucent material. */" },
		{ "EditCondition", "SortMode != ENiagaraSortMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true, the particles are only sorted when using a translucent material." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bSortOnlyWhenTranslucent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent = { "bSortOnlyWhenTranslucent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Sort precision to use when sorting is active. */" },
		{ "EditCondition", "SortMode != ENiagaraSortMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Sort precision to use when sorting is active." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision = { "SortPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SortPrecision), Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision_MetaData)) }; // 2353398334
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09Gpu simulations run at different points in the frame depending on what features are used, i.e. depth buffer, distance fields, etc.\n\x09Opaque materials will run latent when these features are used.\n\x09Translucent materials can choose if they want to use this frames or the previous frames data to match opaque draws.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Gpu simulations run at different points in the frame depending on what features are used, i.e. depth buffer, distance fields, etc.\nOpaque materials will run latent when these features are used.\nTranslucent materials can choose if they want to use this frames or the previous frames data to match opaque draws." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency = { "GpuTranslucentLatency", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, GpuTranslucentLatency), Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency_MetaData)) }; // 1258925171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor.*/" },
		{ "DisplayName", "Sub UV Blending Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bSubImageBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend = { "bSubImageBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** Enables frustum culling of individual mesh particles */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Enables frustum culling of individual mesh particles" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bEnableFrustumCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling = { "bEnableFrustumCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** Enables frustum culling of individual mesh particles */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Enables frustum culling of individual mesh particles" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bEnableCameraDistanceCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling = { "bEnableCameraDistanceCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** When checked, will treat 'ParticleMesh' as the first frame of the flipbook, and will use the other mesh flipbook options to find the other frames */" },
		{ "DisplayAfter", "MeshBoundsScale" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When checked, will treat 'ParticleMesh' as the first frame of the flipbook, and will use the other mesh flipbook options to find the other frames" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bEnableMeshFlipbook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook = { "bEnableMeshFlipbook", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride, METADATA_PARAMS(nullptr, 0) }; // 4208720445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** The materials to be used instead of the StaticMesh's materials. Note that each material must have the Niagara Mesh Particles flag checked. If the ParticleMesh\n\x09requires more materials than exist in this array or any entry in this array is set to None, we will use the ParticleMesh's existing Material instead.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The materials to be used instead of the StaticMesh's materials. Note that each material must have the Niagara Mesh Particles flag checked. If the ParticleMesh\n      requires more materials than exist in this array or any entry in this array is set to None, we will use the ParticleMesh's existing Material instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData)) }; // 4208720445
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials_Inner = { "MICOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraMeshMICOverride, METADATA_PARAMS(nullptr, 0) }; // 2527913646
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials = { "MICOverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MICOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials_MetaData)) }; // 2527913646
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SubImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Determines how the mesh orients itself relative to the camera. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Determines how the mesh orients itself relative to the camera." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode = { "FacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FacingMode), Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData)) }; // 1426470491
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** If true and in a non-default facing mode, will lock facing direction to an arbitrary plane of rotation */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true and in a non-default facing mode, will lock facing direction to an arbitrary plane of rotation" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bLockedAxisEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable = { "bLockedAxisEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Arbitrary axis by which to lock facing rotations */" },
		{ "EditCondition", "bLockedAxisEnable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Arbitrary axis by which to lock facing rotations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis = { "LockedAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, LockedAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Specifies what space the locked axis is in */" },
		{ "EditCondition", "bLockedAxisEnable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Specifies what space the locked axis is in" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace = { "LockedAxisSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, LockedAxisSpace), Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData)) }; // 2700563238
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshBoundsScale_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09Scale factor applied to all of the meshes bounds.\n\x09This impacts distance based and per instance frustum culling.  Per instance frustum culling is enabled by default\n\x09when GPU scene is enabled.  When using WPO with a material that may expand the mesh beyond the original bounds instances\n\x09""can be frustum culled incorrectly, this allows you to grow the bounds to avoid this issue.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Scale factor applied to all of the meshes bounds.\nThis impacts distance based and per instance frustum culling.  Per instance frustum culling is enabled by default\nwhen GPU scene is enabled.  When using WPO with a material that may expand the mesh beyond the original bounds instances\ncan be frustum culled incorrectly, this allows you to grow the bounds to avoid this issue." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshBoundsScale = { "MeshBoundsScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshBoundsScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshBoundsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshBoundsScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bEnableCameraDistanceCulling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance = { "MinCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MinCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bEnableCameraDistanceCulling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance = { "MaxCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaxCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, RendererVisibility), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for color when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for color when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for velocity when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for velocity when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding = { "VelocityBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, VelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for orienting meshes when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for orienting meshes when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding = { "MeshOrientationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for scale when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for scale when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding = { "ScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite sub-image indexing when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite sub-image indexing when generating sprites?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding = { "SubImageIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SubImageIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding = { "DynamicMaterialBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterialBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding = { "DynamicMaterial1Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial1Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding = { "DynamicMaterial2Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial2Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding = { "DynamicMaterial3Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial3Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for material randoms when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for material randoms when generating instanced meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding = { "MaterialRandomBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialRandomBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use custom sorting of particles in this emitter. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use custom sorting of particles in this emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding = { "CustomSortingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, CustomSortingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for Normalized Age? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for Normalized Age?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding = { "NormalizedAgeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, NormalizedAgeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for camera offset when rendering meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for camera offset when rendering meshes?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding = { "CameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, CameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the renderer visibility tag? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the renderer visibility tag?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use to pick the element in the mesh array on the mesh renderer? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to pick the element in the mesh array on the mesh renderer?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding = { "MeshIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialParameters), Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameters_MetaData)) }; // 2971467554
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding, METADATA_PARAMS(nullptr, 0) }; // 3175080182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialParameterBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData)) }; // 3175080182
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData[] = {
		{ "Comment", "// The following bindings are not provided by the user, but are filled based on what other bindings are set to, and the value of bGenerateAccurateMotionVectors\n" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The following bindings are not provided by the user, but are filled based on what other bindings are set to, and the value of bGenerateAccurateMotionVectors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding = { "PrevPositionBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevPositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding = { "PrevScaleBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding = { "PrevMeshOrientationBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevMeshOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding = { "PrevCameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevCameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding = { "PrevVelocityBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevVelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData)) }; // 2514448469
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09 * The static mesh to use for the first frame of the flipbook. Its name will also be used to find subsequent frames of a similar name.\n\x09 * NOTE: The subsequent frames are expected to exist in the same content directory as the first frame of the flipbook, otherwise they\n\x09 * will not be found or used.\n\x09 */" },
		{ "DisplayAfter", "bEnableMeshFlipbook" },
		{ "EditCondition", "bEnableMeshFlipbook" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The static mesh to use for the first frame of the flipbook. Its name will also be used to find subsequent frames of a similar name.\nNOTE: The subsequent frames are expected to exist in the same content directory as the first frame of the flipbook, otherwise they\nwill not be found or used." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame = { "FirstFlipbookFrame", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FirstFlipbookFrame), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09 * Provides the format of the suffix of the names of the static meshes when searching for flipbook frames. \"{frame_number}\" is used to mark\n\x09 * where the frame number should appear in the suffix. If \"Particle Mesh\" contains this suffix, the number in its name will be treated as\n\x09 * the starting frame index. Otherwise, it will assume \"Particle Mesh\" is frame number 0, and that subsequent frames follow this format,\n\x09 * starting with frame number 1.\n\x09 */" },
		{ "DisplayAfter", "bEnableMeshFlipbook" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Provides the format of the suffix of the names of the static meshes when searching for flipbook frames. \"{frame_number}\" is used to mark\nwhere the frame number should appear in the suffix. If \"Particle Mesh\" contains this suffix, the number in its name will be treated as\nthe starting frame index. Otherwise, it will assume \"Particle Mesh\" is frame number 0, and that subsequent frames follow this format,\nstarting with frame number 1." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat = { "FlipbookSuffixFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FlipbookSuffixFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* The number of digits to expect in the frame number of the flipbook page. A value of 1 will expect no leading zeros in the package names,\n\x09* and can also be used for names with frame numbers that extend to 10 and beyond (Example: Frame_1, Frame_2, ..., Frame_10, Frame_11, etc.)\n\x09*/" },
		{ "DisplayAfter", "bEnableMeshFlipbook" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "The number of digits to expect in the frame number of the flipbook page. A value of 1 will expect no leading zeros in the package names,\nand can also be used for names with frame numbers that extend to 10 and beyond (Example: Frame_1, Frame_2, ..., Frame_10, Frame_11, etc.)" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits = { "FlipbookSuffixNumDigits", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FlipbookSuffixNumDigits), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of frames (static meshes) to be included in the flipbook. */" },
		{ "DisplayAfter", "bEnableMeshFlipbook" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "The number of frames (static meshes) to be included in the flipbook." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames = { "NumFlipbookFrames", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, NumFlipbookFrames), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData[] = {
		{ "Comment", "// These properties are deprecated and moved to FNiagaraMeshRendererMeshProperties\n" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "These properties are deprecated and moved to FNiagaraMeshRendererMeshProperties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh = { "ParticleMesh", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ParticleMesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PivotOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace = { "PivotOffsetSpace", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PivotOffsetSpace_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_MetaData)) }; // 4211381530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshBoundsScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMeshRendererProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams = {
		&UNiagaraMeshRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraMeshRendererProperties>()
	{
		return UNiagaraMeshRendererProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMeshRendererProperties);
	UNiagaraMeshRendererProperties::~UNiagaraMeshRendererProperties() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraMeshRendererProperties)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::EnumInfo[] = {
		{ ENiagaraMeshFacingMode_StaticEnum, TEXT("ENiagaraMeshFacingMode"), &Z_Registration_Info_UEnum_ENiagaraMeshFacingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1426470491U) },
		{ ENiagaraMeshPivotOffsetSpace_StaticEnum, TEXT("ENiagaraMeshPivotOffsetSpace"), &Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4211381530U) },
		{ ENiagaraMeshLockedAxisSpace_StaticEnum, TEXT("ENiagaraMeshLockedAxisSpace"), &Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2700563238U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraMeshMICOverride::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewStructOps, TEXT("NiagaraMeshMICOverride"), &Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMeshMICOverride), 2527913646U) },
		{ FNiagaraMeshMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewStructOps, TEXT("NiagaraMeshMaterialOverride"), &Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMeshMaterialOverride), 4208720445U) },
		{ FNiagaraMeshRendererMeshProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewStructOps, TEXT("NiagaraMeshRendererMeshProperties"), &Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMeshRendererMeshProperties), 1087831559U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraMeshRendererProperties, UNiagaraMeshRendererProperties::StaticClass, TEXT("UNiagaraMeshRendererProperties"), &Z_Registration_Info_UClass_UNiagaraMeshRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraMeshRendererProperties), 2899875021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_2502434704(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
