// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/StaticMeshSourceData.h"
#include "../../Source/Runtime/Engine/Public/MeshUVChannelInfo.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "../../Source/Runtime/Engine/Public/PerQualityLevelProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EImportanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENormalMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOptimizationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPerQualityLevels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel();
	STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENormalMode;
	static UEnum* ENormalMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENormalMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENormalMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENormalMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENormalMode"));
		}
		return Z_Registration_Info_UEnum_ENormalMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENormalMode>()
	{
		return ENormalMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENormalMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENormalMode_Statics::Enumerators[] = {
		{ "NM_PreserveSmoothingGroups", (int64)NM_PreserveSmoothingGroups },
		{ "NM_RecalculateNormals", (int64)NM_RecalculateNormals },
		{ "NM_RecalculateNormalsSmooth", (int64)NM_RecalculateNormalsSmooth },
		{ "NM_RecalculateNormalsHard", (int64)NM_RecalculateNormalsHard },
		{ "TEMP_BROKEN", (int64)TEMP_BROKEN },
		{ "ENormalMode_MAX", (int64)ENormalMode_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENormalMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Optimization settings used to simplify mesh LODs. */" },
		{ "ENormalMode_MAX.Name", "ENormalMode_MAX" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "NM_PreserveSmoothingGroups.Name", "NM_PreserveSmoothingGroups" },
		{ "NM_RecalculateNormals.Name", "NM_RecalculateNormals" },
		{ "NM_RecalculateNormalsHard.Name", "NM_RecalculateNormalsHard" },
		{ "NM_RecalculateNormalsSmooth.Name", "NM_RecalculateNormalsSmooth" },
		{ "TEMP_BROKEN.Name", "TEMP_BROKEN" },
		{ "ToolTip", "Optimization settings used to simplify mesh LODs." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENormalMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENormalMode",
		"ENormalMode",
		Z_Construct_UEnum_Engine_ENormalMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENormalMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENormalMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENormalMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENormalMode()
	{
		if (!Z_Registration_Info_UEnum_ENormalMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENormalMode.InnerSingleton, Z_Construct_UEnum_Engine_ENormalMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENormalMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImportanceLevel;
	static UEnum* EImportanceLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceLevel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EImportanceLevel"));
		}
		return Z_Registration_Info_UEnum_EImportanceLevel.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EImportanceLevel>()
	{
		return EImportanceLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EImportanceLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EImportanceLevel_Statics::Enumerators[] = {
		{ "IL_Off", (int64)IL_Off },
		{ "IL_Lowest", (int64)IL_Lowest },
		{ "IL_Low", (int64)IL_Low },
		{ "IL_Normal", (int64)IL_Normal },
		{ "IL_High", (int64)IL_High },
		{ "IL_Highest", (int64)IL_Highest },
		{ "TEMP_BROKEN2", (int64)TEMP_BROKEN2 },
		{ "EImportanceLevel_MAX", (int64)EImportanceLevel_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EImportanceLevel_Statics::Enum_MetaDataParams[] = {
		{ "EImportanceLevel_MAX.Name", "EImportanceLevel_MAX" },
		{ "IL_High.Name", "IL_High" },
		{ "IL_Highest.Name", "IL_Highest" },
		{ "IL_Low.Name", "IL_Low" },
		{ "IL_Lowest.Name", "IL_Lowest" },
		{ "IL_Normal.Name", "IL_Normal" },
		{ "IL_Off.Name", "IL_Off" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "TEMP_BROKEN2.Name", "TEMP_BROKEN2" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EImportanceLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EImportanceLevel",
		"EImportanceLevel",
		Z_Construct_UEnum_Engine_EImportanceLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EImportanceLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EImportanceLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EImportanceLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EImportanceLevel()
	{
		if (!Z_Registration_Info_UEnum_EImportanceLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImportanceLevel.InnerSingleton, Z_Construct_UEnum_Engine_EImportanceLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImportanceLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimizationType;
	static UEnum* EOptimizationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOptimizationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EOptimizationType"));
		}
		return Z_Registration_Info_UEnum_EOptimizationType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EOptimizationType>()
	{
		return EOptimizationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EOptimizationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EOptimizationType_Statics::Enumerators[] = {
		{ "OT_NumOfTriangles", (int64)OT_NumOfTriangles },
		{ "OT_MaxDeviation", (int64)OT_MaxDeviation },
		{ "OT_MAX", (int64)OT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EOptimizationType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum specifying the reduction type to use when simplifying static meshes. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "OT_MAX.Name", "OT_MAX" },
		{ "OT_MaxDeviation.Name", "OT_MaxDeviation" },
		{ "OT_NumOfTriangles.Name", "OT_NumOfTriangles" },
		{ "ToolTip", "Enum specifying the reduction type to use when simplifying static meshes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EOptimizationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EOptimizationType",
		"EOptimizationType",
		Z_Construct_UEnum_Engine_EOptimizationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOptimizationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EOptimizationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOptimizationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EOptimizationType()
	{
		if (!Z_Registration_Info_UEnum_EOptimizationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimizationType.InnerSingleton, Z_Construct_UEnum_Engine_EOptimizationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimizationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshOptimizationSettings;
class UScriptStruct* FStaticMeshOptimizationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshOptimizationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshOptimizationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshOptimizationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshOptimizationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshOptimizationSettings>()
{
	return FStaticMeshOptimizationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReductionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOfTrianglesPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NumOfTrianglesPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[];
#endif
		static void NewProp_bRecalcNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalsThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalsThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureImportance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingImportance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Old optimization settings. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Old optimization settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshOptimizationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData[] = {
		{ "Comment", "/** The method to use when optimizing the skeletal mesh LOD */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod = { "ReductionMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, ReductionMethod), Z_Construct_UEnum_Engine_EOptimizationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData)) }; // 1308044809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData[] = {
		{ "Comment", "/** If ReductionMethod equals SMOT_NumOfTriangles this value is the ratio of triangles [0-1] to remove from the mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If ReductionMethod equals SMOT_NumOfTriangles this value is the ratio of triangles [0-1] to remove from the mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage = { "NumOfTrianglesPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, NumOfTrianglesPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData[] = {
		{ "Comment", "/**If ReductionMethod equals SMOT_MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If ReductionMethod equals SMOT_MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage = { "MaxDeviationPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, MaxDeviationPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "Comment", "/** The welding threshold distance. Vertices under this distance will be welded. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The welding threshold distance. Vertices under this distance will be welded." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, WeldingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData[] = {
		{ "Comment", "/** Whether Normal smoothing groups should be preserved. If false then NormalsThreshold is used **/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether Normal smoothing groups should be preserved. If false then NormalsThreshold is used *" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit(void* Obj)
	{
		((FStaticMeshOptimizationSettings*)Obj)->bRecalcNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals = { "bRecalcNormals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticMeshOptimizationSettings), &Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData[] = {
		{ "Comment", "/** If the angle between two triangles are above this value, the normals will not be\n\x09smooth over the edge between those two triangles. Set in degrees. This is only used when PreserveNormals is set to false*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If the angle between two triangles are above this value, the normals will not be\n      smooth over the edge between those two triangles. Set in degrees. This is only used when PreserveNormals is set to false" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold = { "NormalsThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, NormalsThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData[] = {
		{ "Comment", "/** How important the shape of the geometry is (EImportanceLevel). */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important the shape of the geometry is (EImportanceLevel)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance = { "SilhouetteImportance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, SilhouetteImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData[] = {
		{ "Comment", "/** How important texture density is (EImportanceLevel). */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important texture density is (EImportanceLevel)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, TextureImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData[] = {
		{ "Comment", "/** How important shading quality is. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important shading quality is." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, ShadingImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshOptimizationSettings",
		sizeof(FStaticMeshOptimizationSettings),
		alignof(FStaticMeshOptimizationSettings),
		Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMeshOptimizationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshOptimizationSettings.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMeshOptimizationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshSectionInfo;
class UScriptStruct* FMeshSectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshSectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshSectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshSectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MeshSectionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshSectionInfo>()
{
	return FMeshSectionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshSectionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[];
#endif
		static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[];
#endif
		static void NewProp_bForceOpaque_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Per-section settings.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Per-section settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Comment", "/** Index in to the Materials array on UStaticMesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Index in to the Materials array on UStaticMesh." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshSectionInfo, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Comment", "/** If true, collision is enabled for this section. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, collision is enabled for this section." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Comment", "/** If true, this section will cast shadows. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, this section will cast shadows." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "Comment", "/** If true, this section will be visible in ray tracing Geometry. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, this section will be visible in ray tracing Geometry." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bVisibleInRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Comment", "/** If true, this section will affect lighting methods that use Distance Fields. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, this section will affect lighting methods that use Distance Fields." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_MetaData[] = {
		{ "Comment", "/** If true, this section will always considered opaque in ray tracing Geometry. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, this section will always considered opaque in ray tracing Geometry." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bForceOpaque = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshSectionInfo",
		sizeof(FMeshSectionInfo),
		alignof(FMeshSectionInfo),
		Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshSectionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshSectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshSectionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshSectionInfoMap;
class UScriptStruct* FMeshSectionInfoMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshSectionInfoMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshSectionInfoMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionInfoMap, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshSectionInfoMap"));
	}
	return Z_Registration_Info_UScriptStruct_MeshSectionInfoMap.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshSectionInfoMap>()
{
	return FMeshSectionInfoMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Map containing per-section settings for each section of each LOD.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Map containing per-section settings for each section of each LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionInfoMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMeshSectionInfo, METADATA_PARAMS(nullptr, 0) }; // 760145665
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData[] = {
		{ "Comment", "/** Maps an LOD+Section to the material it should render with. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Maps an LOD+Section to the material it should render with." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshSectionInfoMap, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData)) }; // 760145665
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshSectionInfoMap",
		sizeof(FMeshSectionInfoMap),
		alignof(FMeshSectionInfoMap),
		Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshSectionInfoMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshSectionInfoMap.InnerSingleton, Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshSectionInfoMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetEditorOrbitCameraPosition;
class UScriptStruct* FAssetEditorOrbitCameraPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetEditorOrbitCameraPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetEditorOrbitCameraPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetEditorOrbitCameraPosition"));
	}
	return Z_Registration_Info_UScriptStruct_AssetEditorOrbitCameraPosition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetEditorOrbitCameraPosition>()
{
	return FAssetEditorOrbitCameraPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[];
#endif
		static void NewProp_bIsSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamOrbitPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CamOrbitPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamOrbitZoom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CamOrbitZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamOrbitRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CamOrbitRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorOrbitCameraPosition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData[] = {
		{ "Comment", "/** Whether or not this has been set to a valid value */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether or not this has been set to a valid value" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit(void* Obj)
	{
		((FAssetEditorOrbitCameraPosition*)Obj)->bIsSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet = { "bIsSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAssetEditorOrbitCameraPosition), &Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData[] = {
		{ "Comment", "/** The position to orbit the camera around */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The position to orbit the camera around" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint = { "CamOrbitPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData[] = {
		{ "Comment", "/** The distance of the camera from the orbit point */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The distance of the camera from the orbit point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom = { "CamOrbitZoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitZoom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData[] = {
		{ "Comment", "/** The rotation to apply around the orbit point */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The rotation to apply around the orbit point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation = { "CamOrbitRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetEditorOrbitCameraPosition",
		sizeof(FAssetEditorOrbitCameraPosition),
		alignof(FAssetEditorOrbitCameraPosition),
		Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetEditorOrbitCameraPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetEditorOrbitCameraPosition.InnerSingleton, Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetEditorOrbitCameraPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMaterial;
class UScriptStruct* FStaticMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMaterial, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMaterial.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMaterial>()
{
	return FStaticMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMaterialSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ImportedMaterialSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVChannelData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//~ Begin Material Interface for UStaticMesh - contains a material and other stuff\n" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMaterial, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/*This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMaterial, MaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/*This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName = { "ImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMaterial, ImportedMaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Data used for texture streaming relative to each UV channels. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Data used for texture streaming relative to each UV channels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData = { "UVChannelData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMaterial, UVChannelData), Z_Construct_UScriptStruct_FMeshUVChannelInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData)) }; // 2971228334
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMaterial",
		sizeof(FStaticMaterial),
		alignof(FStaticMaterial),
		Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMaterial.InnerSingleton, Z_Construct_UScriptStruct_FStaticMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialRemapIndex;
class UScriptStruct* FMaterialRemapIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialRemapIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialRemapIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialRemapIndex, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialRemapIndex"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialRemapIndex.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialRemapIndex>()
{
	return FMaterialRemapIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportVersionKey_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ImportVersionKey;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialRemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialRemapIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey = { "ImportVersionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialRemapIndex, ImportVersionKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_Inner = { "MaterialRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap = { "MaterialRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialRemapIndex, MaterialRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialRemapIndex",
		sizeof(FMaterialRemapIndex),
		alignof(FMaterialRemapIndex),
		Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialRemapIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialRemapIndex.InnerSingleton, Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialRemapIndex.InnerSingleton;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetSocketsByTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSocketTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStaticMeshSocket*>*)Z_Param__Result=P_THIS->GetSocketsByTag(Z_Param_InSocketTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execRemoveSocket)
	{
		P_GET_OBJECT(UStaticMeshSocket,Z_Param_Socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSocket(Z_Param_Socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execFindSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execAddSocket)
	{
		P_GET_OBJECT(UStaticMeshSocket,Z_Param_Socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSocket(Z_Param_Socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMaterialIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execAddMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->AddMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_MaterialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetNumSections)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(Z_Param_InLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetBoundingBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetBoundingBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetNumLODs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumLODs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetNumTriangles)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumTriangles(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetStaticMeshDescription)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshDescription**)Z_Param__Result=P_THIS->GetStaticMeshDescription(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execBuildFromStaticMeshDescriptions)
	{
		P_GET_TARRAY_REF(UStaticMeshDescription*,Z_Param_Out_StaticMeshDescriptions);
		P_GET_UBOOL(Z_Param_bBuildSimpleCollision);
		P_GET_UBOOL(Z_Param_bFastBuild);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildFromStaticMeshDescriptions(Z_Param_Out_StaticMeshDescriptions,Z_Param_bBuildSimpleCollision,Z_Param_bFastBuild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execCreateStaticMeshDescription)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshDescription**)Z_Param__Result=UStaticMesh::CreateStaticMeshDescription(Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execSetStaticMaterials)
	{
		P_GET_TARRAY_REF(FStaticMaterial,Z_Param_Out_InStaticMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaticMaterials(Z_Param_Out_InStaticMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetStaticMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FStaticMaterial>*)Z_Param__Result=P_THIS->GetStaticMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execSetMinimumLODForPlatform)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PlatformName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumLODForPlatform(Z_Param_Out_PlatformName,Z_Param_InMinLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execSetMinimumLODForPlatforms)
	{
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_PlatformMinimumLODs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumLODForPlatforms(Z_Param_Out_PlatformMinimumLODs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMinimumLODForPlatform)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PlatformName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinimumLODForPlatform(Z_Param_Out_PlatformName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMinimumLODForPlatforms)
	{
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_PlatformMinimumLODs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMinimumLODForPlatforms(Z_Param_Out_PlatformMinimumLODs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMinLODForQualityLevels)
	{
		P_GET_TMAP_REF(EPerQualityLevels,int32,Z_Param_Out_QualityLevelMinimumLODs);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Default);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMinLODForQualityLevels(Z_Param_Out_QualityLevelMinimumLODs,Z_Param_Out_Default);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execSetMinLODForQualityLevels)
	{
		P_GET_TMAP_REF(EPerQualityLevels,int32,Z_Param_Out_QualityLevelMinimumLODs);
		P_GET_PROPERTY(FIntProperty,Z_Param_Default);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinLODForQualityLevels(Z_Param_Out_QualityLevelMinimumLODs,Z_Param_Default);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMinimumLODForQualityLevel)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_QualityLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinimumLODForQualityLevel(Z_Param_Out_QualityLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMinimumLODForQualityLevels)
	{
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_QualityLevelMinimumLODs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMinimumLODForQualityLevels(Z_Param_Out_QualityLevelMinimumLODs);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UStaticMesh::execSetMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_MaterialIndex,Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execSetNumSourceModels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumSourceModels(Z_Param_Num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execIsLODScreenSizeAutoComputed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLODScreenSizeAutoComputed();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UStaticMesh::StaticRegisterNativesUStaticMesh()
	{
		UClass* Class = UStaticMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMaterial", &UStaticMesh::execAddMaterial },
			{ "AddSocket", &UStaticMesh::execAddSocket },
			{ "BuildFromStaticMeshDescriptions", &UStaticMesh::execBuildFromStaticMeshDescriptions },
			{ "CreateStaticMeshDescription", &UStaticMesh::execCreateStaticMeshDescription },
			{ "FindSocket", &UStaticMesh::execFindSocket },
			{ "GetBoundingBox", &UStaticMesh::execGetBoundingBox },
			{ "GetBounds", &UStaticMesh::execGetBounds },
			{ "GetMaterial", &UStaticMesh::execGetMaterial },
			{ "GetMaterialIndex", &UStaticMesh::execGetMaterialIndex },
			{ "GetMinimumLODForPlatform", &UStaticMesh::execGetMinimumLODForPlatform },
			{ "GetMinimumLODForPlatforms", &UStaticMesh::execGetMinimumLODForPlatforms },
			{ "GetMinimumLODForQualityLevel", &UStaticMesh::execGetMinimumLODForQualityLevel },
			{ "GetMinimumLODForQualityLevels", &UStaticMesh::execGetMinimumLODForQualityLevels },
			{ "GetMinLODForQualityLevels", &UStaticMesh::execGetMinLODForQualityLevels },
			{ "GetNumLODs", &UStaticMesh::execGetNumLODs },
			{ "GetNumSections", &UStaticMesh::execGetNumSections },
			{ "GetNumTriangles", &UStaticMesh::execGetNumTriangles },
			{ "GetSocketsByTag", &UStaticMesh::execGetSocketsByTag },
			{ "GetStaticMaterials", &UStaticMesh::execGetStaticMaterials },
			{ "GetStaticMeshDescription", &UStaticMesh::execGetStaticMeshDescription },
#if WITH_EDITOR
			{ "IsLODScreenSizeAutoComputed", &UStaticMesh::execIsLODScreenSizeAutoComputed },
#endif // WITH_EDITOR
			{ "RemoveSocket", &UStaticMesh::execRemoveSocket },
#if WITH_EDITOR
			{ "SetMaterial", &UStaticMesh::execSetMaterial },
#endif // WITH_EDITOR
			{ "SetMinimumLODForPlatform", &UStaticMesh::execSetMinimumLODForPlatform },
			{ "SetMinimumLODForPlatforms", &UStaticMesh::execSetMinimumLODForPlatforms },
			{ "SetMinLODForQualityLevels", &UStaticMesh::execSetMinLODForQualityLevels },
#if WITH_EDITOR
			{ "SetNumSourceModels", &UStaticMesh::execSetNumSourceModels },
#endif // WITH_EDITOR
			{ "SetStaticMaterials", &UStaticMesh::execSetStaticMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics
	{
		struct StaticMesh_eventAddMaterial_Parms
		{
			UMaterialInterface* Material;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventAddMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventAddMaterial_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Adds a new material and return its slot name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Adds a new material and return its slot name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "AddMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::StaticMesh_eventAddMaterial_Parms), Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_AddMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_AddSocket_Statics
	{
		struct StaticMesh_eventAddSocket_Parms
		{
			UStaticMeshSocket* Socket;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Socket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventAddSocket_Parms, Socket), Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::NewProp_Socket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 *\x09""Add a socket object in this StaticMesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Add a socket object in this StaticMesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "AddSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::StaticMesh_eventAddSocket_Parms), Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_AddSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics
	{
		struct StaticMesh_eventBuildFromStaticMeshDescriptions_Parms
		{
			TArray<UStaticMeshDescription*> StaticMeshDescriptions;
			bool bBuildSimpleCollision;
			bool bFastBuild;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshDescriptions;
		static void NewProp_bBuildSimpleCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildSimpleCollision;
		static void NewProp_bFastBuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastBuild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_Inner = { "StaticMeshDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions = { "StaticMeshDescriptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventBuildFromStaticMeshDescriptions_Parms, StaticMeshDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_MetaData)) };
	void Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bBuildSimpleCollision_SetBit(void* Obj)
	{
		((StaticMesh_eventBuildFromStaticMeshDescriptions_Parms*)Obj)->bBuildSimpleCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bBuildSimpleCollision = { "bBuildSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMesh_eventBuildFromStaticMeshDescriptions_Parms), &Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bBuildSimpleCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bFastBuild_SetBit(void* Obj)
	{
		((StaticMesh_eventBuildFromStaticMeshDescriptions_Parms*)Obj)->bFastBuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bFastBuild = { "bFastBuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMesh_eventBuildFromStaticMeshDescriptions_Parms), &Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bFastBuild_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bBuildSimpleCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bFastBuild,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Builds static mesh LODs from the array of StaticMeshDescriptions passed in */" },
		{ "CPP_Default_bBuildSimpleCollision", "false" },
		{ "CPP_Default_bFastBuild", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Builds static mesh LODs from the array of StaticMeshDescriptions passed in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "BuildFromStaticMeshDescriptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::StaticMesh_eventBuildFromStaticMeshDescriptions_Parms), Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics
	{
		struct StaticMesh_eventCreateStaticMeshDescription_Parms
		{
			UObject* Outer;
			UStaticMeshDescription* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventCreateStaticMeshDescription_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventCreateStaticMeshDescription_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Create an empty StaticMeshDescription object, to describe a static mesh at runtime */" },
		{ "CPP_Default_Outer", "None" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Create an empty StaticMeshDescription object, to describe a static mesh at runtime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "CreateStaticMeshDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::StaticMesh_eventCreateStaticMeshDescription_Parms), Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_FindSocket_Statics
	{
		struct StaticMesh_eventFindSocket_Parms
		{
			FName InSocketName;
			UStaticMeshSocket* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventFindSocket_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventFindSocket_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 *\x09""Find a socket object in this StaticMesh by name.\n\x09 *\x09""Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Find a socket object in this StaticMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "FindSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::StaticMesh_eventFindSocket_Parms), Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_FindSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics
	{
		struct StaticMesh_eventGetBoundingBox_Parms
		{
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Returns the bounding box, in local space including bounds extension(s), of the StaticMesh asset */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns the bounding box, in local space including bounds extension(s), of the StaticMesh asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::StaticMesh_eventGetBoundingBox_Parms), Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetBounds_Statics
	{
		struct StaticMesh_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Returns the number of bounds of the mesh.\n\x09 *\n\x09 * @return\x09The bounding box represented as box origin with extents and also a sphere that encapsulates that box\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns the number of bounds of the mesh.\n\n@return      The bounding box represented as box origin with extents and also a sphere that encapsulates that box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::StaticMesh_eventGetBounds_Parms), Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics
	{
		struct StaticMesh_eventGetMaterial_Parms
		{
			int32 MaterialIndex;
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMaterial_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Gets a Material given a Material Index and an LOD number\n\x09 *\n\x09 * @return Requested material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Gets a Material given a Material Index and an LOD number\n\n@return Requested material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::StaticMesh_eventGetMaterial_Parms), Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics
	{
		struct StaticMesh_eventGetMaterialIndex_Parms
		{
			FName MaterialSlotName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_MaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Gets a Material index given a slot name\n\x09 *\n\x09 * @return Requested material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Gets a Material index given a slot name\n\n@return Requested material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::StaticMesh_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics
	{
		struct StaticMesh_eventGetMinimumLODForPlatform_Parms
		{
			FName PlatformName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForPlatform_Parms, PlatformName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForPlatform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMinimumLODForPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::StaticMesh_eventGetMinimumLODForPlatform_Parms), Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics
	{
		struct StaticMesh_eventGetMinimumLODForPlatforms_Parms
		{
			TMap<FName,int32> PlatformMinimumLODs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformMinimumLODs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformMinimumLODs_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformMinimumLODs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_ValueProp = { "PlatformMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_Key_KeyProp = { "PlatformMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs = { "PlatformMinimumLODs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForPlatforms_Parms, PlatformMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMinimumLODForPlatforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::StaticMesh_eventGetMinimumLODForPlatforms_Parms), Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics
	{
		struct StaticMesh_eventGetMinimumLODForQualityLevel_Parms
		{
			FName QualityLevel;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_QualityLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::NewProp_QualityLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForQualityLevel_Parms, QualityLevel), METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::NewProp_QualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::NewProp_QualityLevel_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForQualityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::NewProp_QualityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMinimumLODForQualityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::StaticMesh_eventGetMinimumLODForQualityLevel_Parms), Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics
	{
		struct StaticMesh_eventGetMinimumLODForQualityLevels_Parms
		{
			TMap<FName,int32> QualityLevelMinimumLODs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMinimumLODs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_QualityLevelMinimumLODs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp = { "QualityLevelMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForQualityLevels_Parms, QualityLevelMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMinimumLODForQualityLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::StaticMesh_eventGetMinimumLODForQualityLevels_Parms), Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics
	{
		struct StaticMesh_eventGetMinLODForQualityLevels_Parms
		{
			TMap<EPerQualityLevels,int32> QualityLevelMinimumLODs;
			int32 Default;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMinimumLODs_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_QualityLevelMinimumLODs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp = { "QualityLevelMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EPerQualityLevels, METADATA_PARAMS(nullptr, 0) }; // 1281688588
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMinLODForQualityLevels_Parms, QualityLevelMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1281688588
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMinLODForQualityLevels_Parms, Default), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::NewProp_Default,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMinLODForQualityLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::StaticMesh_eventGetMinLODForQualityLevels_Parms), Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics
	{
		struct StaticMesh_eventGetNumLODs_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Returns the number of LODs used by the mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ScriptName", "GetNumLods" },
		{ "ToolTip", "Returns the number of LODs used by the mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetNumLODs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::StaticMesh_eventGetNumLODs_Parms), Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics
	{
		struct StaticMesh_eventGetNumSections_Parms
		{
			int32 InLOD;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLOD;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_InLOD = { "InLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetNumSections_Parms, InLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_InLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Returns number of Sections that this StaticMesh has, in the supplied LOD (LOD 0 is the highest) */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns number of Sections that this StaticMesh has, in the supplied LOD (LOD 0 is the highest)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetNumSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::StaticMesh_eventGetNumSections_Parms), Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics
	{
		struct StaticMesh_eventGetNumTriangles_Parms
		{
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetNumTriangles_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetNumTriangles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Returns the number of triangles in the render data for the specified LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns the number of triangles in the render data for the specified LOD." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetNumTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::StaticMesh_eventGetNumTriangles_Parms), Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetNumTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics
	{
		struct StaticMesh_eventGetSocketsByTag_Parms
		{
			FString InSocketTag;
			TArray<UStaticMeshSocket*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSocketTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSocketTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_InSocketTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_InSocketTag = { "InSocketTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetSocketsByTag_Parms, InSocketTag), METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_InSocketTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_InSocketTag_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetSocketsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_InSocketTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Returns a list of sockets with the provided tag.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns a list of sockets with the provided tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetSocketsByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::StaticMesh_eventGetSocketsByTag_Parms), Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetSocketsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetSocketsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics
	{
		struct StaticMesh_eventGetStaticMaterials_Parms
		{
			TArray<FStaticMaterial> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) }; // 1568753263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetStaticMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData)) }; // 1568753263
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetStaticMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::StaticMesh_eventGetStaticMaterials_Parms), Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetStaticMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics
	{
		struct StaticMesh_eventGetStaticMeshDescription_Parms
		{
			int32 LODIndex;
			UStaticMeshDescription* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetStaticMeshDescription_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventGetStaticMeshDescription_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Return a new StaticMeshDescription referencing the MeshDescription of the given LOD */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Return a new StaticMeshDescription referencing the MeshDescription of the given LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetStaticMeshDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::StaticMesh_eventGetStaticMeshDescription_Parms), Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics
	{
		struct StaticMesh_eventIsLODScreenSizeAutoComputed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMesh_eventIsLODScreenSizeAutoComputed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMesh_eventIsLODScreenSizeAutoComputed_Parms), &Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "IsLODScreenSizeAutoComputed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::StaticMesh_eventIsLODScreenSizeAutoComputed_Parms), Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics
	{
		struct StaticMesh_eventRemoveSocket_Parms
		{
			UStaticMeshSocket* Socket;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Socket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventRemoveSocket_Parms, Socket), Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::NewProp_Socket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 *\x09Remove a socket object in this StaticMesh by providing it's pointer. Use FindSocket() if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Remove a socket object in this StaticMesh by providing it's pointer. Use FindSocket() if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "RemoveSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::StaticMesh_eventRemoveSocket_Parms), Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_RemoveSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics
	{
		struct StaticMesh_eventSetMaterial_Parms
		{
			int32 MaterialIndex;
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetMaterial_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Sets a Material given a Material Index\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Sets a Material given a Material Index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::StaticMesh_eventSetMaterial_Parms), Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics
	{
		struct StaticMesh_eventSetMinimumLODForPlatform_Parms
		{
			FName PlatformName;
			int32 InMinLOD;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMinLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetMinimumLODForPlatform_Parms, PlatformName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::NewProp_InMinLOD = { "InMinLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetMinimumLODForPlatform_Parms, InMinLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::NewProp_PlatformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::NewProp_InMinLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetMinimumLODForPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::StaticMesh_eventSetMinimumLODForPlatform_Parms), Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics
	{
		struct StaticMesh_eventSetMinimumLODForPlatforms_Parms
		{
			TMap<FName,int32> PlatformMinimumLODs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformMinimumLODs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformMinimumLODs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMinimumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformMinimumLODs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_ValueProp = { "PlatformMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_Key_KeyProp = { "PlatformMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs = { "PlatformMinimumLODs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetMinimumLODForPlatforms_Parms, PlatformMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetMinimumLODForPlatforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::StaticMesh_eventSetMinimumLODForPlatforms_Parms), Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics
	{
		struct StaticMesh_eventSetMinLODForQualityLevels_Parms
		{
			TMap<EPerQualityLevels,int32> QualityLevelMinimumLODs;
			int32 Default;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMinimumLODs_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMinimumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QualityLevelMinimumLODs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp = { "QualityLevelMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EPerQualityLevels, METADATA_PARAMS(nullptr, 0) }; // 1281688588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetMinLODForQualityLevels_Parms, QualityLevelMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_MetaData)) }; // 1281688588
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetMinLODForQualityLevels_Parms, Default), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::NewProp_Default,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "CPP_Default_Default", "-1" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Allow to override min lod quality levels on a staticMesh and it Default value (-1 value for Default dont override its value)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetMinLODForQualityLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::StaticMesh_eventSetMinLODForQualityLevels_Parms), Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics
	{
		struct StaticMesh_eventSetNumSourceModels_Parms
		{
			int32 Num;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetNumSourceModels_Parms, Num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::NewProp_Num,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetNumSourceModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::StaticMesh_eventSetNumSourceModels_Parms), Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetNumSourceModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics
	{
		struct StaticMesh_eventSetStaticMaterials_Parms
		{
			TArray<FStaticMaterial> InStaticMaterials;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStaticMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStaticMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InStaticMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_Inner = { "InStaticMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) }; // 1568753263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials = { "InStaticMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMesh_eventSetStaticMaterials_Parms, InStaticMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_MetaData)) }; // 1568753263
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetStaticMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::StaticMesh_eventSetStaticMaterials_Parms), Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetStaticMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMesh);
	UClass* Z_Construct_UClass_UStaticMesh_NoRegister()
	{
		return UStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceModels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiResSourceModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HiResSourceModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionInfoMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionInfoMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalSectionInfoMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalSectionInfoMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStreamedLODs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumStreamedLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportVersion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialRemapIndexPerImportVersion_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRemapIndexPerImportVersion_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialRemapIndexPerImportVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapUVVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightmapUVVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLODScreenSize_MetaData[];
#endif
		static void NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLODScreenSize;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinQualityLevelLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinQualityLevelLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinLOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapUVDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightmapUVDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODForCollision_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODForCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDistanceField_MetaData[];
#endif
		static void NewProp_bGenerateMeshDistanceField_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDistanceField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStripComplexCollisionForConsole_MetaData[];
#endif
		static void NewProp_bStripComplexCollisionForConsole_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripComplexCollisionForConsole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasNavigationData_MetaData[];
#endif
		static void NewProp_bHasNavigationData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNavigationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportPhysicalMaterialMasks_MetaData[];
#endif
		static void NewProp_bSupportPhysicalMaterialMasks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportPhysicalMaterialMasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[];
#endif
		static void NewProp_bSupportRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoFastBuild_MetaData[];
#endif
		static void NewProp_bDoFastBuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoFastBuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBuiltAtRuntime_MetaData[];
#endif
		static void NewProp_bIsBuiltAtRuntime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBuiltAtRuntime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[];
#endif
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportGpuUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportGpuUniformlyDistributedSampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportGpuUniformlyDistributedSampling;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorCameraPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorCameraPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomizedCollision_MetaData[];
#endif
		static void NewProp_bCustomizedCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomizedCollision;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositiveBoundsExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositiveBoundsExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeBoundsExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NegativeBoundsExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementToIgnoreForTexFactor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementToIgnoreForTexFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditableMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComplexCollisionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComplexCollisionMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMesh_AddMaterial, "AddMaterial" }, // 2054323655
		{ &Z_Construct_UFunction_UStaticMesh_AddSocket, "AddSocket" }, // 835247666
		{ &Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions, "BuildFromStaticMeshDescriptions" }, // 3136203960
		{ &Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription, "CreateStaticMeshDescription" }, // 164886590
		{ &Z_Construct_UFunction_UStaticMesh_FindSocket, "FindSocket" }, // 3492914416
		{ &Z_Construct_UFunction_UStaticMesh_GetBoundingBox, "GetBoundingBox" }, // 1985539942
		{ &Z_Construct_UFunction_UStaticMesh_GetBounds, "GetBounds" }, // 1455364342
		{ &Z_Construct_UFunction_UStaticMesh_GetMaterial, "GetMaterial" }, // 1129968559
		{ &Z_Construct_UFunction_UStaticMesh_GetMaterialIndex, "GetMaterialIndex" }, // 2416212808
		{ &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform, "GetMinimumLODForPlatform" }, // 2791809359
		{ &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms, "GetMinimumLODForPlatforms" }, // 2275188680
		{ &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevel, "GetMinimumLODForQualityLevel" }, // 2125807366
		{ &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForQualityLevels, "GetMinimumLODForQualityLevels" }, // 566999656
		{ &Z_Construct_UFunction_UStaticMesh_GetMinLODForQualityLevels, "GetMinLODForQualityLevels" }, // 3351607181
		{ &Z_Construct_UFunction_UStaticMesh_GetNumLODs, "GetNumLODs" }, // 2470163250
		{ &Z_Construct_UFunction_UStaticMesh_GetNumSections, "GetNumSections" }, // 3629784450
		{ &Z_Construct_UFunction_UStaticMesh_GetNumTriangles, "GetNumTriangles" }, // 1708344505
		{ &Z_Construct_UFunction_UStaticMesh_GetSocketsByTag, "GetSocketsByTag" }, // 457507437
		{ &Z_Construct_UFunction_UStaticMesh_GetStaticMaterials, "GetStaticMaterials" }, // 3426641221
		{ &Z_Construct_UFunction_UStaticMesh_GetStaticMeshDescription, "GetStaticMeshDescription" }, // 2569253234
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_IsLODScreenSizeAutoComputed, "IsLODScreenSizeAutoComputed" }, // 1203565942
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_RemoveSocket, "RemoveSocket" }, // 1528035368
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_SetMaterial, "SetMaterial" }, // 2717267326
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatform, "SetMinimumLODForPlatform" }, // 2729052525
		{ &Z_Construct_UFunction_UStaticMesh_SetMinimumLODForPlatforms, "SetMinimumLODForPlatforms" }, // 382482358
		{ &Z_Construct_UFunction_UStaticMesh_SetMinLODForQualityLevels, "SetMinLODForQualityLevels" }, // 941988935
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_SetNumSourceModels, "SetNumSourceModels" }, // 1101614088
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_SetStaticMaterials, "SetStaticMaterials" }, // 1174399062
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A StaticMesh is a piece of geometry that consists of a static set of polygons.\n * Static Meshes can be translated, rotated, and scaled, but they cannot have their vertices animated in any way. As such, they are more efficient\n * to render than other types of geometry such as USkeletalMesh, and they are often the basic building block of levels created in the engine.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n * @see AStaticMeshActor, UStaticMeshComponent\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/StaticMesh.h" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A StaticMesh is a piece of geometry that consists of a static set of polygons.\nStatic Meshes can be translated, rotated, and scaled, but they cannot have their vertices animated in any way. As such, they are more efficient\nto render than other types of geometry such as USkeletalMesh, and they are often the basic building block of levels created in the engine.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n@see AStaticMeshActor, UStaticMeshComponent" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_Inner = { "SourceModels", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticMeshSourceModel, METADATA_PARAMS(nullptr, 0) }; // 2944631195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels = { "SourceModels", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, SourceModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData)) }; // 2944631195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_HiResSourceModel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_HiResSourceModel = { "HiResSourceModel", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, HiResSourceModel), Z_Construct_UScriptStruct_FStaticMeshSourceModel, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_HiResSourceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_HiResSourceModel_MetaData)) }; // 2944631195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap = { "SectionInfoMap", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, SectionInfoMap), Z_Construct_UScriptStruct_FMeshSectionInfoMap, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData)) }; // 1471100799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap = { "OriginalSectionInfoMap", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, OriginalSectionInfoMap), Z_Construct_UScriptStruct_FMeshSectionInfoMap, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData)) }; // 1471100799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "LodSettings" },
		{ "Comment", "/** The LOD group to which this mesh belongs. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The LOD group to which this mesh belongs." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, LODGroup), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs_MetaData[] = {
		{ "Comment", "/**\n\x09 * If non-negative, specify the maximum number of streamed LODs. Only has effect if\n\x09 * mesh LOD streaming is enabled for the target platform.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If non-negative, specify the maximum number of streamed LODs. Only has effect if\nmesh LOD streaming is enabled for the target platform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs = { "NumStreamedLODs", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, NumStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData[] = {
		{ "Comment", "/* The last import version */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The last import version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion = { "ImportVersion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, ImportVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_Inner = { "MaterialRemapIndexPerImportVersion", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialRemapIndex, METADATA_PARAMS(nullptr, 0) }; // 3661288935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion = { "MaterialRemapIndexPerImportVersion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, MaterialRemapIndexPerImportVersion), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData)) }; // 3661288935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion = { "LightmapUVVersion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, LightmapUVVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData[] = {
		{ "Comment", "/** If true, the screen sizes at which LODs swap are computed automatically. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, the screen sizes at which LODs swap are computed automatically." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bAutoComputeLODScreenSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize = { "bAutoComputeLODScreenSize", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials used by this static mesh. Individual sections index in to this array. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Materials used by this static mesh. Individual sections index in to this array." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, Materials_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "NaniteSettings" },
		{ "Comment", "/** Settings related to building Nanite data. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Settings related to building Nanite data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NaniteSettings_MetaData)) }; // 2370712239
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinQualityLevelLOD_MetaData[] = {
		{ "Comment", "/* Allow more flexibility to set various values driven by the Scalability or Device Profile.*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Allow more flexibility to set various values driven by the Scalability or Device Profile." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinQualityLevelLOD = { "MinQualityLevelLOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, MinQualityLevelLOD), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinQualityLevelLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinQualityLevelLOD_MetaData)) }; // 1607049419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, MinLOD), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData)) }; // 1463691826
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_Inner = { "StaticMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) }; // 1568753263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData[] = {
		{ "BlueprintGetter", "GetStaticMaterials" },
		{ "BlueprintSetter", "SetStaticMaterials" },
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials = { "StaticMaterials", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, StaticMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData)) }; // 1568753263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity = { "LightmapUVDensity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, LightmapUVDensity), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ClampMax", "4096" },
		{ "FixedIncrement", "4.0" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The light map resolution" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, LightMapResolution), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The light map coordinate index" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, LightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, DistanceFieldSelfShadowBias), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0046000000282009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09 *\x09Specifies which mesh LOD to use for complex (per-poly) collision. \n\x09 *\x09Sometimes it can be desirable to use a lower poly representation for collision to reduce memory usage, improve performance and behaviour.\n\x09 *\x09""Collision representation does not change based on distance to camera.\n\x09 */" },
		{ "DisplayName", "LOD For Collision" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Specifies which mesh LOD to use for complex (per-poly) collision.\nSometimes it can be desirable to use a lower poly representation for collision to reduce memory usage, improve performance and behaviour.\nCollision representation does not change based on distance to camera." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision = { "LODForCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, LODForCollision), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09 * Whether to generate a distance field for this mesh, which can be used by DistanceField Indirect Shadows.\n\x09 * This is ignored if the project's 'Generate Mesh Distance Fields' setting is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether to generate a distance field for this mesh, which can be used by DistanceField Indirect Shadows.\nThis is ignored if the project's 'Generate Mesh Distance Fields' setting is enabled." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bGenerateMeshDistanceField = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField = { "bGenerateMeshDistanceField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData[] = {
		{ "Comment", "/** If true, strips unwanted complex collision data aka kDOP tree when cooking for consoles.\n\x09\x09On the Playstation 3 data of this mesh will be stored in video memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, strips unwanted complex collision data aka kDOP tree when cooking for consoles.\n              On the Playstation 3 data of this mesh will be stored in video memory." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bStripComplexCollisionForConsole_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole = { "bStripComplexCollisionForConsole", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If true, mesh will have NavCollision property with additional data for navmesh generation and usage.\n\x09    Set to false for distant meshes (always outside navigation bounds) to save memory on collision data. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, mesh will have NavCollision property with additional data for navmesh generation and usage.\n          Set to false for distant meshes (always outside navigation bounds) to save memory on collision data." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bHasNavigationData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData = { "bHasNavigationData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\x09\n\x09\x09Mesh supports uniformly distributed sampling in constant time.\n\x09\x09Memory cost is 8 bytes per triangle.\n\x09\x09""Example usage is uniform spawning of particles.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle.\nExample usage is uniform spawning of particles." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportUniformlyDistributedSampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling = { "bSupportUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09\x09If true, complex collision data will store UVs and face remap table for use when performing\n\x09    PhysicalMaterialMask lookups in cooked builds. Note the increased memory cost for this\n\x09\x09""functionality.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, complex collision data will store UVs and face remap table for use when performing\nPhysicalMaterialMask lookups in cooked builds. Note the increased memory cost for this\nfunctionality." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportPhysicalMaterialMasks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks = { "bSupportPhysicalMaterialMasks", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/**\n\x09 * If true, a ray tracing acceleration structure will be built for this mesh and it may be used in ray tracing effects\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, a ray tracing acceleration structure will be built for this mesh and it may be used in ray tracing effects" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bDoFastBuild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bDoFastBuild_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bDoFastBuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bDoFastBuild = { "bDoFastBuild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bDoFastBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bDoFastBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bDoFastBuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bIsBuiltAtRuntime_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime = { "bIsBuiltAtRuntime", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09 *\x09If true, will keep geometry data CPU-accessible in cooked builds, rather than uploading to GPU memory and releasing it from CPU memory.\n\x09 *\x09This is required if you wish to access StaticMesh geometry data on the CPU at runtime in cooked builds (e.g. to convert StaticMesh to ProceduralMeshComponent)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, will keep geometry data CPU-accessible in cooked builds, rather than uploading to GPU memory and releasing it from CPU memory.\nThis is required if you wish to access StaticMesh geometry data on the CPU at runtime in cooked builds (e.g. to convert StaticMesh to ProceduralMeshComponent)" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bAllowCPUAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * If true, a GPU buffer containing required data for uniform mesh surface sampling will be created at load time.\n\x09 * It is created from the cpu data so bSupportUniformlyDistributedSampling is also required to be true.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, a GPU buffer containing required data for uniform mesh surface sampling will be created at load time.\nIt is created from the cpu data so bSupportUniformlyDistributedSampling is also required to be true." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportGpuUniformlyDistributedSampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling = { "bSupportGpuUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0016000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this static mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Path to the resource used to construct this static mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00160408000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData[] = {
		{ "Comment", "/** The stored camera position to use as a default for the static mesh editor */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The stored camera position to use as a default for the static mesh editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition = { "EditorCameraPosition", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, EditorCameraPosition), Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData)) }; // 4108744919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If the user has modified collision in any way or has custom collision imported. Used for determining if to auto generate collision on import */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If the user has modified collision in any way or has custom collision imported. Used for determining if to auto generate collision on import" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bCustomizedCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision = { "bCustomizedCollision", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""Array of named socket locations, set up in editor and used as a shortcut instead of specifying\n\x09 *\x09""everything explicitly to AttachComponent in the StaticMeshComponent.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the StaticMeshComponent." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension = { "PositiveBoundsExtension", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, PositiveBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension = { "NegativeBoundsExtension", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, NegativeBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds = { "ExtendedBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, ExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Index of an element to ignore while gathering streaming texture factors.\n\x09 * This is useful to disregard automatically generated vertex data which breaks texture factor heuristics.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Index of an element to ignore while gathering streaming texture factors.\nThis is useful to disregard automatically generated vertex data which breaks texture factor heuristics." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor = { "ElementToIgnoreForTexFactor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, ElementToIgnoreForTexFactor), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh = { "EditableMesh", nullptr, (EPropertyFlags)0x0016000820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, EditableMesh_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh = { "ComplexCollisionMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, ComplexCollisionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditCondition", "bHasNavigationData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision = { "NavCollision", nullptr, (EPropertyFlags)0x00460000002a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMesh, NavCollision), Z_Construct_UClass_UNavCollisionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMesh_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_HiResSourceModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NaniteSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinQualityLevelLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bDoFastBuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStaticMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_CollisionDataProvider), false },  // 1866130202
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_AssetUserData), false },  // 1283872964
			{ Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_AsyncCompilation), false },  // 30865164
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMesh_Statics::ClassParams = {
		&UStaticMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaticMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMesh()
	{
		if (!Z_Registration_Info_UClass_UStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMesh.OuterSingleton, Z_Construct_UClass_UStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMesh.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStaticMesh>()
	{
		return UStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMesh);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMesh)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::EnumInfo[] = {
		{ ENormalMode_StaticEnum, TEXT("ENormalMode"), &Z_Registration_Info_UEnum_ENormalMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3964349155U) },
		{ EImportanceLevel_StaticEnum, TEXT("EImportanceLevel"), &Z_Registration_Info_UEnum_EImportanceLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2374705372U) },
		{ EOptimizationType_StaticEnum, TEXT("EOptimizationType"), &Z_Registration_Info_UEnum_EOptimizationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1308044809U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::ScriptStructInfo[] = {
		{ FStaticMeshOptimizationSettings::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewStructOps, TEXT("StaticMeshOptimizationSettings"), &Z_Registration_Info_UScriptStruct_StaticMeshOptimizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshOptimizationSettings), 1000803969U) },
		{ FMeshSectionInfo::StaticStruct, Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewStructOps, TEXT("MeshSectionInfo"), &Z_Registration_Info_UScriptStruct_MeshSectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshSectionInfo), 760145665U) },
		{ FMeshSectionInfoMap::StaticStruct, Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewStructOps, TEXT("MeshSectionInfoMap"), &Z_Registration_Info_UScriptStruct_MeshSectionInfoMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshSectionInfoMap), 1471100799U) },
		{ FAssetEditorOrbitCameraPosition::StaticStruct, Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewStructOps, TEXT("AssetEditorOrbitCameraPosition"), &Z_Registration_Info_UScriptStruct_AssetEditorOrbitCameraPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetEditorOrbitCameraPosition), 4108744919U) },
		{ FStaticMaterial::StaticStruct, Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewStructOps, TEXT("StaticMaterial"), &Z_Registration_Info_UScriptStruct_StaticMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMaterial), 1568753263U) },
		{ FMaterialRemapIndex::StaticStruct, Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewStructOps, TEXT("MaterialRemapIndex"), &Z_Registration_Info_UScriptStruct_MaterialRemapIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialRemapIndex), 3661288935U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMesh, UStaticMesh::StaticClass, TEXT("UStaticMesh"), &Z_Registration_Info_UClass_UStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMesh), 259456619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_2805411326(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
