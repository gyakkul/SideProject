// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataGpu() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteResourceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo;
class UScriptStruct* FGPUSpriteLocalVectorFieldInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteLocalVectorFieldInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteLocalVectorFieldInfo>()
{
	return FGPUSpriteLocalVectorFieldInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinInitialRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinInitialRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInitialRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxInitialRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreComponentTransform_MetaData[];
#endif
		static void NewProp_bIgnoreComponentTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreComponentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[];
#endif
		static void NewProp_bTileX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[];
#endif
		static void NewProp_bTileY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[];
#endif
		static void NewProp_bTileZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixDT_MetaData[];
#endif
		static void NewProp_bUseFixDT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixDT;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data needed for local vector fields.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Data needed for local vector fields." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteLocalVectorFieldInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field_MetaData[] = {
		{ "Comment", "/** Local vector field to apply to this emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field to apply to this emitter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Field), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Local vector field transform. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field transform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation_MetaData[] = {
		{ "Comment", "/** Minimum initial rotation. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Minimum initial rotation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation = { "MinInitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, MinInitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation_MetaData[] = {
		{ "Comment", "/** Maximum initial rotation. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Maximum initial rotation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation = { "MaxInitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, MaxInitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Comment", "/** Local vector field rotation rate. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field rotation rate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity_MetaData[] = {
		{ "Comment", "/** Local vector field intensity. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field intensity." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness_MetaData[] = {
		{ "Comment", "/** Local vector field tightness. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field tightness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness = { "Tightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Tightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_MetaData[] = {
		{ "Comment", "/* Ignore Components Transform\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Ignore Components Transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bIgnoreComponentTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform = { "bIgnoreComponentTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_MetaData[] = {
		{ "Comment", "/** Tile vector field in x axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in x axis?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX = { "bTileX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_MetaData[] = {
		{ "Comment", "/** Tile vector field in y axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in y axis?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY = { "bTileY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_MetaData[] = {
		{ "Comment", "/** Tile vector field in z axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in z axis?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ = { "bTileZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_MetaData[] = {
		{ "Comment", "/** Use fix delta time in the simulation? */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Use fix delta time in the simulation?" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_SetBit(void* Obj)
	{
		((FGPUSpriteLocalVectorFieldInfo*)Obj)->bUseFixDT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT = { "bUseFixDT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GPUSpriteLocalVectorFieldInfo",
		sizeof(FGPUSpriteLocalVectorFieldInfo),
		alignof(FGPUSpriteLocalVectorFieldInfo),
		Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.InnerSingleton, Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo;
class UScriptStruct* FGPUSpriteEmitterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteEmitterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteEmitterInfo>()
{
	return FGPUSpriteEmitterInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredModule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RequiredModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnModule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPerUnitModule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnPerUnitModule;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnModules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalVectorField_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVectorField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorFieldScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointAttractorStrength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointAttractorStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resilience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointAttractorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointAttractorPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointAttractorRadiusSq_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointAttractorRadiusSq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvMaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InvMaxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvRotationRateScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InvRotationRateScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxParticleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxParticleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockAxisFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[];
#endif
		static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicColorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicColorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicAlphaScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicAlphaScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The data needed by the runtime to simulate sprites.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The data needed by the runtime to simulate sprites." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteEmitterInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule_MetaData[] = {
		{ "Comment", "/** The required module. Needed for now, but should be divorced from the runtime. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The required module. Needed for now, but should be divorced from the runtime." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule = { "RequiredModule", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, RequiredModule), Z_Construct_UClass_UParticleModuleRequired_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule_MetaData[] = {
		{ "Comment", "/** The spawn module. Needed for now, but should be divorced from the runtime. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The spawn module. Needed for now, but should be divorced from the runtime." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule = { "SpawnModule", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnModule), Z_Construct_UClass_UParticleModuleSpawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule_MetaData[] = {
		{ "Comment", "/** The spawn-per-unit module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The spawn-per-unit module." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule = { "SpawnPerUnitModule", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnPerUnitModule), Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_Inner = { "SpawnModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_MetaData[] = {
		{ "Comment", "/** List of spawn modules that must be evaluated at runtime. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "List of spawn modules that must be evaluated at runtime." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules = { "SpawnModules", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField_MetaData[] = {
		{ "Comment", "/** Local vector field info. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field info." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField = { "LocalVectorField", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, LocalVectorField), Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField_MetaData)) }; // 1029011767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale_MetaData[] = {
		{ "Comment", "/** Per-particle vector field scale. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Per-particle vector field scale." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale = { "VectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, VectorFieldScale), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Comment", "/** Per-particle drag coefficient. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Per-particle drag coefficient." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DragCoefficient), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength_MetaData[] = {
		{ "Comment", "/** Point attractor strength over time. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor strength over time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength = { "PointAttractorStrength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorStrength), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience_MetaData[] = {
		{ "Comment", "/** Damping factor applied to particle collisions. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Damping factor applied to particle collisions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience = { "Resilience", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, Resilience), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration_MetaData[] = {
		{ "Comment", "/** Constant acceleration to apply to particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Constant acceleration to apply to particles." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration = { "ConstantAcceleration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, ConstantAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition_MetaData[] = {
		{ "Comment", "/** Point attractor position. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition = { "PointAttractorPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq_MetaData[] = {
		{ "Comment", "/** Point attractor radius, squared. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor radius, squared." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq = { "PointAttractorRadiusSq", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorRadiusSq), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase_MetaData[] = {
		{ "Comment", "/** Amount by which to offset particles when they are spawned. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Amount by which to offset particles when they are spawned." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase = { "OrbitOffsetBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, OrbitOffsetBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange = { "OrbitOffsetRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, OrbitOffsetRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize_MetaData[] = {
		{ "Comment", "/** One over the maximum size of a sprite particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "One over the maximum size of a sprite particle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize = { "InvMaxSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, InvMaxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale_MetaData[] = {
		{ "Comment", "/** The inverse scale to apply to rotation rate. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The inverse scale to apply to rotation rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale = { "InvRotationRateScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, InvRotationRateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime_MetaData[] = {
		{ "Comment", "/** The maximum lifetime of particles in this emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The maximum lifetime of particles in this emitter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime = { "MaxLifetime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxLifetime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount_MetaData[] = {
		{ "Comment", "/** The maximum number of particles expected for this emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The maximum number of particles expected for this emitter." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount = { "MaxParticleCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxParticleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment_MetaData[] = {
		{ "Comment", "/** The method for aligning the particle based on the camera. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for aligning the particle based on the camera." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment_MetaData)) }; // 3585686584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag_MetaData[] = {
		{ "Comment", "/** The method for locking the particles to a particular axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for locking the particles to a particular axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag = { "LockAxisFlag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, LockAxisFlag), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag_MetaData)) }; // 4266016895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Comment", "/** If true, collisions are enabled for this emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, collisions are enabled for this emitter." },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FGPUSpriteEmitterInfo*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGPUSpriteEmitterInfo), &Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, CollisionMode), Z_Construct_UEnum_Engine_EParticleCollisionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode_MetaData)) }; // 399463388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "Comment", "/** If true, removes the HMD view roll (e.g. in VR) */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
	{
		((FGPUSpriteEmitterInfo*)Obj)->bRemoveHMDRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGPUSpriteEmitterInfo), &Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_Square */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MinFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_FacingCameraPosition */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor_MetaData[] = {
		{ "Comment", "/** Dynamic color scale from the ColorOverLife module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic color scale from the ColorOverLife module." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor = { "DynamicColor", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicColor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha_MetaData[] = {
		{ "Comment", "/** Dynamic alpha scale from the ColorOverLife module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic alpha scale from the ColorOverLife module." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha = { "DynamicAlpha", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicAlpha), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale_MetaData[] = {
		{ "Comment", "/** Dynamic color scale from the ColorScaleOverLife module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic color scale from the ColorScaleOverLife module." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale = { "DynamicColorScale", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicColorScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale_MetaData[] = {
		{ "Comment", "/** Dynamic alpha scale from the ColorScaleOverLife module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic alpha scale from the ColorScaleOverLife module." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale = { "DynamicAlphaScale", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicAlphaScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GPUSpriteEmitterInfo",
		sizeof(FGPUSpriteEmitterInfo),
		alignof(FGPUSpriteEmitterInfo),
		Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.InnerSingleton, Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GPUSpriteResourceData;
class UScriptStruct* FGPUSpriteResourceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteResourceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteResourceData"));
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteResourceData>()
{
	return FGPUSpriteResourceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizedColorSamples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizedColorSamples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuantizedColorSamples;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizedMiscSamples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizedMiscSamples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuantizedMiscSamples;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizedSimulationAttrSamples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizedSimulationAttrSamples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuantizedSimulationAttrSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiscScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MiscScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiscBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MiscBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationAttrCurveScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationAttrCurveScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationAttrCurveBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationAttrCurveBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeBySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SizeBySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitFrequencyBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitFrequencyBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitFrequencyRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitFrequencyRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitPhaseBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitPhaseBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitPhaseRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitPhaseRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldTightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldTightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerParticleVectorFieldScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerParticleVectorFieldScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerParticleVectorFieldBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerParticleVectorFieldBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficientScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficientBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResilienceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResilienceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResilienceBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResilienceBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTimeBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionTimeBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRandomSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRandomSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRandomDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRandomDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OneMinusFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OneMinusFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRateScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraMotionBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockAxisFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[];
#endif
		static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The source data for runtime resources.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The source data for runtime resources." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteResourceData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_Inner = { "QuantizedColorSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_MetaData[] = {
		{ "Comment", "/** Quantized color samples. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized color samples." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples = { "QuantizedColorSamples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedColorSamples), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_Inner = { "QuantizedMiscSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_MetaData[] = {
		{ "Comment", "/** Quantized samples for misc curve attributes to be evaluated at runtime. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized samples for misc curve attributes to be evaluated at runtime." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples = { "QuantizedMiscSamples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedMiscSamples), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_Inner = { "QuantizedSimulationAttrSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_MetaData[] = {
		{ "Comment", "/** Quantized samples for simulation attributes. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized samples for simulation attributes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples = { "QuantizedSimulationAttrSamples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedSimulationAttrSamples), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale_MetaData[] = {
		{ "Comment", "/** Scale and bias to be applied to the color of sprites. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the color of sprites." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ColorScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias = { "ColorBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ColorBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale_MetaData[] = {
		{ "Comment", "/** Scale and bias to be applied to the misc curve. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the misc curve." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale = { "MiscScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, MiscScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias = { "MiscBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, MiscBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale_MetaData[] = {
		{ "Comment", "/** Scale and bias to be applied to the simulation attribute curves. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the simulation attribute curves." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale = { "SimulationAttrCurveScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, SimulationAttrCurveScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias = { "SimulationAttrCurveBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, SimulationAttrCurveBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize_MetaData[] = {
		{ "Comment", "/** Size of subimages. X:SubImageCountH Y:SubImageCountV Z:1/SubImageCountH W:1/SubImageCountV */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Size of subimages. X:SubImageCountH Y:SubImageCountV Z:1/SubImageCountH W:1/SubImageCountV" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, SubImageSize), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed_MetaData[] = {
		{ "Comment", "/** SizeBySpeed parameters. XY=SpeedScale ZW=MaxSpeedScale. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "SizeBySpeed parameters. XY=SpeedScale ZW=MaxSpeedScale." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed = { "SizeBySpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, SizeBySpeed), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration_MetaData[] = {
		{ "Comment", "/** Constant acceleration to apply to particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Constant acceleration to apply to particles." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration = { "ConstantAcceleration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ConstantAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase_MetaData[] = {
		{ "Comment", "/** Offset at which to orbit. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Offset at which to orbit." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase = { "OrbitOffsetBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitOffsetBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange = { "OrbitOffsetRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitOffsetRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase_MetaData[] = {
		{ "Comment", "/** Frequency at which the particle orbits around each axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Frequency at which the particle orbits around each axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase = { "OrbitFrequencyBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitFrequencyBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange = { "OrbitFrequencyRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitFrequencyRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase_MetaData[] = {
		{ "Comment", "/** Phase offset of orbit around each axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Phase offset of orbit around each axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase = { "OrbitPhaseBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitPhaseBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange = { "OrbitPhaseRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitPhaseRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to global vector fields. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to global vector fields." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale = { "GlobalVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, GlobalVectorFieldScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness_MetaData[] = {
		{ "Comment", "/** Tightness override value for the global vector fields. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tightness override value for the global vector fields." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness = { "GlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, GlobalVectorFieldTightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle vector field scale. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle vector field scale." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale = { "PerParticleVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, PerParticleVectorFieldScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias_MetaData[] = {
		{ "Comment", "/** Bias to apply to per-particle vector field scale. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle vector field scale." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias = { "PerParticleVectorFieldBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, PerParticleVectorFieldBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle drag coefficient. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle drag coefficient." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale = { "DragCoefficientScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, DragCoefficientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias_MetaData[] = {
		{ "Comment", "/** Bias to apply to per-particle drag coefficient. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle drag coefficient." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias = { "DragCoefficientBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, DragCoefficientBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle damping factor. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle damping factor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale = { "ResilienceScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ResilienceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias_MetaData[] = {
		{ "Comment", "/** Bias to apply to per-particle damping factor. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle damping factor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias = { "ResilienceBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ResilienceBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle size for collision. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle size for collision." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale = { "CollisionRadiusScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRadiusScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias_MetaData[] = {
		{ "Comment", "/** Bias to apply to per-particle size for collision. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle size for collision." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias = { "CollisionRadiusBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRadiusBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias_MetaData[] = {
		{ "Comment", "/** Bias applied to relative time upon collision. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias applied to relative time upon collision." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias = { "CollisionTimeBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionTimeBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread_MetaData[] = {
		{ "Comment", "/** Control on reflection's random distribution spread. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Control on reflection's random distribution spread." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread = { "CollisionRandomSpread", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRandomSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution_MetaData[] = {
		{ "Comment", "/** Control on reflection's random distribution when colliding. (1=uniform distribution) */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Control on reflection's random distribution when colliding. (1=uniform distribution)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution = { "CollisionRandomDistribution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRandomDistribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction_MetaData[] = {
		{ "Comment", "/** One minus the coefficient of friction applied to particles upon collision. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "One minus the coefficient of friction applied to particles upon collision." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction = { "OneMinusFriction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, OneMinusFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle rotation rate. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle rotation rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale = { "RotationRateScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, RotationRateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount_MetaData[] = {
		{ "Comment", "/** How much to stretch sprites based on camera motion blur. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "How much to stretch sprites based on camera motion blur." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount = { "CameraMotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, CameraMotionBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment_MetaData[] = {
		{ "Comment", "/** Screen alignment for particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Screen alignment for particles." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment_MetaData)) }; // 3585686584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag_MetaData[] = {
		{ "Comment", "/** The method for locking the particles to a particular axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for locking the particles to a particular axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag = { "LockAxisFlag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, LockAxisFlag), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag_MetaData)) }; // 4266016895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Comment", "/** Pivot offset in UV space for placing the verts of each particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Pivot offset in UV space for placing the verts of each particle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, PivotOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "Comment", "/** If true, removes the HMD view roll (e.g. in VR) */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
	{
		((FGPUSpriteResourceData*)Obj)->bRemoveHMDRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGPUSpriteResourceData), &Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_Square */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, MinFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_FacingCameraPosition */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPUSpriteResourceData, MaxFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GPUSpriteResourceData",
		sizeof(FGPUSpriteResourceData),
		alignof(FGPUSpriteResourceData),
		Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteResourceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.InnerSingleton, Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.InnerSingleton;
	}
	void UParticleModuleTypeDataGpu::StaticRegisterNativesUParticleModuleTypeDataGpu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTypeDataGpu);
	UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister()
	{
		return UParticleModuleTypeDataGpu::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResourceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraMotionBlurAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearExistingParticlesOnInit_MetaData[];
#endif
		static void NewProp_bClearExistingParticlesOnInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExistingParticlesOnInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "GPU Sprites" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo_MetaData[] = {
		{ "Comment", "/** Information for runtime simulation. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Information for runtime simulation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo = { "EmitterInfo", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataGpu, EmitterInfo), Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo_MetaData)) }; // 3204252553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData_MetaData[] = {
		{ "Comment", "/** Data used to initialize runtime resources. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Data used to initialize runtime resources." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData = { "ResourceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataGpu, ResourceData), Z_Construct_UScriptStruct_FGPUSpriteResourceData, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData_MetaData)) }; // 3660978020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount_MetaData[] = {
		{ "Category", "ParticleModuleTypeDataGpu" },
		{ "Comment", "/** TEMP: How much to stretch sprites based on camera motion blur. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "TEMP: How much to stretch sprites based on camera motion blur." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount = { "CameraMotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataGpu, CameraMotionBlurAmount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_MetaData[] = {
		{ "Category", "ParticleModuleTypeDataGpu" },
		{ "Comment", "/** When true, all existing partilces are cleared when the emitter is initialized. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "When true, all existing partilces are cleared when the emitter is initialized." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataGpu*)Obj)->bClearExistingParticlesOnInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit = { "bClearExistingParticlesOnInit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataGpu), &Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataGpu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::ClassParams = {
		&UParticleModuleTypeDataGpu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.OuterSingleton, Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataGpu>()
	{
		return UParticleModuleTypeDataGpu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataGpu);
	UParticleModuleTypeDataGpu::~UParticleModuleTypeDataGpu() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ScriptStructInfo[] = {
		{ FGPUSpriteLocalVectorFieldInfo::StaticStruct, Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewStructOps, TEXT("GPUSpriteLocalVectorFieldInfo"), &Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGPUSpriteLocalVectorFieldInfo), 1029011767U) },
		{ FGPUSpriteEmitterInfo::StaticStruct, Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewStructOps, TEXT("GPUSpriteEmitterInfo"), &Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGPUSpriteEmitterInfo), 3204252553U) },
		{ FGPUSpriteResourceData::StaticStruct, Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewStructOps, TEXT("GPUSpriteResourceData"), &Z_Registration_Info_UScriptStruct_GPUSpriteResourceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGPUSpriteResourceData), 3660978020U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTypeDataGpu, UParticleModuleTypeDataGpu::StaticClass, TEXT("UParticleModuleTypeDataGpu"), &Z_Registration_Info_UClass_UParticleModuleTypeDataGpu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTypeDataGpu), 2972525137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_888259291(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
