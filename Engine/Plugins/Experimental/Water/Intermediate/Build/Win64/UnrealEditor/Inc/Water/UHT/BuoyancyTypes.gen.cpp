// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuoyancyTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyancyTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister();
	WATER_API UEnum* Z_Construct_UEnum_Water_EBuoyancyEvent();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyData();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalPontoon();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalPontoon;
class UScriptStruct* FSphericalPontoon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalPontoon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalPontoon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalPontoon, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("SphericalPontoon"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalPontoon.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FSphericalPontoon>()
{
	return FSphericalPontoon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSphericalPontoon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CenterSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFXEnabled_MetaData[];
#endif
		static void NewProp_bFXEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFXEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImmersionDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImmersionDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterPlaneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterPlaneLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterPlaneNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterPlaneNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterSurfacePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterSurfacePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaterBodyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInWater_MetaData[];
#endif
		static void NewProp_bIsInWater_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInWater;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWaterBodyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentWaterBodyComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalPontoon>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterSocket_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** The socket to center this pontoon on. Also used as the name of the pontoon for effects */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "The socket to center this pontoon on. Also used as the name of the pontoon for effects" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterSocket = { "CenterSocket", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, CenterSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** Relative Location of pontoon WRT parent actor. Overridden by Center Socket. */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Relative Location of pontoon WRT parent actor. Overridden by Center Socket." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** The radius of the pontoon */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "The radius of the pontoon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bFXEnabled_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** Should this pontoon be considered as a candidate location for visual/audio effects upon entering water for burst cues? To be implemented by user*/" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Should this pontoon be considered as a candidate location for visual/audio effects upon entering water for burst cues? To be implemented by user" },
	};
#endif
	void Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bFXEnabled_SetBit(void* Obj)
	{
		((FSphericalPontoon*)Obj)->bFXEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bFXEnabled = { "bFXEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSphericalPontoon), &Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bFXEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bFXEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bFXEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_LocalForce_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_LocalForce = { "LocalForce", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, LocalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_LocalForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_LocalForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterLocation_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterLocation = { "CenterLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, CenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_SocketRotation_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_SocketRotation = { "SocketRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, SocketRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_SocketRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_SocketRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterHeight_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterHeight = { "WaterHeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, WaterHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterDepth_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterDepth = { "WaterDepth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, WaterDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_ImmersionDepth_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_ImmersionDepth = { "ImmersionDepth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, ImmersionDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_ImmersionDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_ImmersionDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneLocation_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneLocation = { "WaterPlaneLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, WaterPlaneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneNormal_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneNormal = { "WaterPlaneNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, WaterPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterSurfacePosition_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterSurfacePosition = { "WaterSurfacePosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, WaterSurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterSurfacePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterSurfacePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterVelocity_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterVelocity = { "WaterVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, WaterVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterBodyIndex_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterBodyIndex = { "WaterBodyIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, WaterBodyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterBodyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterBodyIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bIsInWater_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bIsInWater_SetBit(void* Obj)
	{
		((FSphericalPontoon*)Obj)->bIsInWater = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bIsInWater = { "bIsInWater", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSphericalPontoon), &Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bIsInWater_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bIsInWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bIsInWater_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CurrentWaterBodyComponent_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CurrentWaterBodyComponent = { "CurrentWaterBodyComponent", nullptr, (EPropertyFlags)0x001400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPontoon, CurrentWaterBodyComponent), Z_Construct_UClass_UWaterBodyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CurrentWaterBodyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CurrentWaterBodyComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalPontoon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bFXEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_LocalForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CenterLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_SocketRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_ImmersionDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterPlaneNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterSurfacePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_WaterBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_bIsInWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewProp_CurrentWaterBodyComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalPontoon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"SphericalPontoon",
		sizeof(FSphericalPontoon),
		alignof(FSphericalPontoon),
		Z_Construct_UScriptStruct_FSphericalPontoon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPontoon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalPontoon()
	{
		if (!Z_Registration_Info_UScriptStruct_SphericalPontoon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalPontoon.InnerSingleton, Z_Construct_UScriptStruct_FSphericalPontoon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SphericalPontoon.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuoyancyData;
class UScriptStruct* FBuoyancyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuoyancyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuoyancyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuoyancyData, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("BuoyancyData"));
	}
	return Z_Registration_Info_UScriptStruct_BuoyancyData.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FBuoyancyData>()
{
	return FBuoyancyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuoyancyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pontoons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pontoons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pontoons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterPontoonsOnCOM_MetaData[];
#endif
		static void NewProp_bCenterPontoonsOnCOM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterPontoonsOnCOM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyDamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyDamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyDamp2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyDamp2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyRampMinVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyRampMinVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyRampMaxVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyRampMaxVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyRampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyRampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBuoyantForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBuoyantForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDragForcesInWater_MetaData[];
#endif
		static void NewProp_bApplyDragForcesInWater_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDragForcesInWater;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDragSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDragSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRiverForces_MetaData[];
#endif
		static void NewProp_bApplyRiverForces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRiverForces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverPontoonIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RiverPontoonIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterShorePushFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterShorePushFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverTraversalPathWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverTraversalPathWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShorePushForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShorePushForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocityStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterVelocityStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaterForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWaterForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysAllowLateralPush_MetaData[];
#endif
		static void NewProp_bAlwaysAllowLateralPush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysAllowLateralPush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCurrentWhenMovingFastUpstream_MetaData[];
#endif
		static void NewProp_bAllowCurrentWhenMovingFastUpstream_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCurrentWhenMovingFastUpstream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDownstreamAngularRotation_MetaData[];
#endif
		static void NewProp_bApplyDownstreamAngularRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDownstreamAngularRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamAxisOfRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownstreamAxisOfRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamRotationStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownstreamRotationStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamRotationStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownstreamRotationStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamRotationAngularDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownstreamRotationAngularDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownstreamMaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DownstreamMaxAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuoyancyData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_Pontoons_Inner = { "Pontoons", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalPontoon, METADATA_PARAMS(nullptr, 0) }; // 3492598596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_Pontoons_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_Pontoons = { "Pontoons", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, Pontoons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_Pontoons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_Pontoons_MetaData)) }; // 3492598596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bCenterPontoonsOnCOM_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** If true, center pontoons around center of mass when using relative locations\n\x09\x09(not used when pontoon locations are specified via sockets) */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "If true, center pontoons around center of mass when using relative locations\n              (not used when pontoon locations are specified via sockets)" },
	};
#endif
	void Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bCenterPontoonsOnCOM_SetBit(void* Obj)
	{
		((FBuoyancyData*)Obj)->bCenterPontoonsOnCOM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bCenterPontoonsOnCOM = { "bCenterPontoonsOnCOM", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBuoyancyData), &Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bCenterPontoonsOnCOM_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bCenterPontoonsOnCOM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bCenterPontoonsOnCOM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyCoefficient_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** Increases buoyant force applied on each pontoon. */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Increases buoyant force applied on each pontoon." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyCoefficient = { "BuoyancyCoefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, BuoyancyCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** Damping factor to scale damping based on Z velocity. */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Damping factor to scale damping based on Z velocity." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp = { "BuoyancyDamp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, BuoyancyDamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp2_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/**Second Order Damping factor to scale damping based on Z velocity. */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Second Order Damping factor to scale damping based on Z velocity." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp2 = { "BuoyancyDamp2", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, BuoyancyDamp2), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMinVelocity_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** Minimum velocity to start applying a ramp to buoyancy. */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Minimum velocity to start applying a ramp to buoyancy." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMinVelocity = { "BuoyancyRampMinVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, BuoyancyRampMinVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMinVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMinVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMaxVelocity_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** Maximum velocity until which the buoyancy can ramp up. */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Maximum velocity until which the buoyancy can ramp up." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMaxVelocity = { "BuoyancyRampMaxVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, BuoyancyRampMaxVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMaxVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMax_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** Maximum value that buoyancy can ramp to (at or beyond max velocity). */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Maximum value that buoyancy can ramp to (at or beyond max velocity)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMax = { "BuoyancyRampMax", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, BuoyancyRampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxBuoyantForce_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "Comment", "/** Maximum buoyant force in the Up direction. */" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Maximum buoyant force in the Up direction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxBuoyantForce = { "MaxBuoyantForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, MaxBuoyantForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxBuoyantForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxBuoyantForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDragForcesInWater_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDragForcesInWater_SetBit(void* Obj)
	{
		((FBuoyancyData*)Obj)->bApplyDragForcesInWater = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDragForcesInWater = { "bApplyDragForcesInWater", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBuoyancyData), &Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDragForcesInWater_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDragForcesInWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDragForcesInWater_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "EditCondition", "bApplyDragForcesInWater" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, DragCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient2_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "EditCondition", "bApplyDragForcesInWater" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient2 = { "DragCoefficient2", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, DragCoefficient2), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_AngularDragCoefficient_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "EditCondition", "bApplyDragForcesInWater" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_AngularDragCoefficient = { "AngularDragCoefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, AngularDragCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_AngularDragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_AngularDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxDragSpeed_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "EditCondition", "bApplyDragForcesInWater" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxDragSpeed = { "MaxDragSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, MaxDragSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxDragSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxDragSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyRiverForces_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyRiverForces_SetBit(void* Obj)
	{
		((FBuoyancyData*)Obj)->bApplyRiverForces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyRiverForces = { "bApplyRiverForces", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBuoyancyData), &Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyRiverForces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyRiverForces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyRiverForces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverPontoonIndex_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Pontoon to calculate water forces from. Used to calculate lateral push/pull, to grab water velocity for main force calculations from for downstream calculation if possible.*/" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Pontoon to calculate water forces from. Used to calculate lateral push/pull, to grab water velocity for main force calculations from for downstream calculation if possible." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverPontoonIndex = { "RiverPontoonIndex", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, RiverPontoonIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverPontoonIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverPontoonIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterShorePushFactor_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "Comment", "/** Coefficient for nudging objects to shore in Rivers (for perf reasons). Or, set negative to push towards center of river. */" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Coefficient for nudging objects to shore in Rivers (for perf reasons). Or, set negative to push towards center of river." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterShorePushFactor = { "WaterShorePushFactor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, WaterShorePushFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterShorePushFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterShorePushFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverTraversalPathWidth_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "ClampMin", "1.000000" },
		{ "Comment", "/** Path width along the inside of the river which the object should traverse */" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Path width along the inside of the river which the object should traverse" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverTraversalPathWidth = { "RiverTraversalPathWidth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, RiverTraversalPathWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverTraversalPathWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverTraversalPathWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxShorePushForce_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "Comment", "/** Maximum push force that can be applied by riverths towards the center or edge. */" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Maximum push force that can be applied by riverths towards the center or edge." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxShorePushForce = { "MaxShorePushForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, MaxShorePushForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxShorePushForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxShorePushForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterVelocityStrength_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "Comment", "/** Coefficient for applying push force in rivers. */" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Coefficient for applying push force in rivers." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterVelocityStrength = { "WaterVelocityStrength", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, WaterVelocityStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterVelocityStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterVelocityStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxWaterForce_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "Comment", "/** Maximum push force that can be applied by rivers. */" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Maximum push force that can be applied by rivers." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxWaterForce = { "MaxWaterForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, MaxWaterForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxWaterForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxWaterForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAlwaysAllowLateralPush_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "Comment", "/** Allow an object to be pushed laterally regardless of the forward movement speed through the river */" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Allow an object to be pushed laterally regardless of the forward movement speed through the river" },
	};
#endif
	void Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAlwaysAllowLateralPush_SetBit(void* Obj)
	{
		((FBuoyancyData*)Obj)->bAlwaysAllowLateralPush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAlwaysAllowLateralPush = { "bAlwaysAllowLateralPush", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBuoyancyData), &Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAlwaysAllowLateralPush_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAlwaysAllowLateralPush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAlwaysAllowLateralPush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAllowCurrentWhenMovingFastUpstream_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "Comment", "/** Apply the current when moving at high speeds upstream. Disable for vehicles to have more control*/" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Apply the current when moving at high speeds upstream. Disable for vehicles to have more control" },
	};
#endif
	void Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAllowCurrentWhenMovingFastUpstream_SetBit(void* Obj)
	{
		((FBuoyancyData*)Obj)->bAllowCurrentWhenMovingFastUpstream = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAllowCurrentWhenMovingFastUpstream = { "bAllowCurrentWhenMovingFastUpstream", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBuoyancyData), &Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAllowCurrentWhenMovingFastUpstream_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAllowCurrentWhenMovingFastUpstream_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAllowCurrentWhenMovingFastUpstream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDownstreamAngularRotation_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "EditCondition", "bApplyRiverForces" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDownstreamAngularRotation_SetBit(void* Obj)
	{
		((FBuoyancyData*)Obj)->bApplyDownstreamAngularRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDownstreamAngularRotation = { "bApplyDownstreamAngularRotation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBuoyancyData), &Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDownstreamAngularRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDownstreamAngularRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDownstreamAngularRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamAxisOfRotation_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "Comment", "/** The axis with respect to the object that the downstream angular rotation should be aligned */" },
		{ "EditCondition", "bApplyRiverForces && bApplyDownstreamAngularRotation" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "The axis with respect to the object that the downstream angular rotation should be aligned" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamAxisOfRotation = { "DownstreamAxisOfRotation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, DownstreamAxisOfRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamAxisOfRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamAxisOfRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStrength_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Strength of the angular rotation application */" },
		{ "EditCondition", "bApplyRiverForces && bApplyDownstreamAngularRotation" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
		{ "ToolTip", "Strength of the angular rotation application" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStrength = { "DownstreamRotationStrength", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, DownstreamRotationStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStiffness_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "EditCondition", "bApplyRiverForces && bApplyDownstreamAngularRotation" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStiffness = { "DownstreamRotationStiffness", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, DownstreamRotationStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationAngularDamping_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "EditCondition", "bApplyRiverForces && bApplyDownstreamAngularRotation" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationAngularDamping = { "DownstreamRotationAngularDamping", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, DownstreamRotationAngularDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationAngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationAngularDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamMaxAcceleration_MetaData[] = {
		{ "Category", "Buoyancy | River Behavior" },
		{ "EditCondition", "bApplyRiverForces && bApplyDownstreamAngularRotation" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamMaxAcceleration = { "DownstreamMaxAcceleration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuoyancyData, DownstreamMaxAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamMaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamMaxAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuoyancyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_Pontoons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_Pontoons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bCenterPontoonsOnCOM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyDamp2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMinVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMaxVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_BuoyancyRampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxBuoyantForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDragForcesInWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DragCoefficient2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_AngularDragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxDragSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyRiverForces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverPontoonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterShorePushFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_RiverTraversalPathWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxShorePushForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_WaterVelocityStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_MaxWaterForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAlwaysAllowLateralPush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bAllowCurrentWhenMovingFastUpstream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_bApplyDownstreamAngularRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamAxisOfRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamRotationAngularDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewProp_DownstreamMaxAcceleration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuoyancyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"BuoyancyData",
		sizeof(FBuoyancyData),
		alignof(FBuoyancyData),
		Z_Construct_UScriptStruct_FBuoyancyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyData()
	{
		if (!Z_Registration_Info_UScriptStruct_BuoyancyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuoyancyData.InnerSingleton, Z_Construct_UScriptStruct_FBuoyancyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuoyancyData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuoyancyEvent;
	static UEnum* EBuoyancyEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBuoyancyEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBuoyancyEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Water_EBuoyancyEvent, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("EBuoyancyEvent"));
		}
		return Z_Registration_Info_UEnum_EBuoyancyEvent.OuterSingleton;
	}
	template<> WATER_API UEnum* StaticEnum<EBuoyancyEvent>()
	{
		return EBuoyancyEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_Water_EBuoyancyEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Water_EBuoyancyEvent_Statics::Enumerators[] = {
		{ "EBuoyancyEvent::EnteredWaterBody", (int64)EBuoyancyEvent::EnteredWaterBody },
		{ "EBuoyancyEvent::ExitedWaterBody", (int64)EBuoyancyEvent::ExitedWaterBody },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Water_EBuoyancyEvent_Statics::Enum_MetaDataParams[] = {
		{ "EnteredWaterBody.Name", "EBuoyancyEvent::EnteredWaterBody" },
		{ "ExitedWaterBody.Name", "EBuoyancyEvent::ExitedWaterBody" },
		{ "ModuleRelativePath", "Public/BuoyancyTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Water_EBuoyancyEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		"EBuoyancyEvent",
		"EBuoyancyEvent",
		Z_Construct_UEnum_Water_EBuoyancyEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EBuoyancyEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Water_EBuoyancyEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EBuoyancyEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Water_EBuoyancyEvent()
	{
		if (!Z_Registration_Info_UEnum_EBuoyancyEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuoyancyEvent.InnerSingleton, Z_Construct_UEnum_Water_EBuoyancyEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBuoyancyEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_Statics::EnumInfo[] = {
		{ EBuoyancyEvent_StaticEnum, TEXT("EBuoyancyEvent"), &Z_Registration_Info_UEnum_EBuoyancyEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 555101903U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_Statics::ScriptStructInfo[] = {
		{ FSphericalPontoon::StaticStruct, Z_Construct_UScriptStruct_FSphericalPontoon_Statics::NewStructOps, TEXT("SphericalPontoon"), &Z_Registration_Info_UScriptStruct_SphericalPontoon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalPontoon), 3492598596U) },
		{ FBuoyancyData::StaticStruct, Z_Construct_UScriptStruct_FBuoyancyData_Statics::NewStructOps, TEXT("BuoyancyData"), &Z_Registration_Info_UScriptStruct_BuoyancyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuoyancyData), 797529163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_1534405384(TEXT("/Script/Water"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
