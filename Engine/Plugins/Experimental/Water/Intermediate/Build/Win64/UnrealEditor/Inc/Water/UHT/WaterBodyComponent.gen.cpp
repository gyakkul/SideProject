// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WaterBodyHeightmapSettings.h"
#include "WaterBodyWeightmapSettings.h"
#include "WaterCurveSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody_NoRegister();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyIsland_NoRegister();
	WATER_API UClass* Z_Construct_UClass_AWaterZone_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineMetadata_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesBase_NoRegister();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterCurveSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnderwaterPostProcessSettings;
class UScriptStruct* FUnderwaterPostProcessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnderwaterPostProcessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnderwaterPostProcessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("UnderwaterPostProcessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_UnderwaterPostProcessSettings.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FUnderwaterPostProcessSettings>()
{
	return FUnderwaterPostProcessSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterPostProcessMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnderwaterPostProcessMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnderwaterPostProcessSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FUnderwaterPostProcessSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUnderwaterPostProcessSettings), &Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUnderwaterPostProcessSettings, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendRadius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** World space radius around the volume that is used for blending (only if not unbound).\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "World space radius around the volume that is used for blending (only if not unbound)." },
		{ "UIMax", "6000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendRadius = { "BlendRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUnderwaterPostProcessSettings, BlendRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** 0:no effect, 1:full effect */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "0:no effect, 1:full effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUnderwaterPostProcessSettings, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** List of all post-process settings to use when underwater : note : use UnderwaterPostProcessMaterial for setting the actual post process material. */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "List of all post-process settings to use when underwater : note : use UnderwaterPostProcessMaterial for setting the actual post process material." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUnderwaterPostProcessSettings, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_PostProcessSettings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData[] = {
		{ "Comment", "/** This is the parent post process material for the PostProcessSettings */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "This is the parent post process material for the PostProcessSettings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_UnderwaterPostProcessMaterial = { "UnderwaterPostProcessMaterial", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUnderwaterPostProcessSettings, UnderwaterPostProcessMaterial_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_BlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_PostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewProp_UnderwaterPostProcessMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"UnderwaterPostProcessSettings",
		sizeof(FUnderwaterPostProcessSettings),
		alignof(FUnderwaterPostProcessSettings),
		Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_UnderwaterPostProcessSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnderwaterPostProcessSettings.InnerSingleton, Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UnderwaterPostProcessSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetMaxWaveHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxWaveHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execOnWaterBodyChanged)
	{
		P_GET_UBOOL(Z_Param_bShapeOrPositionChanged);
		P_GET_UBOOL(Z_Param_bWeightmapSettingsChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWaterBodyChanged(Z_Param_bShapeOrPositionChanged,Z_Param_bWeightmapSettingsChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetExclusionVolumes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AWaterBodyExclusionVolume*>*)Z_Param__Result=P_THIS->GetExclusionVolumes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetIslands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AWaterBodyIsland*>*)Z_Param__Result=P_THIS->GetIslands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterVelocityAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWaterVelocityAtSplineInputKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterSurfaceInfoAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWaterSurfaceLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWaterSurfaceNormal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWaterVelocity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutWaterDepth);
		P_GET_UBOOL(Z_Param_bIncludeDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWaterSurfaceInfoAtLocation(Z_Param_Out_InLocation,Z_Param_Out_OutWaterSurfaceLocation,Z_Param_Out_OutWaterSurfaceNormal,Z_Param_Out_OutWaterVelocity,Z_Param_Out_OutWaterDepth,Z_Param_bIncludeDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execSetWaterAndUnderWaterPostProcessMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InWaterMaterial);
		P_GET_OBJECT(UMaterialInterface,Z_Param_InUnderWaterPostProcessMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterAndUnderWaterPostProcessMaterial(Z_Param_InWaterMaterial,Z_Param_InUnderWaterPostProcessMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterInfoMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetWaterInfoMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetUnderwaterPostProcessMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetUnderwaterPostProcessMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterLODMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetWaterLODMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetWaterMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetWaterMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterWaves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWaterWavesBase**)Z_Param__Result=P_THIS->GetWaterWaves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWaterSplineComponent**)Z_Param__Result=P_THIS->GetWaterSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetWaterBodyActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWaterBody**)Z_Param__Result=P_THIS->GetWaterBodyActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetRiverToOceanTransitionMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetRiverToOceanTransitionMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetRiverToLakeTransitionMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetRiverToLakeTransitionMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetStandardRenderableComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->GetStandardRenderableComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBodyComponent::execGetCollisionComponents)
	{
		P_GET_UBOOL(Z_Param_bInOnlyEnabledComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->GetCollisionComponents(Z_Param_bInOnlyEnabledComponents);
		P_NATIVE_END;
	}
	void UWaterBodyComponent::StaticRegisterNativesUWaterBodyComponent()
	{
		UClass* Class = UWaterBodyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollisionComponents", &UWaterBodyComponent::execGetCollisionComponents },
			{ "GetExclusionVolumes", &UWaterBodyComponent::execGetExclusionVolumes },
			{ "GetIslands", &UWaterBodyComponent::execGetIslands },
			{ "GetMaxWaveHeight", &UWaterBodyComponent::execGetMaxWaveHeight },
			{ "GetRiverToLakeTransitionMaterialInstance", &UWaterBodyComponent::execGetRiverToLakeTransitionMaterialInstance },
			{ "GetRiverToOceanTransitionMaterialInstance", &UWaterBodyComponent::execGetRiverToOceanTransitionMaterialInstance },
			{ "GetStandardRenderableComponents", &UWaterBodyComponent::execGetStandardRenderableComponents },
			{ "GetUnderwaterPostProcessMaterialInstance", &UWaterBodyComponent::execGetUnderwaterPostProcessMaterialInstance },
			{ "GetWaterBodyActor", &UWaterBodyComponent::execGetWaterBodyActor },
			{ "GetWaterInfoMaterialInstance", &UWaterBodyComponent::execGetWaterInfoMaterialInstance },
			{ "GetWaterLODMaterialInstance", &UWaterBodyComponent::execGetWaterLODMaterialInstance },
			{ "GetWaterMaterial", &UWaterBodyComponent::execGetWaterMaterial },
			{ "GetWaterMaterialInstance", &UWaterBodyComponent::execGetWaterMaterialInstance },
			{ "GetWaterSpline", &UWaterBodyComponent::execGetWaterSpline },
			{ "GetWaterSurfaceInfoAtLocation", &UWaterBodyComponent::execGetWaterSurfaceInfoAtLocation },
			{ "GetWaterVelocityAtSplineInputKey", &UWaterBodyComponent::execGetWaterVelocityAtSplineInputKey },
			{ "GetWaterWaves", &UWaterBodyComponent::execGetWaterWaves },
			{ "OnWaterBodyChanged", &UWaterBodyComponent::execOnWaterBodyChanged },
			{ "SetWaterAndUnderWaterPostProcessMaterial", &UWaterBodyComponent::execSetWaterAndUnderWaterPostProcessMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics
	{
		struct WaterBodyComponent_eventGetCollisionComponents_Parms
		{
			bool bInOnlyEnabledComponents;
			TArray<UPrimitiveComponent*> ReturnValue;
		};
		static void NewProp_bInOnlyEnabledComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInOnlyEnabledComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	void Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_bInOnlyEnabledComponents_SetBit(void* Obj)
	{
		((WaterBodyComponent_eventGetCollisionComponents_Parms*)Obj)->bInOnlyEnabledComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_bInOnlyEnabledComponents = { "bInOnlyEnabledComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterBodyComponent_eventGetCollisionComponents_Parms), &Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_bInOnlyEnabledComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetCollisionComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_bInOnlyEnabledComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Returns body's collision components */" },
		{ "CPP_Default_bInOnlyEnabledComponents", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns body's collision components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetCollisionComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::WaterBodyComponent_eventGetCollisionComponents_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics
	{
		struct WaterBodyComponent_eventGetExclusionVolumes_Parms
		{
			TArray<AWaterBodyExclusionVolume*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetExclusionVolumes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/**\n\x09 * Gets the exclusion volume that influence this water body\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Gets the exclusion volume that influence this water body" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetExclusionVolumes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::WaterBodyComponent_eventGetExclusionVolumes_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics
	{
		struct WaterBodyComponent_eventGetIslands_Parms
		{
			TArray<AWaterBodyIsland*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyIsland_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetIslands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/**\n\x09 * Gets the islands that influence this water body\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Gets the islands that influence this water body" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetIslands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::WaterBodyComponent_eventGetIslands_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetIslands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetIslands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics
	{
		struct WaterBodyComponent_eventGetMaxWaveHeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetMaxWaveHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wave" },
		{ "Comment", "/** Returns the max height that this water body's waves can hit. Can be called regardless of whether the water body supports waves or not */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns the max height that this water body's waves can hit. Can be called regardless of whether the water body supports waves or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetMaxWaveHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::WaterBodyComponent_eventGetMaxWaveHeight_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics
	{
		struct WaterBodyComponent_eventGetRiverToLakeTransitionMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetRiverToLakeTransitionMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Returns River to lake transition material instance (For internal use. Please use AWaterBodyRiver instead.) */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns River to lake transition material instance (For internal use. Please use AWaterBodyRiver instead.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetRiverToLakeTransitionMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::WaterBodyComponent_eventGetRiverToLakeTransitionMaterialInstance_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics
	{
		struct WaterBodyComponent_eventGetRiverToOceanTransitionMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetRiverToOceanTransitionMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Returns River to ocean transition material instance (For internal use. Please use AWaterBodyRiver instead.) */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns River to ocean transition material instance (For internal use. Please use AWaterBodyRiver instead.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetRiverToOceanTransitionMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::WaterBodyComponent_eventGetRiverToOceanTransitionMaterialInstance_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics
	{
		struct WaterBodyComponent_eventGetStandardRenderableComponents_Parms
		{
			TArray<UPrimitiveComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetStandardRenderableComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Retrieves the list of primitive components that this water body uses when not being rendered by the water mesh (e.g. the static mesh component used when WaterMeshOverride is specified) */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Retrieves the list of primitive components that this water body uses when not being rendered by the water mesh (e.g. the static mesh component used when WaterMeshOverride is specified)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetStandardRenderableComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::WaterBodyComponent_eventGetStandardRenderableComponents_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics
	{
		struct WaterBodyComponent_eventGetUnderwaterPostProcessMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetUnderwaterPostProcessMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Returns under water post process MID */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns under water post process MID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetUnderwaterPostProcessMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::WaterBodyComponent_eventGetUnderwaterPostProcessMaterialInstance_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics
	{
		struct WaterBodyComponent_eventGetWaterBodyActor_Parms
		{
			AWaterBody* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterBodyActor_Parms, ReturnValue), Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Returns the WaterBodyActor who owns this component */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns the WaterBodyActor who owns this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterBodyActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::WaterBodyComponent_eventGetWaterBodyActor_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics
	{
		struct WaterBodyComponent_eventGetWaterInfoMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterInfoMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Returns water info MID */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns water info MID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterInfoMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::WaterBodyComponent_eventGetWaterInfoMaterialInstance_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics
	{
		struct WaterBodyComponent_eventGetWaterLODMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterLODMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Returns water LOD MID */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns water LOD MID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterLODMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::WaterBodyComponent_eventGetWaterLODMaterialInstance_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics
	{
		struct WaterBodyComponent_eventGetWaterMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Returns water material */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns water material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::WaterBodyComponent_eventGetWaterMaterial_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics
	{
		struct WaterBodyComponent_eventGetWaterMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Returns water MID */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns water MID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::WaterBodyComponent_eventGetWaterMaterialInstance_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics
	{
		struct WaterBodyComponent_eventGetWaterSpline_Parms
		{
			UWaterSplineComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterSpline_Parms, ReturnValue), Z_Construct_UClass_UWaterSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Returns water spline component */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Returns water spline component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::WaterBodyComponent_eventGetWaterSpline_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics
	{
		struct WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms
		{
			FVector InLocation;
			FVector OutWaterSurfaceLocation;
			FVector OutWaterSurfaceNormal;
			FVector OutWaterVelocity;
			float OutWaterDepth;
			bool bIncludeDepth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaterSurfaceLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaterSurfaceNormal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaterVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutWaterDepth;
		static void NewProp_bIncludeDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_InLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_OutWaterSurfaceLocation = { "OutWaterSurfaceLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms, OutWaterSurfaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_OutWaterSurfaceNormal = { "OutWaterSurfaceNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms, OutWaterSurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_OutWaterVelocity = { "OutWaterVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms, OutWaterVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_OutWaterDepth = { "OutWaterDepth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms, OutWaterDepth), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_bIncludeDepth_SetBit(void* Obj)
	{
		((WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms*)Obj)->bIncludeDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_bIncludeDepth = { "bIncludeDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms), &Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_bIncludeDepth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_InLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_OutWaterSurfaceLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_OutWaterSurfaceNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_OutWaterVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_OutWaterDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::NewProp_bIncludeDepth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterBody" },
		{ "CPP_Default_bIncludeDepth", "false" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterSurfaceInfoAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::WaterBodyComponent_eventGetWaterSurfaceInfoAtLocation_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics
	{
		struct WaterBodyComponent_eventGetWaterVelocityAtSplineInputKey_Parms
		{
			float InKey;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterVelocityAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterVelocityAtSplineInputKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterBody" },
		{ "Comment", "/*\n\x09 * Spline queries specific to metadata type\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "* Spline queries specific to metadata type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterVelocityAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::WaterBodyComponent_eventGetWaterVelocityAtSplineInputKey_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics
	{
		struct WaterBodyComponent_eventGetWaterWaves_Parms
		{
			UWaterWavesBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventGetWaterWaves_Parms, ReturnValue), Z_Construct_UClass_UWaterWavesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "GetWaterWaves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::WaterBodyComponent_eventGetWaterWaves_Parms), Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics
	{
		struct WaterBodyComponent_eventOnWaterBodyChanged_Parms
		{
			bool bShapeOrPositionChanged;
			bool bWeightmapSettingsChanged;
		};
		static void NewProp_bShapeOrPositionChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShapeOrPositionChanged;
		static void NewProp_bWeightmapSettingsChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeightmapSettingsChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::NewProp_bShapeOrPositionChanged_SetBit(void* Obj)
	{
		((WaterBodyComponent_eventOnWaterBodyChanged_Parms*)Obj)->bShapeOrPositionChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::NewProp_bShapeOrPositionChanged = { "bShapeOrPositionChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterBodyComponent_eventOnWaterBodyChanged_Parms), &Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::NewProp_bShapeOrPositionChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::NewProp_bWeightmapSettingsChanged_SetBit(void* Obj)
	{
		((WaterBodyComponent_eventOnWaterBodyChanged_Parms*)Obj)->bWeightmapSettingsChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::NewProp_bWeightmapSettingsChanged = { "bWeightmapSettingsChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterBodyComponent_eventOnWaterBodyChanged_Parms), &Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::NewProp_bWeightmapSettingsChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::NewProp_bShapeOrPositionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::NewProp_bWeightmapSettingsChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "CPP_Default_bWeightmapSettingsChanged", "false" },
		{ "Deprecated", "5.2" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "OnWaterBodyChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::WaterBodyComponent_eventOnWaterBodyChanged_Parms), Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics
	{
		struct WaterBodyComponent_eventSetWaterAndUnderWaterPostProcessMaterial_Parms
		{
			UMaterialInterface* InWaterMaterial;
			UMaterialInterface* InUnderWaterPostProcessMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWaterMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InUnderWaterPostProcessMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::NewProp_InWaterMaterial = { "InWaterMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventSetWaterAndUnderWaterPostProcessMaterial_Parms, InWaterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::NewProp_InUnderWaterPostProcessMaterial = { "InUnderWaterPostProcessMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBodyComponent_eventSetWaterAndUnderWaterPostProcessMaterial_Parms, InUnderWaterPostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::NewProp_InWaterMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::NewProp_InUnderWaterPostProcessMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyComponent, nullptr, "SetWaterAndUnderWaterPostProcessMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::WaterBodyComponent_eventSetWaterAndUnderWaterPostProcessMaterial_Parms), Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyComponent);
	UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister()
	{
		return UWaterBodyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWaveMaskDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetWaveMaskDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaveHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWaveHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterPostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnderwaterPostProcessSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHLODMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterHLODMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterLODMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterLODMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterPostProcessMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnderwaterPostProcessMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterInfoMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterInfoMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHeightmapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterHeightmapSettings;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerWeightmapSettings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerWeightmapSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerWeightmapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LayerWeightmapSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShapeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsLandscape_MetaData[];
#endif
		static void NewProp_bAffectsLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsLandscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaterBodyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMeshOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterMeshOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysGenerateWaterMeshTiles_MetaData[];
#endif
		static void NewProp_bAlwaysGenerateWaterMeshTiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysGenerateWaterMeshTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapMaterialPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverlapMaterialPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterSplineMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterSplineMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterLODMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterLODMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterPostProcessMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnderwaterPostProcessMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterInfoMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterInfoMID;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WaterBodyIslands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyIslands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WaterBodyIslands;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WaterBodyExclusionVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyExclusionVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WaterBodyExclusionVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Landscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningWaterZone_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OwningWaterZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterZoneOverride_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WaterZoneOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPostProcessSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterNavAreaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaterNavAreaClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedWaterDepth_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FixedWaterDepth;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_Islands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Islands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Islands;
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_ExclusionVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExclusionVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillCollisionUnderWaterBodiesForNavmesh_MetaData[];
#endif
		static void NewProp_bFillCollisionUnderWaterBodiesForNavmesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCollisionUnderWaterBodiesForNavmesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollisions_MetaData[];
#endif
		static void NewProp_bGenerateCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAffectNavigation_MetaData[];
#endif
		static void NewProp_bCanAffectNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAffectNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWaterMesh_MetaData[];
#endif
		static void NewProp_bOverrideWaterMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWaterMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaterBodyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetCollisionComponents, "GetCollisionComponents" }, // 2374839238
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetExclusionVolumes, "GetExclusionVolumes" }, // 647351383
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetIslands, "GetIslands" }, // 54807001
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetMaxWaveHeight, "GetMaxWaveHeight" }, // 3829304227
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance, "GetRiverToLakeTransitionMaterialInstance" }, // 1290972994
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance, "GetRiverToOceanTransitionMaterialInstance" }, // 3524868242
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetStandardRenderableComponents, "GetStandardRenderableComponents" }, // 489435780
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance, "GetUnderwaterPostProcessMaterialInstance" }, // 2109109027
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterBodyActor, "GetWaterBodyActor" }, // 2521494353
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterInfoMaterialInstance, "GetWaterInfoMaterialInstance" }, // 1850139783
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterLODMaterialInstance, "GetWaterLODMaterialInstance" }, // 1888749195
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterial, "GetWaterMaterial" }, // 53242650
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterMaterialInstance, "GetWaterMaterialInstance" }, // 105635258
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterSpline, "GetWaterSpline" }, // 1096607228
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterSurfaceInfoAtLocation, "GetWaterSurfaceInfoAtLocation" }, // 3235892204
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterVelocityAtSplineInputKey, "GetWaterVelocityAtSplineInputKey" }, // 2237139667
		{ &Z_Construct_UFunction_UWaterBodyComponent_GetWaterWaves, "GetWaterWaves" }, // 284897616
		{ &Z_Construct_UFunction_UWaterBodyComponent_OnWaterBodyChanged, "OnWaterBodyChanged" }, // 1614858695
		{ &Z_Construct_UFunction_UWaterBodyComponent_SetWaterAndUnderWaterPostProcessMaterial, "SetWaterAndUnderWaterPostProcessMaterial" }, // 1847279093
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Physics Replication Input AssetUserData Mesh Mobility VirtualTexture Trigger" },
		{ "IncludePath", "WaterBodyComponent.h" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditCondition", "bGenerateCollisions" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_TargetWaveMaskDepth_MetaData[] = {
		{ "Category", "Wave" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Water depth at which waves start being attenuated. */" },
		{ "DisplayName", "Wave Attenuation Water Depth" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Water depth at which waves start being attenuated." },
		{ "UIMax", "10000.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_TargetWaveMaskDepth = { "TargetWaveMaskDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, TargetWaveMaskDepth), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_TargetWaveMaskDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_TargetWaveMaskDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_MaxWaveHeightOffset_MetaData[] = {
		{ "Category", "Wave" },
		{ "Comment", "/** Offset added to the automatically calculated max wave height bounds. Use this in case the automatically calculated max height bounds don't match your waves. This can happen if the water surface is manually altered through World Position Offset or other means.*/" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Offset added to the automatically calculated max wave height bounds. Use this in case the automatically calculated max height bounds don't match your waves. This can happen if the water surface is manually altered through World Position Offset or other means." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_MaxWaveHeightOffset = { "MaxWaveHeightOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, MaxWaveHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_MaxWaveHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_MaxWaveHeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessSettings_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Post process settings to apply when the camera goes underwater (only available when bGenerateCollisions is true because collisions are needed to detect if it's under water).\n\x09Note: Underwater post process material is setup using UnderwaterPostProcessMaterial. */" },
		{ "DisplayAfter", "UnderwaterPostProcessMaterial" },
		{ "EditCondition", "bGenerateCollisions && UnderwaterPostProcessMaterial != nullptr" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Post process settings to apply when the camera goes underwater (only available when bGenerateCollisions is true because collisions are needed to detect if it's under water).\n      Note: Underwater post process material is setup using UnderwaterPostProcessMaterial." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessSettings = { "UnderwaterPostProcessSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, UnderwaterPostProcessSettings), Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessSettings_MetaData)) }; // 2247377170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurveSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "EditCondition", "bAffectsLandscape" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurveSettings = { "CurveSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, CurveSettings), Z_Construct_UScriptStruct_FWaterCurveSettings, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurveSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurveSettings_MetaData)) }; // 1417696216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMaterial = { "WaterMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHLODMaterial_MetaData[] = {
		{ "Category", "HLOD" },
		{ "DisplayName", "Water HLOD Material" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHLODMaterial = { "WaterHLODMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterHLODMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHLODMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHLODMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Water LOD Material" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMaterial = { "WaterLODMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterLODMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Post process material to apply when the camera goes underwater (only available when bGenerateCollisions is true because collisions are needed to detect if it's under water). */" },
		{ "DisplayAfter", "WaterMaterial" },
		{ "EditCondition", "bGenerateCollisions" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Post process material to apply when the camera goes underwater (only available when bGenerateCollisions is true because collisions are needed to detect if it's under water)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMaterial = { "UnderwaterPostProcessMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, UnderwaterPostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayAfter", "WaterMaterial" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMaterial = { "WaterInfoMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterInfoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHeightmapSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "EditCondition", "bAffectsLandscape" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHeightmapSettings = { "WaterHeightmapSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterHeightmapSettings), Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHeightmapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHeightmapSettings_MetaData)) }; // 2800671282
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings_ValueProp = { "LayerWeightmapSettings", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings, METADATA_PARAMS(nullptr, 0) }; // 1437509207
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings_Key_KeyProp = { "LayerWeightmapSettings_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "EditCondition", "bAffectsLandscape" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings = { "LayerWeightmapSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, LayerWeightmapSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings_MetaData)) }; // 1437509207
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ShapeDilation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ShapeDilation = { "ShapeDilation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, ShapeDilation), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ShapeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ShapeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionHeightOffset_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** The distance above the surface of the water where collision checks should still occur. Useful if the post process effect is not activating under really high waves. */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "The distance above the surface of the water where collision checks should still occur. Useful if the post process effect is not activating under really high waves." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionHeightOffset = { "CollisionHeightOffset", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, CollisionHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionHeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAffectsLandscape_MetaData[] = {
		{ "Category", "Terrain" },
		{ "Comment", "/** If enabled, landscape will be deformed based on this water body placed on top of it and landscape height will be considered when determining water depth at runtime */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "If enabled, landscape will be deformed based on this water body placed on top of it and landscape height will be considered when determining water depth at runtime" },
	};
#endif
	void Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAffectsLandscape_SetBit(void* Obj)
	{
		((UWaterBodyComponent*)Obj)->bAffectsLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAffectsLandscape = { "bAffectsLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterBodyComponent), &Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAffectsLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAffectsLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAffectsLandscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIndex_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Unique Id for accessing (wave, ... ) data in GPU buffers */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Unique Id for accessing (wave, ... ) data in GPU buffers" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIndex = { "WaterBodyIndex", nullptr, (EPropertyFlags)0x0020080400222015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterBodyIndex), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMeshOverride_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMeshOverride = { "WaterMeshOverride", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterMeshOverride), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMeshOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMeshOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAlwaysGenerateWaterMeshTiles_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * When this is set to true, the water mesh will always generate tiles for this water body. \n\x09 * For example, this can be useful to generate water tiles even when the water material is invalid, for the case where \"empty\" water tiles are actually desirable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "When this is set to true, the water mesh will always generate tiles for this water body.\nFor example, this can be useful to generate water tiles even when the water material is invalid, for the case where \"empty\" water tiles are actually desirable." },
	};
#endif
	void Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAlwaysGenerateWaterMeshTiles_SetBit(void* Obj)
	{
		((UWaterBodyComponent*)Obj)->bAlwaysGenerateWaterMeshTiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAlwaysGenerateWaterMeshTiles = { "bAlwaysGenerateWaterMeshTiles", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterBodyComponent), &Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAlwaysGenerateWaterMeshTiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAlwaysGenerateWaterMeshTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAlwaysGenerateWaterMeshTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OverlapMaterialPriority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "8191" },
		{ "ClampMin", "-8192" },
		{ "Comment", "/** Higher number is higher priority. If two water bodies overlap and they don't have a transition material specified, this will be used to determine which water body to use the material from. Valid range is -8192 to 8191 */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Higher number is higher priority. If two water bodies overlap and they don't have a transition material specified, this will be used to determine which water body to use the material from. Valid range is -8192 to 8191" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OverlapMaterialPriority = { "OverlapMaterialPriority", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, OverlapMaterialPriority), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OverlapMaterialPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OverlapMaterialPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterSplineMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterSplineMetadata = { "WaterSplineMetadata", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterSplineMetadata), Z_Construct_UClass_UWaterSplineMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterSplineMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterSplineMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "DisplayAfter", "WaterMaterial" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMID = { "WaterMID", nullptr, (EPropertyFlags)0x0024c80000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "DisplayAfter", "WaterLODMaterial" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMID = { "WaterLODMID", nullptr, (EPropertyFlags)0x0024c80000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterLODMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "DisplayAfter", "UnderwaterPostProcessMaterial" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMID = { "UnderwaterPostProcessMID", nullptr, (EPropertyFlags)0x0024c80000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, UnderwaterPostProcessMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "DisplayAfter", "WaterInfoMaterial" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMID = { "WaterInfoMID", nullptr, (EPropertyFlags)0x0024c80000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterInfoMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMID_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIslands_Inner = { "WaterBodyIslands", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyIsland_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIslands_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Islands in this water body*/" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "Islands in this water body" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIslands = { "WaterBodyIslands", nullptr, (EPropertyFlags)0x00240c0000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterBodyIslands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIslands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIslands_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyExclusionVolumes_Inner = { "WaterBodyExclusionVolumes", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyExclusionVolumes_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyExclusionVolumes = { "WaterBodyExclusionVolumes", nullptr, (EPropertyFlags)0x00240c0000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterBodyExclusionVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyExclusionVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyExclusionVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Landscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, Landscape), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Landscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Landscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OwningWaterZone_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OwningWaterZone = { "OwningWaterZone", nullptr, (EPropertyFlags)0x00240c0000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, OwningWaterZone), Z_Construct_UClass_AWaterZone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OwningWaterZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OwningWaterZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterZoneOverride_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterZoneOverride = { "WaterZoneOverride", nullptr, (EPropertyFlags)0x00240c0000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterZoneOverride), Z_Construct_UClass_AWaterZone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterZoneOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterZoneOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurrentPostProcessSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurrentPostProcessSettings = { "CurrentPostProcessSettings", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, CurrentPostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurrentPostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurrentPostProcessSettings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterNavAreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "// The navigation area class that will be generated on nav mesh\n" },
		{ "EditCondition", "bCanAffectNavigation && bGenerateCollisions" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "The navigation area class that will be generated on nav mesh" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterNavAreaClass = { "WaterNavAreaClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, WaterNavAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavAreaBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterNavAreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterNavAreaClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_FixedWaterDepth_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** If the Water Material assigned to this component has Fixed Depth enabled, this is the depth that is passed. */" },
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
		{ "ToolTip", "If the Water Material assigned to this component has Fixed Depth enabled, this is the depth that is passed." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_FixedWaterDepth = { "FixedWaterDepth", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, FixedWaterDepth), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_FixedWaterDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_FixedWaterDepth_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Islands_Inner = { "Islands", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyIsland_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Islands_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Islands = { "Islands", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, Islands_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Islands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Islands_MetaData)) };
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ExclusionVolumes_Inner = { "ExclusionVolumes", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ExclusionVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ExclusionVolumes = { "ExclusionVolumes", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, ExclusionVolumes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ExclusionVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ExclusionVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_SetBit(void* Obj)
	{
		((UWaterBodyComponent*)Obj)->bFillCollisionUnderWaterBodiesForNavmesh_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh = { "bFillCollisionUnderWaterBodiesForNavmesh", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterBodyComponent), &Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyComponent, CollisionProfileName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bGenerateCollisions_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bGenerateCollisions_SetBit(void* Obj)
	{
		((UWaterBodyComponent*)Obj)->bGenerateCollisions_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bGenerateCollisions = { "bGenerateCollisions", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterBodyComponent), &Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bGenerateCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bGenerateCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bGenerateCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bCanAffectNavigation_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bCanAffectNavigation_SetBit(void* Obj)
	{
		((UWaterBodyComponent*)Obj)->bCanAffectNavigation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bCanAffectNavigation = { "bCanAffectNavigation", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterBodyComponent), &Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bCanAffectNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bCanAffectNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bCanAffectNavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bOverrideWaterMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bOverrideWaterMesh_SetBit(void* Obj)
	{
		((UWaterBodyComponent*)Obj)->bOverrideWaterMesh_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bOverrideWaterMesh = { "bOverrideWaterMesh", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterBodyComponent), &Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bOverrideWaterMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bOverrideWaterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bOverrideWaterMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterBodyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_PhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_TargetWaveMaskDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_MaxWaveHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurveSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHLODMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterHeightmapSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_LayerWeightmapSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ShapeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAffectsLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMeshOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bAlwaysGenerateWaterMeshTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OverlapMaterialPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterSplineMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterLODMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_UnderwaterPostProcessMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterInfoMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIslands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyIslands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyExclusionVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterBodyExclusionVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Landscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_OwningWaterZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterZoneOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CurrentPostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_WaterNavAreaClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_FixedWaterDepth,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Islands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_Islands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ExclusionVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_ExclusionVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_CollisionProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bGenerateCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bCanAffectNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyComponent_Statics::NewProp_bOverrideWaterMesh,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyComponent_Statics::ClassParams = {
		&UWaterBodyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaterBodyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyComponent.OuterSingleton, Z_Construct_UClass_UWaterBodyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyComponent>()
	{
		return UWaterBodyComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyComponent);
	UWaterBodyComponent::~UWaterBodyComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWaterBodyComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_Statics::ScriptStructInfo[] = {
		{ FUnderwaterPostProcessSettings::StaticStruct, Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics::NewStructOps, TEXT("UnderwaterPostProcessSettings"), &Z_Registration_Info_UScriptStruct_UnderwaterPostProcessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnderwaterPostProcessSettings), 2247377170U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyComponent, UWaterBodyComponent::StaticClass, TEXT("UWaterBodyComponent"), &Z_Registration_Info_UClass_UWaterBodyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyComponent), 561830467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_131198538(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
