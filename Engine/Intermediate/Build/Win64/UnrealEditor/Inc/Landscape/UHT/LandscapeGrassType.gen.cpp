// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeGrassType.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "../../Source/Runtime/Engine/Public/PerQualityLevelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGrassType() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_EGrassScaling();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrassScaling;
	static UEnum* EGrassScaling_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGrassScaling.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGrassScaling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_EGrassScaling, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("EGrassScaling"));
		}
		return Z_Registration_Info_UEnum_EGrassScaling.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<EGrassScaling>()
	{
		return EGrassScaling_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_EGrassScaling_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enumerators[] = {
		{ "EGrassScaling::Uniform", (int64)EGrassScaling::Uniform },
		{ "EGrassScaling::Free", (int64)EGrassScaling::Free },
		{ "EGrassScaling::LockXY", (int64)EGrassScaling::LockXY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enum_MetaDataParams[] = {
		{ "Free.Comment", "/** Grass instances will have random X, Y and Z scales. */" },
		{ "Free.Name", "EGrassScaling::Free" },
		{ "Free.ToolTip", "Grass instances will have random X, Y and Z scales." },
		{ "LockXY.Comment", "/** X and Y will be the same random scale, Z will be another */" },
		{ "LockXY.Name", "EGrassScaling::LockXY" },
		{ "LockXY.ToolTip", "X and Y will be the same random scale, Z will be another" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "Uniform.Comment", "/** Grass instances will have uniform X, Y and Z scales. */" },
		{ "Uniform.Name", "EGrassScaling::Uniform" },
		{ "Uniform.ToolTip", "Grass instances will have uniform X, Y and Z scales." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_EGrassScaling_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"EGrassScaling",
		"EGrassScaling",
		Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EGrassScaling_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_EGrassScaling()
	{
		if (!Z_Registration_Info_UEnum_EGrassScaling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrassScaling.InnerSingleton, Z_Construct_UEnum_Landscape_EGrassScaling_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGrassScaling.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrassVariety;
class UScriptStruct* FGrassVariety::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrassVariety.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrassVariety.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrassVariety, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("GrassVariety"));
	}
	return Z_Registration_Info_UScriptStruct_GrassVariety.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FGrassVariety>()
{
	return FGrassVariety::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGrassVariety_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrassMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassDensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrassDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassDensityQuality_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrassDensityQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGrid_MetaData[];
#endif
		static void NewProp_bUseGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlacementJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistanceQuality_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartCullDistanceQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistanceQuality_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndCullDistanceQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLOD;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Scaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotation_MetaData[];
#endif
		static void NewProp_RandomRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignToSurface_MetaData[];
#endif
		static void NewProp_AlignToSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AlignToSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeLightmap_MetaData[];
#endif
		static void NewProp_bUseLandscapeLightmap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeLightmap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[];
#endif
		static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[];
#endif
		static void NewProp_bCastContactShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepInstanceBufferCPUCopy_MetaData[];
#endif
		static void NewProp_bKeepInstanceBufferCPUCopy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepInstanceBufferCPUCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceWorldPositionOffsetDisableDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InstanceWorldPositionOffsetDisableDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrassVariety_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrassVariety>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh = { "GrassMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, GrassMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Material Overrides." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Instances per 10 square meters. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Instances per 10 square meters." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity = { "GrassDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, GrassDensity), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity_MetaData)) }; // 167720259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensityQuality_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensityQuality = { "GrassDensityQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, GrassDensityQuality), Z_Construct_UScriptStruct_FPerQualityLevelFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensityQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensityQuality_MetaData)) }; // 965922116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/* If true, use a jittered grid sequence for placement, otherwise use a halton sequence. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "If true, use a jittered grid sequence for placement, otherwise use a halton sequence." },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bUseGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid = { "bUseGrid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bUseGrid" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter = { "PlacementJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, PlacementJitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables." },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, StartCullDistance), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistanceQuality_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistanceQuality = { "StartCullDistanceQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, StartCullDistanceQuality), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistanceQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistanceQuality_MetaData)) }; // 1607049419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The distance where instances will have completely faded out when using a PerInstanceFadeAmount material node. 0 disables. \n\x09 * When the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "The distance where instances will have completely faded out when using a PerInstanceFadeAmount material node. 0 disables.\nWhen the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all." },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, EndCullDistance), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistanceQuality_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "UIMax", "1000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistanceQuality = { "EndCullDistanceQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, EndCullDistanceQuality), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistanceQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistanceQuality_MetaData)) }; // 1607049419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "Grass" },
		{ "ClampMax", "8" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** \n\x09 * Specifies the smallest LOD that will be used for this component.\n\x09 * If -1 (default), the MinLOD of the static mesh asset will be used instead.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nIf -1 (default), the MinLOD of the static mesh asset will be used instead." },
		{ "UIMax", "8" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, MinLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Specifies grass instance scaling type */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies grass instance scaling type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, Scaling), Z_Construct_UEnum_Landscape_EGrassScaling, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_MetaData)) }; // 3077039780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a grass instance's X Scale property */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's X Scale property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Y Scale property */" },
		{ "EditCondition", "Scaling == EGrassScaling::Free" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Y Scale property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Z Scale property */" },
		{ "EditCondition", "Scaling == EGrassScaling::Free || Scaling == EGrassScaling::LockXY" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Z Scale property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass instances should be placed at random rotation (true) or all at the same rotation (false) */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should be placed at random rotation (true) or all at the same rotation (false)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->RandomRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation = { "RandomRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass instances should be tilted to the normal of the landscape (true), or always vertical (false) */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should be tilted to the normal of the landscape (true), or always vertical (false)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->AlignToSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface = { "AlignToSurface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/* Whether to use the landscape's lightmap when rendering the grass. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether to use the landscape's lightmap when rendering the grass." },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bUseLandscapeLightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap = { "bUseLandscapeLightmap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/**\n\x09 * Lighting channels that the grass will be assigned. Lights with matching channels will affect the grass.\n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Lighting channels that the grass will be assigned. Lights with matching channels will affect the grass.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels_MetaData)) }; // 829425924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass instances should receive decals. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass instances should receive decals." },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bReceivesDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Controls whether the primitive should affect dynamic distance field lighting methods. */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods." },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass should cast shadows when using non-precomputed shadowing. **/" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass should cast shadows when using non-precomputed shadowing. *" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bCastDynamicShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether the grass should cast contact shadows. **/" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether the grass should cast contact shadows. *" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bCastContactShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Whether we should keep a cpu copy of the instance buffer. This should be set to true if you plan on using GetOverlappingXXXXCount functions of the component otherwise it won't return any data.**/" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether we should keep a cpu copy of the instance buffer. This should be set to true if you plan on using GetOverlappingXXXXCount functions of the component otherwise it won't return any data.*" },
	};
#endif
	void Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_SetBit(void* Obj)
	{
		((FGrassVariety*)Obj)->bKeepInstanceBufferCPUCopy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy = { "bKeepInstanceBufferCPUCopy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGrassVariety), &Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_InstanceWorldPositionOffsetDisableDistance_MetaData[] = {
		{ "Category", "Grass" },
		{ "Comment", "/** Distance at which to grass instances should disable WPO for performance reasons */" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Distance at which to grass instances should disable WPO for performance reasons" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_InstanceWorldPositionOffsetDisableDistance = { "InstanceWorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassVariety, InstanceWorldPositionOffsetDisableDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_InstanceWorldPositionOffsetDisableDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_InstanceWorldPositionOffsetDisableDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_GrassDensityQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_PlacementJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_StartCullDistanceQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_EndCullDistanceQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_MinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_Scaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_ScaleZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_RandomRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_AlignToSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bUseLandscapeLightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_LightingChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bReceivesDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastDynamicShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bCastContactShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_bKeepInstanceBufferCPUCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassVariety_Statics::NewProp_InstanceWorldPositionOffsetDisableDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrassVariety_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"GrassVariety",
		sizeof(FGrassVariety),
		alignof(FGrassVariety),
		Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassVariety_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassVariety_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety()
	{
		if (!Z_Registration_Info_UScriptStruct_GrassVariety.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrassVariety.InnerSingleton, Z_Construct_UScriptStruct_FGrassVariety_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GrassVariety.InnerSingleton;
	}
	void ULandscapeGrassType::StaticRegisterNativesULandscapeGrassType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeGrassType);
	UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister()
	{
		return ULandscapeGrassType::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeGrassType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrassVarieties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassVarieties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrassVarieties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[];
#endif
		static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrassMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrassDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlacementJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotation_MetaData[];
#endif
		static void NewProp_RandomRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignToSurface_MetaData[];
#endif
		static void NewProp_AlignToSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AlignToSurface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeGrassType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGrassType.h" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_Inner = { "GrassVarieties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGrassVariety, METADATA_PARAMS(nullptr, 0) }; // 2992692966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties = { "GrassVarieties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassVarieties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_MetaData)) }; // 2992692966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/**\n\x09* Whether this grass type should be affected by the Engine Scalability system's Foliage grass.DensityScale setting. \n\x09* This is enabled by default but can be disabled should this grass type be important for gameplay reasons.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
		{ "ToolTip", "Whether this grass type should be affected by the Engine Scalability system's Foliage grass.DensityScale setting.\nThis is enabled by default but can be disabled should this grass type be important for gameplay reasons." },
	};
#endif
	void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
	{
		((ULandscapeGrassType*)Obj)->bEnableDensityScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh = { "GrassMesh", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassMesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity = { "GrassDensity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassDensity_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter = { "PlacementJitter", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeGrassType, PlacementJitter_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeGrassType, StartCullDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeGrassType, EndCullDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_SetBit(void* Obj)
	{
		((ULandscapeGrassType*)Obj)->RandomRotation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation = { "RandomRotation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_SetBit(void* Obj)
	{
		((ULandscapeGrassType*)Obj)->AlignToSurface_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface = { "AlignToSurface", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeGrassType), &Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassVarieties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_bEnableDensityScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_GrassDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_PlacementJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_StartCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_EndCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_RandomRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeGrassType_Statics::NewProp_AlignToSurface,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeGrassType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeGrassType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeGrassType_Statics::ClassParams = {
		&ULandscapeGrassType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeGrassType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGrassType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeGrassType()
	{
		if (!Z_Registration_Info_UClass_ULandscapeGrassType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeGrassType.OuterSingleton, Z_Construct_UClass_ULandscapeGrassType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeGrassType.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeGrassType>()
	{
		return ULandscapeGrassType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGrassType);
	ULandscapeGrassType::~ULandscapeGrassType() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::EnumInfo[] = {
		{ EGrassScaling_StaticEnum, TEXT("EGrassScaling"), &Z_Registration_Info_UEnum_EGrassScaling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3077039780U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ScriptStructInfo[] = {
		{ FGrassVariety::StaticStruct, Z_Construct_UScriptStruct_FGrassVariety_Statics::NewStructOps, TEXT("GrassVariety"), &Z_Registration_Info_UScriptStruct_GrassVariety, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrassVariety), 2992692966U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeGrassType, ULandscapeGrassType::StaticClass, TEXT("ULandscapeGrassType"), &Z_Registration_Info_UClass_ULandscapeGrassType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeGrassType), 1488069742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_366317599(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
