// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "TerrainCarvingSettings.h"
#include "WaterBodyComponent.h"
#include "WaterBodyHeightmapSettings.h"
#include "WaterBodyWeightmapSettings.h"
#include "WaterCurveSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody();
	WATER_API UClass* Z_Construct_UClass_AWaterBody_NoRegister();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyIsland_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator();
	WATER_API UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBrushActorInterface_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineMetadata_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesBase_NoRegister();
	WATER_API UEnum* Z_Construct_UEnum_Water_EWaterBodyType();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterCurveSettings();
// End Cross Module References
	void UDEPRECATED_WaterBodyGenerator::StaticRegisterNativesUDEPRECATED_WaterBodyGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_WaterBodyGenerator);
	UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_NoRegister()
	{
		return UDEPRECATED_WaterBodyGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// For internal use.\n" },
		{ "IncludePath", "WaterBodyActor.h" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
		{ "ToolTip", "For internal use." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_WaterBodyGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics::ClassParams = {
		&UDEPRECATED_WaterBodyGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x021002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_WaterBodyGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_WaterBodyGenerator.OuterSingleton, Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_WaterBodyGenerator.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UDEPRECATED_WaterBodyGenerator>()
	{
		return UDEPRECATED_WaterBodyGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_WaterBodyGenerator);
	UDEPRECATED_WaterBodyGenerator::~UDEPRECATED_WaterBodyGenerator() {}
	DEFINE_FUNCTION(AWaterBody::execOnWaterBodyChanged)
	{
		P_GET_UBOOL(Z_Param_bShapeOrPositionChanged);
		P_GET_UBOOL(Z_Param_bWeightmapSettingsChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWaterBodyChanged(Z_Param_bShapeOrPositionChanged,Z_Param_bWeightmapSettingsChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetExclusionVolumes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AWaterBodyExclusionVolume*>*)Z_Param__Result=P_THIS->GetExclusionVolumes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetIslands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AWaterBodyIsland*>*)Z_Param__Result=P_THIS->GetIslands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetAudioIntensityAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioIntensityAtSplineInputKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetWaterVelocityVectorAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWaterVelocityVectorAtSplineInputKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetWaterVelocityAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWaterVelocityAtSplineInputKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetWaterMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetWaterMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execSetWaterMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterMaterial(Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetRiverToOceanTransitionMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetRiverToOceanTransitionMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetRiverToLakeTransitionMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetRiverToLakeTransitionMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetWaterBodyComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWaterBodyComponent**)Z_Param__Result=P_THIS->GetWaterBodyComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execSetWaterWaves)
	{
		P_GET_OBJECT(UWaterWavesBase,Z_Param_InWaterWaves);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterWaves(Z_Param_InWaterWaves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetWaterSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWaterSplineComponent**)Z_Param__Result=P_THIS->GetWaterSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBody::execGetWaterBodyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWaterBodyType*)Z_Param__Result=P_THIS->GetWaterBodyType();
		P_NATIVE_END;
	}
	void AWaterBody::StaticRegisterNativesAWaterBody()
	{
		UClass* Class = AWaterBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioIntensityAtSplineInputKey", &AWaterBody::execGetAudioIntensityAtSplineInputKey },
			{ "GetExclusionVolumes", &AWaterBody::execGetExclusionVolumes },
			{ "GetIslands", &AWaterBody::execGetIslands },
			{ "GetRiverToLakeTransitionMaterialInstance", &AWaterBody::execGetRiverToLakeTransitionMaterialInstance },
			{ "GetRiverToOceanTransitionMaterialInstance", &AWaterBody::execGetRiverToOceanTransitionMaterialInstance },
			{ "GetWaterBodyComponent", &AWaterBody::execGetWaterBodyComponent },
			{ "GetWaterBodyType", &AWaterBody::execGetWaterBodyType },
			{ "GetWaterMaterialInstance", &AWaterBody::execGetWaterMaterialInstance },
			{ "GetWaterSpline", &AWaterBody::execGetWaterSpline },
			{ "GetWaterVelocityAtSplineInputKey", &AWaterBody::execGetWaterVelocityAtSplineInputKey },
			{ "GetWaterVelocityVectorAtSplineInputKey", &AWaterBody::execGetWaterVelocityVectorAtSplineInputKey },
			{ "OnWaterBodyChanged", &AWaterBody::execOnWaterBodyChanged },
			{ "SetWaterMaterial", &AWaterBody::execSetWaterMaterial },
			{ "SetWaterWaves", &AWaterBody::execSetWaterWaves },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics
	{
		struct WaterBody_eventGetAudioIntensityAtSplineInputKey_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetAudioIntensityAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetAudioIntensityAtSplineInputKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterBody" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetAudioIntensityAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::WaterBody_eventGetAudioIntensityAtSplineInputKey_Parms), Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics
	{
		struct WaterBody_eventGetExclusionVolumes_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetExclusionVolumes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetExclusionVolumes", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::WaterBody_eventGetExclusionVolumes_Parms), Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetExclusionVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetExclusionVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetIslands_Statics
	{
		struct WaterBody_eventGetIslands_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_GetIslands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyIsland_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWaterBody_GetIslands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetIslands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetIslands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetIslands_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetIslands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetIslands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetIslands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetIslands", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetIslands_Statics::WaterBody_eventGetIslands_Parms), Z_Construct_UFunction_AWaterBody_GetIslands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetIslands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetIslands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetIslands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetIslands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetIslands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics
	{
		struct WaterBody_eventGetRiverToLakeTransitionMaterialInstance_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetRiverToLakeTransitionMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetRiverToLakeTransitionMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::WaterBody_eventGetRiverToLakeTransitionMaterialInstance_Parms), Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics
	{
		struct WaterBody_eventGetRiverToOceanTransitionMaterialInstance_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetRiverToOceanTransitionMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetRiverToOceanTransitionMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::WaterBody_eventGetRiverToOceanTransitionMaterialInstance_Parms), Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics
	{
		struct WaterBody_eventGetWaterBodyComponent_Parms
		{
			UWaterBodyComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetWaterBodyComponent_Parms, ReturnValue), Z_Construct_UClass_UWaterBodyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Returns the water body component */" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
		{ "ToolTip", "Returns the water body component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetWaterBodyComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::WaterBody_eventGetWaterBodyComponent_Parms), Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics
	{
		struct WaterBody_eventGetWaterBodyType_Parms
		{
			EWaterBodyType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetWaterBodyType_Parms, ReturnValue), Z_Construct_UEnum_Water_EWaterBodyType, METADATA_PARAMS(nullptr, 0) }; // 1902955117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Returns the type of body */" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
		{ "ToolTip", "Returns the type of body" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetWaterBodyType", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::WaterBody_eventGetWaterBodyType_Parms), Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetWaterBodyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetWaterBodyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics
	{
		struct WaterBody_eventGetWaterMaterialInstance_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetWaterMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetWaterMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::WaterBody_eventGetWaterMaterialInstance_Parms), Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics
	{
		struct WaterBody_eventGetWaterSpline_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetWaterSpline_Parms, ReturnValue), Z_Construct_UClass_UWaterSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Returns water spline component */" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
		{ "ToolTip", "Returns water spline component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetWaterSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::WaterBody_eventGetWaterSpline_Parms), Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetWaterSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetWaterSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics
	{
		struct WaterBody_eventGetWaterVelocityAtSplineInputKey_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetWaterVelocityAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetWaterVelocityAtSplineInputKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterBody" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetWaterVelocityAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::WaterBody_eventGetWaterVelocityAtSplineInputKey_Parms), Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics
	{
		struct WaterBody_eventGetWaterVelocityVectorAtSplineInputKey_Parms
		{
			float InKey;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetWaterVelocityVectorAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventGetWaterVelocityVectorAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterBody" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "GetWaterVelocityVectorAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::WaterBody_eventGetWaterVelocityVectorAtSplineInputKey_Parms), Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics
	{
		struct WaterBody_eventOnWaterBodyChanged_Parms
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
	void Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::NewProp_bShapeOrPositionChanged_SetBit(void* Obj)
	{
		((WaterBody_eventOnWaterBodyChanged_Parms*)Obj)->bShapeOrPositionChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::NewProp_bShapeOrPositionChanged = { "bShapeOrPositionChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterBody_eventOnWaterBodyChanged_Parms), &Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::NewProp_bShapeOrPositionChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::NewProp_bWeightmapSettingsChanged_SetBit(void* Obj)
	{
		((WaterBody_eventOnWaterBodyChanged_Parms*)Obj)->bWeightmapSettingsChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::NewProp_bWeightmapSettingsChanged = { "bWeightmapSettingsChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterBody_eventOnWaterBodyChanged_Parms), &Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::NewProp_bWeightmapSettingsChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::NewProp_bShapeOrPositionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::NewProp_bWeightmapSettingsChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "CPP_Default_bWeightmapSettingsChanged", "false" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "OnWaterBodyChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::WaterBody_eventOnWaterBodyChanged_Parms), Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics
	{
		struct WaterBody_eventSetWaterMaterial_Parms
		{
			UMaterialInterface* InMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventSetWaterMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "SetWaterMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::WaterBody_eventSetWaterMaterial_Parms), Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_SetWaterMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_SetWaterMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics
	{
		struct WaterBody_eventSetWaterWaves_Parms
		{
			UWaterWavesBase* InWaterWaves;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWaterWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::NewProp_InWaterWaves = { "InWaterWaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBody_eventSetWaterWaves_Parms, InWaterWaves), Z_Construct_UClass_UWaterWavesBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::NewProp_InWaterWaves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBody, nullptr, "SetWaterWaves", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::WaterBody_eventSetWaterWaves_Parms), Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBody_SetWaterWaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBody_SetWaterWaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterBody);
	UClass* Z_Construct_UClass_AWaterBody_NoRegister()
	{
		return AWaterBody::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterSplineMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterSplineMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterBodyComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaterBodyIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WaterBodyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WaterBodyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterWaves_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterWaves;
#if WITH_EDITORONLY_DATA
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillCollisionUnderWaterBodiesForNavmesh_MetaData[];
#endif
		static void NewProp_bFillCollisionUnderWaterBodiesForNavmesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCollisionUnderWaterBodiesForNavmesh;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterPostProcessMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnderwaterPostProcessMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainCarvingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TerrainCarvingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHeightmapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterHeightmapSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerWeightmapSettings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerWeightmapSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerWeightmapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LayerWeightmapSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsLandscape_MetaData[];
#endif
		static void NewProp_bAffectsLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsLandscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollisions_MetaData[];
#endif
		static void NewProp_bGenerateCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWaterMesh_MetaData[];
#endif
		static void NewProp_bOverrideWaterMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWaterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMeshOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterMeshOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapMaterialPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverlapMaterialPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterPostProcessMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnderwaterPostProcessMID;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAffectNavigation_MetaData[];
#endif
		static void NewProp_bCanAffectNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAffectNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterNavAreaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaterNavAreaClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShapeDilation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaterBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaterBody_GetAudioIntensityAtSplineInputKey, "GetAudioIntensityAtSplineInputKey" }, // 3179015928
		{ &Z_Construct_UFunction_AWaterBody_GetExclusionVolumes, "GetExclusionVolumes" }, // 3281706899
		{ &Z_Construct_UFunction_AWaterBody_GetIslands, "GetIslands" }, // 1042891028
		{ &Z_Construct_UFunction_AWaterBody_GetRiverToLakeTransitionMaterialInstance, "GetRiverToLakeTransitionMaterialInstance" }, // 749133350
		{ &Z_Construct_UFunction_AWaterBody_GetRiverToOceanTransitionMaterialInstance, "GetRiverToOceanTransitionMaterialInstance" }, // 3021315148
		{ &Z_Construct_UFunction_AWaterBody_GetWaterBodyComponent, "GetWaterBodyComponent" }, // 4273401584
		{ &Z_Construct_UFunction_AWaterBody_GetWaterBodyType, "GetWaterBodyType" }, // 3574371762
		{ &Z_Construct_UFunction_AWaterBody_GetWaterMaterialInstance, "GetWaterMaterialInstance" }, // 2041434648
		{ &Z_Construct_UFunction_AWaterBody_GetWaterSpline, "GetWaterSpline" }, // 704310099
		{ &Z_Construct_UFunction_AWaterBody_GetWaterVelocityAtSplineInputKey, "GetWaterVelocityAtSplineInputKey" }, // 2321059205
		{ &Z_Construct_UFunction_AWaterBody_GetWaterVelocityVectorAtSplineInputKey, "GetWaterVelocityVectorAtSplineInputKey" }, // 108992190
		{ &Z_Construct_UFunction_AWaterBody_OnWaterBodyChanged, "OnWaterBodyChanged" }, // 3523433765
		{ &Z_Construct_UFunction_AWaterBody_SetWaterMaterial, "SetWaterMaterial" }, // 886462405
		{ &Z_Construct_UFunction_AWaterBody_SetWaterWaves, "SetWaterWaves" }, // 1791889878
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//@todo_water: Remove Blueprintable\n" },
		{ "HideCategories", "Tags Activation Cooking Replication Input Actor AssetUserData" },
		{ "IncludePath", "WaterBodyActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
		{ "ToolTip", "@todo_water: Remove Blueprintable" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_SplineComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "Comment", "/** The spline data attached to this water type. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
		{ "ToolTip", "The spline data attached to this water type." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, SplineComp), Z_Construct_UClass_UWaterSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_SplineComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterSplineMetadata_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterSplineMetadata = { "WaterSplineMetadata", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterSplineMetadata), Z_Construct_UClass_UWaterSplineMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterSplineMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterSplineMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Water,Wave,Rendering,Terrain,Navigation,Physics,Collision,Debug" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyComponent = { "WaterBodyComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterBodyComponent), Z_Construct_UClass_UWaterBodyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "Comment", "/** Unique Id for accessing (wave, ... ) data in GPU buffers */" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
		{ "ToolTip", "Unique Id for accessing (wave, ... ) data in GPU buffers" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyIndex = { "WaterBodyIndex", nullptr, (EPropertyFlags)0x0020080400202014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterBodyIndex), METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyType = { "WaterBodyType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterBodyType), Z_Construct_UEnum_Water_EWaterBodyType, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyType_MetaData)) }; // 1902955117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterWaves_MetaData[] = {
		{ "Category", "Wave" },
		{ "DisplayName", "Waves Source" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
		{ "Tooltip", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterWaves = { "WaterWaves", nullptr, (EPropertyFlags)0x002608000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterWaves), Z_Construct_UClass_UWaterWavesBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterWaves_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, PhysicalMaterial_DEPRECATED), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_TargetWaveMaskDepth_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_TargetWaveMaskDepth = { "TargetWaveMaskDepth", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, TargetWaveMaskDepth_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_TargetWaveMaskDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_TargetWaveMaskDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_MaxWaveHeightOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_MaxWaveHeightOffset = { "MaxWaveHeightOffset", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, MaxWaveHeightOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_MaxWaveHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_MaxWaveHeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBody_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_SetBit(void* Obj)
	{
		((AWaterBody*)Obj)->bFillCollisionUnderWaterBodiesForNavmesh_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh = { "bFillCollisionUnderWaterBodiesForNavmesh", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBody), &Z_Construct_UClass_AWaterBody_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessSettings = { "UnderwaterPostProcessSettings", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, UnderwaterPostProcessSettings_DEPRECATED), Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessSettings_MetaData)) }; // 2247377170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_CurveSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_CurveSettings = { "CurveSettings", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, CurveSettings_DEPRECATED), Z_Construct_UScriptStruct_FWaterCurveSettings, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_CurveSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_CurveSettings_MetaData)) }; // 1417696216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMaterial = { "WaterMaterial", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterMaterial_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMaterial = { "UnderwaterPostProcessMaterial", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, UnderwaterPostProcessMaterial_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_TerrainCarvingSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_TerrainCarvingSettings = { "TerrainCarvingSettings", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, TerrainCarvingSettings_DEPRECATED), Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_TerrainCarvingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_TerrainCarvingSettings_MetaData)) }; // 4033287237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterHeightmapSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterHeightmapSettings = { "WaterHeightmapSettings", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterHeightmapSettings_DEPRECATED), Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterHeightmapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterHeightmapSettings_MetaData)) }; // 2800671282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings_ValueProp = { "LayerWeightmapSettings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings, METADATA_PARAMS(nullptr, 0) }; // 1437509207
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings_Key_KeyProp = { "LayerWeightmapSettings_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings = { "LayerWeightmapSettings", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, LayerWeightmapSettings_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings_MetaData)) }; // 1437509207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_bAffectsLandscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBody_Statics::NewProp_bAffectsLandscape_SetBit(void* Obj)
	{
		((AWaterBody*)Obj)->bAffectsLandscape_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_bAffectsLandscape = { "bAffectsLandscape", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBody), &Z_Construct_UClass_AWaterBody_Statics::NewProp_bAffectsLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_bAffectsLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_bAffectsLandscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_bGenerateCollisions_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBody_Statics::NewProp_bGenerateCollisions_SetBit(void* Obj)
	{
		((AWaterBody*)Obj)->bGenerateCollisions_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_bGenerateCollisions = { "bGenerateCollisions", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBody), &Z_Construct_UClass_AWaterBody_Statics::NewProp_bGenerateCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_bGenerateCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_bGenerateCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_bOverrideWaterMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBody_Statics::NewProp_bOverrideWaterMesh_SetBit(void* Obj)
	{
		((AWaterBody*)Obj)->bOverrideWaterMesh_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_bOverrideWaterMesh = { "bOverrideWaterMesh", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBody), &Z_Construct_UClass_AWaterBody_Statics::NewProp_bOverrideWaterMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_bOverrideWaterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_bOverrideWaterMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMeshOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMeshOverride = { "WaterMeshOverride", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterMeshOverride_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMeshOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMeshOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_OverlapMaterialPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_OverlapMaterialPriority = { "OverlapMaterialPriority", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, OverlapMaterialPriority_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_OverlapMaterialPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_OverlapMaterialPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, CollisionProfileName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMID = { "WaterMID", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterMID_DEPRECATED), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMID = { "UnderwaterPostProcessMID", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, UnderwaterPostProcessMID_DEPRECATED), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMID_MetaData)) };
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_Islands_Inner = { "Islands", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyIsland_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_Islands_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_Islands = { "Islands", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, Islands_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_Islands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_Islands_MetaData)) };
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_ExclusionVolumes_Inner = { "ExclusionVolumes", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_ExclusionVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_ExclusionVolumes = { "ExclusionVolumes", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, ExclusionVolumes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_ExclusionVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_ExclusionVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_bCanAffectNavigation_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBody_Statics::NewProp_bCanAffectNavigation_SetBit(void* Obj)
	{
		((AWaterBody*)Obj)->bCanAffectNavigation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_bCanAffectNavigation = { "bCanAffectNavigation", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBody), &Z_Construct_UClass_AWaterBody_Statics::NewProp_bCanAffectNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_bCanAffectNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_bCanAffectNavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterNavAreaClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterNavAreaClass = { "WaterNavAreaClass", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, WaterNavAreaClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavAreaBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterNavAreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterNavAreaClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBody_Statics::NewProp_ShapeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterBody_Statics::NewProp_ShapeDilation = { "ShapeDilation", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBody, ShapeDilation_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::NewProp_ShapeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::NewProp_ShapeDilation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_SplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterSplineMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterBodyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterWaves,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_PhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_TargetWaveMaskDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_MaxWaveHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_bFillCollisionUnderWaterBodiesForNavmesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_CurveSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_TerrainCarvingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterHeightmapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_LayerWeightmapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_bAffectsLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_bGenerateCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_bOverrideWaterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMeshOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_OverlapMaterialPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_CollisionProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_UnderwaterPostProcessMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_Islands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_Islands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_ExclusionVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_ExclusionVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_bCanAffectNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_WaterNavAreaClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBody_Statics::NewProp_ShapeDilation,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWaterBody_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWaterBrushActorInterface_NoRegister, (int32)VTABLE_OFFSET(AWaterBody, IWaterBrushActorInterface), false },  // 2607518085
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBody>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterBody_Statics::ClassParams = {
		&AWaterBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWaterBody_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBody()
	{
		if (!Z_Registration_Info_UClass_AWaterBody.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterBody.OuterSingleton, Z_Construct_UClass_AWaterBody_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterBody.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<AWaterBody>()
	{
		return AWaterBody::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBody);
	AWaterBody::~AWaterBody() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBody)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator, UDEPRECATED_WaterBodyGenerator::StaticClass, TEXT("UDEPRECATED_WaterBodyGenerator"), &Z_Registration_Info_UClass_UDEPRECATED_WaterBodyGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_WaterBodyGenerator), 3739687244U) },
		{ Z_Construct_UClass_AWaterBody, AWaterBody::StaticClass, TEXT("AWaterBody"), &Z_Registration_Info_UClass_AWaterBody, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterBody), 77703893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_1487349797(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
