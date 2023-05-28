// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRequired() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterNormalsMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSortMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleUVFlipMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleUVFlipMode;
	static UEnum* EParticleUVFlipMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleUVFlipMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleUVFlipMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleUVFlipMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleUVFlipMode"));
		}
		return Z_Registration_Info_UEnum_EParticleUVFlipMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleUVFlipMode>()
	{
		return EParticleUVFlipMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enumerators[] = {
		{ "EParticleUVFlipMode::None", (int64)EParticleUVFlipMode::None },
		{ "EParticleUVFlipMode::FlipUV", (int64)EParticleUVFlipMode::FlipUV },
		{ "EParticleUVFlipMode::FlipUOnly", (int64)EParticleUVFlipMode::FlipUOnly },
		{ "EParticleUVFlipMode::FlipVOnly", (int64)EParticleUVFlipMode::FlipVOnly },
		{ "EParticleUVFlipMode::RandomFlipUV", (int64)EParticleUVFlipMode::RandomFlipUV },
		{ "EParticleUVFlipMode::RandomFlipUOnly", (int64)EParticleUVFlipMode::RandomFlipUOnly },
		{ "EParticleUVFlipMode::RandomFlipVOnly", (int64)EParticleUVFlipMode::RandomFlipVOnly },
		{ "EParticleUVFlipMode::RandomFlipUVIndependent", (int64)EParticleUVFlipMode::RandomFlipUVIndependent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enum_MetaDataParams[] = {
		{ "FlipUOnly.Comment", "/** Flips U only on all particles. */" },
		{ "FlipUOnly.Name", "EParticleUVFlipMode::FlipUOnly" },
		{ "FlipUOnly.ToolTip", "Flips U only on all particles." },
		{ "FlipUV.Comment", "/** Flips UV on all particles. */" },
		{ "FlipUV.Name", "EParticleUVFlipMode::FlipUV" },
		{ "FlipUV.ToolTip", "Flips UV on all particles." },
		{ "FlipVOnly.Comment", "/** Flips V only on all particles. */" },
		{ "FlipVOnly.Name", "EParticleUVFlipMode::FlipVOnly" },
		{ "FlipVOnly.ToolTip", "Flips V only on all particles." },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "None.Comment", "/** Flips UV on all particles. */" },
		{ "None.Name", "EParticleUVFlipMode::None" },
		{ "None.ToolTip", "Flips UV on all particles." },
		{ "RandomFlipUOnly.Comment", "/** Flips U only randomly for each particle on spawn. */" },
		{ "RandomFlipUOnly.Name", "EParticleUVFlipMode::RandomFlipUOnly" },
		{ "RandomFlipUOnly.ToolTip", "Flips U only randomly for each particle on spawn." },
		{ "RandomFlipUV.Comment", "/** Flips UV randomly for each particle on spawn. */" },
		{ "RandomFlipUV.Name", "EParticleUVFlipMode::RandomFlipUV" },
		{ "RandomFlipUV.ToolTip", "Flips UV randomly for each particle on spawn." },
		{ "RandomFlipUVIndependent.Comment", "/** Flips U and V independently at random for each particle on spawn. */" },
		{ "RandomFlipUVIndependent.Name", "EParticleUVFlipMode::RandomFlipUVIndependent" },
		{ "RandomFlipUVIndependent.ToolTip", "Flips U and V independently at random for each particle on spawn." },
		{ "RandomFlipVOnly.Comment", "/** Flips V only randomly for each particle on spawn. */" },
		{ "RandomFlipVOnly.Name", "EParticleUVFlipMode::RandomFlipVOnly" },
		{ "RandomFlipVOnly.ToolTip", "Flips V only randomly for each particle on spawn." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleUVFlipMode",
		"EParticleUVFlipMode",
		Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleUVFlipMode()
	{
		if (!Z_Registration_Info_UEnum_EParticleUVFlipMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleUVFlipMode.InnerSingleton, Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleUVFlipMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSortMode;
	static UEnum* EParticleSortMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleSortMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleSortMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSortMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSortMode"));
		}
		return Z_Registration_Info_UEnum_EParticleSortMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSortMode>()
	{
		return EParticleSortMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleSortMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enumerators[] = {
		{ "PSORTMODE_None", (int64)PSORTMODE_None },
		{ "PSORTMODE_ViewProjDepth", (int64)PSORTMODE_ViewProjDepth },
		{ "PSORTMODE_DistanceToView", (int64)PSORTMODE_DistanceToView },
		{ "PSORTMODE_Age_OldestFirst", (int64)PSORTMODE_Age_OldestFirst },
		{ "PSORTMODE_Age_NewestFirst", (int64)PSORTMODE_Age_NewestFirst },
		{ "PSORTMODE_MAX", (int64)PSORTMODE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "PSORTMODE_Age_NewestFirst.Name", "PSORTMODE_Age_NewestFirst" },
		{ "PSORTMODE_Age_OldestFirst.Name", "PSORTMODE_Age_OldestFirst" },
		{ "PSORTMODE_DistanceToView.Name", "PSORTMODE_DistanceToView" },
		{ "PSORTMODE_MAX.Name", "PSORTMODE_MAX" },
		{ "PSORTMODE_None.Name", "PSORTMODE_None" },
		{ "PSORTMODE_ViewProjDepth.Name", "PSORTMODE_ViewProjDepth" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSortMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleSortMode",
		"EParticleSortMode",
		Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleSortMode()
	{
		if (!Z_Registration_Info_UEnum_EParticleSortMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSortMode.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSortMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleSortMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEmitterNormalsMode;
	static UEnum* EEmitterNormalsMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEmitterNormalsMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEmitterNormalsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterNormalsMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterNormalsMode"));
		}
		return Z_Registration_Info_UEnum_EEmitterNormalsMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEmitterNormalsMode>()
	{
		return EEmitterNormalsMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enumerators[] = {
		{ "ENM_CameraFacing", (int64)ENM_CameraFacing },
		{ "ENM_Spherical", (int64)ENM_Spherical },
		{ "ENM_Cylindrical", (int64)ENM_Cylindrical },
		{ "ENM_MAX", (int64)ENM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enum_MetaDataParams[] = {
		{ "ENM_CameraFacing.Comment", "/** Default mode, normals are based on the camera facing geometry. */" },
		{ "ENM_CameraFacing.Name", "ENM_CameraFacing" },
		{ "ENM_CameraFacing.ToolTip", "Default mode, normals are based on the camera facing geometry." },
		{ "ENM_Cylindrical.Comment", "/** Normals are generated from a cylinder going through NormalsSphereCenter, in the direction NormalsCylinderDirection. */" },
		{ "ENM_Cylindrical.Name", "ENM_Cylindrical" },
		{ "ENM_Cylindrical.ToolTip", "Normals are generated from a cylinder going through NormalsSphereCenter, in the direction NormalsCylinderDirection." },
		{ "ENM_MAX.Name", "ENM_MAX" },
		{ "ENM_Spherical.Comment", "/** Normals are generated from a sphere centered at NormalsSphereCenter. */" },
		{ "ENM_Spherical.Name", "ENM_Spherical" },
		{ "ENM_Spherical.ToolTip", "Normals are generated from a sphere centered at NormalsSphereCenter." },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EEmitterNormalsMode",
		"EEmitterNormalsMode",
		Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EEmitterNormalsMode()
	{
		if (!Z_Registration_Info_UEnum_EEmitterNormalsMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEmitterNormalsMode.InnerSingleton, Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEmitterNormalsMode.InnerSingleton;
	}
	void UParticleModuleRequired::StaticRegisterNativesUParticleModuleRequired()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRequired);
	UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister()
	{
		return UParticleModuleRequired::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleRequired_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpace_MetaData[];
#endif
		static void NewProp_bUseLocalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKillOnDeactivate_MetaData[];
#endif
		static void NewProp_bKillOnDeactivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKillOnDeactivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKillOnCompleted_MetaData[];
#endif
		static void NewProp_bKillOnCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKillOnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyEmitterTime_MetaData[];
#endif
		static void NewProp_bUseLegacyEmitterTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyEmitterTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[];
#endif
		static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLargeWorldCoordinates_MetaData[];
#endif
		static void NewProp_bSupportLargeWorldCoordinates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLargeWorldCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitterDurationUseRange_MetaData[];
#endif
		static void NewProp_bEmitterDurationUseRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitterDurationUseRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurstList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BurstList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterDelayLow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterDelayLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstLoopOnly_MetaData[];
#endif
		static void NewProp_bDelayFirstLoopOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstLoopOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleUV_MetaData[];
#endif
		static void NewProp_bScaleUV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitterDelayUseRange_MetaData[];
#endif
		static void NewProp_bEmitterDelayUseRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitterDelayUseRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleBurstMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParticleBurstMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSystemMacroUV_MetaData[];
#endif
		static void NewProp_bOverrideSystemMacroUV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSystemMacroUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDrawCount_MetaData[];
#endif
		static void NewProp_bUseMaxDrawCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDrawCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacitySourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OpacitySourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterNormalsMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmitterNormalsMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData[];
#endif
		static void NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrbitModuleAffectsVelocityAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImages_Horizontal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubImages_Horizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImages_Vertical_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubImages_Vertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomImageTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomImageTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomImageChanges_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomImageChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MacroUVPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MacroUVPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MacroUVRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MacroUVRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UVFlippingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVFlippingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UVFlippingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDurationRecalcEachLoop_MetaData[];
#endif
		static void NewProp_bDurationRecalcEachLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDurationRecalcEachLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalsSphereCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalsSphereCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterLoops_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterLoops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutoutTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CutoutTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDrawCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDrawCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterDurationLow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterDurationLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalsCylinderDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalsCylinderDirection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NamedMaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedMaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedMaterialOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleRequired_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Required" },
		{ "HideCategories", "Object Cascade Object" },
		{ "IncludePath", "Particles/ParticleModuleRequired.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** The material to utilize for the emitter at this LOD level.\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The material to utilize for the emitter at this LOD level." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_Square */" },
		{ "DisplayAfter", "ScreenAlignment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MinFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_FacingCameraPosition */" },
		{ "DisplayAfter", "MinFacingCameraBlendDistance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MaxFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin = { "EmitterOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation = { "EmitterRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** \n\x09 *\x09The screen alignment to utilize for the emitter at this LOD level.\n\x09 *\x09One of the following:\n\x09 *\x09PSA_FacingCameraPosition - Faces the camera position, but is not dependent on the camera rotation.  \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09This method produces more stable particles under camera rotation.\n\x09 *\x09PSA_Square\x09\x09\x09- Uniform scale (via SizeX) facing the camera\n\x09 *\x09PSA_Rectangle\x09\x09- Non-uniform scale (via SizeX and SizeY) facing the camera\n\x09 *\x09PSA_Velocity\x09\x09- Orient the particle towards both the camera and the direction \n\x09 *\x09\x09\x09\x09\x09\x09  the particle is moving. Non-uniform scaling is allowed.\n\x09 *\x09PSA_TypeSpecific\x09- Use the alignment method indicated in the type data module.\n\x09 *\x09PSA_FacingCameraDistanceBlend - Blends between PSA_FacingCameraPosition and PSA_Square over specified distance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The screen alignment to utilize for the emitter at this LOD level.\nOne of the following:\nPSA_FacingCameraPosition - Faces the camera position, but is not dependent on the camera rotation.\n                                                        This method produces more stable particles under camera rotation.\nPSA_Square                      - Uniform scale (via SizeX) facing the camera\nPSA_Rectangle           - Non-uniform scale (via SizeX and SizeY) facing the camera\nPSA_Velocity            - Orient the particle towards both the camera and the direction\n                                          the particle is moving. Non-uniform scaling is allowed.\nPSA_TypeSpecific        - Use the alignment method indicated in the type data module.\nPSA_FacingCameraDistanceBlend - Blends between PSA_FacingCameraPosition and PSA_Square over specified distance." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment_MetaData)) }; // 3585686584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, update the emitter in local space\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayAfter", "MaxFacingCameraBlendDistance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, update the emitter in local space" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bUseLocalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace = { "bUseLocalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, kill the emitter when the particle system is deactivated\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, kill the emitter when the particle system is deactivated" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bKillOnDeactivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate = { "bKillOnDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, kill the emitter when it completes\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, kill the emitter when it completes" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bKillOnCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted = { "bKillOnCompleted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09 *\x09The sorting mode to use for this emitter.\n\x09 *\x09PSORTMODE_None\x09\x09\x09\x09- No sorting required.\n\x09 *\x09PSORTMODE_ViewProjDepth\x09\x09- Sort by view projected depth of the particle.\n\x09 *\x09PSORTMODE_DistanceToView\x09- Sort by distance of particle to view in world space.\n\x09 *\x09PSORTMODE_Age_OldestFirst\x09- Sort by age, oldest drawn first.\n\x09 *\x09PSORTMODE_Age_NewestFirst\x09- Sort by age, newest drawn first.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The sorting mode to use for this emitter.\nPSORTMODE_None                          - No sorting required.\nPSORTMODE_ViewProjDepth         - Sort by view projected depth of the particle.\nPSORTMODE_DistanceToView        - Sort by distance of particle to view in world space.\nPSORTMODE_Age_OldestFirst       - Sort by age, oldest drawn first.\nPSORTMODE_Age_NewestFirst       - Sort by age, newest drawn first." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, SortMode), Z_Construct_UEnum_Engine_EParticleSortMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode_MetaData)) }; // 1452323673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09 *\x09If true, the EmitterTime for the emitter will be calculated by\n\x09 *\x09modulating the SecondsSinceCreation by the EmitterDuration. As\n\x09 *\x09this can lead to issues w/ looping and variable duration, a new\n\x09 *\x09""approach has been implemented. \n\x09 *\x09If false, this new approach is utilized, and the EmitterTime is\n\x09 *\x09simply incremented by DeltaTime each tick. When the emitter \n\x09 *\x09loops, it adjusts the EmitterTime by the current EmitterDuration\n\x09 *\x09resulting in proper looping/delay behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, the EmitterTime for the emitter will be calculated by\nmodulating the SecondsSinceCreation by the EmitterDuration. As\nthis can lead to issues w/ looping and variable duration, a new\napproach has been implemented.\nIf false, this new approach is utilized, and the EmitterTime is\nsimply incremented by DeltaTime each tick. When the emitter\nloops, it adjusts the EmitterTime by the current EmitterDuration\nresulting in proper looping/delay behavior." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bUseLegacyEmitterTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime = { "bUseLegacyEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, removes the HMD view roll (e.g. in VR) */" },
		{ "DisplayName", "Remove HMD Roll" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bRemoveHMDRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, gpu simulation positions are offset to support double precision vectors. Cpu sims always support large world coordinates. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, gpu simulation positions are offset to support double precision vectors. Cpu sims always support large world coordinates." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bSupportLargeWorldCoordinates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates = { "bSupportLargeWorldCoordinates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/**\n\x09 *\x09If true, select the emitter duration from the range\n\x09 *\x09\x09[EmitterDurationLow..EmitterDuration]\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, select the emitter duration from the range\n        [EmitterDurationLow..EmitterDuration]" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bEmitterDurationUseRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange = { "bEmitterDurationUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/** \n\x09 *\x09How long, in seconds, the emitter will run before looping.\n\x09 */" },
		{ "DisplayAfter", "bRemoveHMDRoll" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "How long, in seconds, the emitter will run before looping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration = { "EmitterDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterDuration), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate_MetaData[] = {
		{ "Comment", "/** The rate at which to spawn particles\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The rate at which to spawn particles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate = { "SpawnRate", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, SpawnRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate_MetaData)) }; // 2827880765
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_Inner = { "BurstList", nullptr, (EPropertyFlags)0x0000000000000008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FParticleBurst, METADATA_PARAMS(nullptr, 0) }; // 3860489593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_MetaData[] = {
		{ "Comment", "/** The array of burst entries.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The array of burst entries." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList = { "BurstList", nullptr, (EPropertyFlags)0x0010000002000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, BurstList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_MetaData)) }; // 3860489593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09 *\x09Indicates the time (in seconds) that this emitter should be delayed in the particle system.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Indicates the time (in seconds) that this emitter should be delayed in the particle system." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay = { "EmitterDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterDelay), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/** \n\x09 *\x09The low end of the emitter delay if using a range.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The low end of the emitter delay if using a range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow = { "EmitterDelayLow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterDelayLow), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09 *\x09If true, the emitter will be delayed only on the first loop.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, the emitter will be delayed only on the first loop." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bDelayFirstLoopOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly = { "bDelayFirstLoopOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** \n\x09 *\x09The interpolation method to used for the SubUV image selection.\n\x09 *\x09One of the following:\n\x09 *\x09PSUVIM_None\x09\x09\x09- Do not apply SubUV modules to this emitter. \n\x09 *\x09PSUVIM_Linear\x09\x09- Smoothly transition between sub-images in the given order, \n\x09 *\x09\x09\x09\x09\x09\x09  with no blending between the current and the next\n\x09 *\x09PSUVIM_Linear_Blend\x09- Smoothly transition between sub-images in the given order, \n\x09 *\x09\x09\x09\x09\x09\x09  blending between the current and the next \n\x09 *\x09PSUVIM_Random\x09\x09- Pick the next image at random, with no blending between \n\x09 *\x09\x09\x09\x09\x09\x09  the current and the next \n\x09 *\x09PSUVIM_Random_Blend\x09- Pick the next image at random, blending between the current \n\x09 *\x09\x09\x09\x09\x09\x09  and the next \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The interpolation method to used for the SubUV image selection.\nOne of the following:\nPSUVIM_None                     - Do not apply SubUV modules to this emitter.\nPSUVIM_Linear           - Smoothly transition between sub-images in the given order,\n                                          with no blending between the current and the next\nPSUVIM_Linear_Blend     - Smoothly transition between sub-images in the given order,\n                                          blending between the current and the next\nPSUVIM_Random           - Pick the next image at random, with no blending between\n                                          the current and the next\nPSUVIM_Random_Blend     - Pick the next image at random, blending between the current\n                                          and the next" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod = { "InterpolationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, InterpolationMethod), Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod_MetaData)) }; // 705126572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** Whether to scale the UV or not - ie, the model wasn't setup with sub uvs\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Whether to scale the UV or not - ie, the model wasn't setup with sub uvs" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bScaleUV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV = { "bScaleUV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09 *\x09If true, select the emitter delay from the range \n\x09 *\x09\x09[EmitterDelayLow..EmitterDelay]\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, select the emitter delay from the range\n        [EmitterDelayLow..EmitterDelay]" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bEmitterDelayUseRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange = { "bEmitterDelayUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod_MetaData[] = {
		{ "Comment", "/** The method to utilize when burst-emitting particles\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The method to utilize when burst-emitting particles" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod = { "ParticleBurstMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, ParticleBurstMethod), Z_Construct_UEnum_Engine_EParticleBurstMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod_MetaData)) }; // 2836185684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "Comment", "/** Override the system MacroUV settings                                            */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Override the system MacroUV settings" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bOverrideSystemMacroUV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV = { "bOverrideSystemMacroUV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09If true, use the MaxDrawCount to limit the number of particles rendered.\n\x09 *\x09NOTE: This does not limit the number spawned/updated, only what is drawn.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, use the MaxDrawCount to limit the number of particles rendered.\nNOTE: This does not limit the number spawned/updated, only what is drawn." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bUseMaxDrawCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount = { "bUseMaxDrawCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode = { "OpacitySourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, OpacitySourceMode), Z_Construct_UEnum_Engine_EOpacitySourceMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode_MetaData)) }; // 4187087167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode_MetaData[] = {
		{ "Category", "Normals" },
		{ "Comment", "/** Normal generation mode for this emitter LOD. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Normal generation mode for this emitter LOD." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode = { "EmitterNormalsMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterNormalsMode), Z_Construct_UEnum_Engine_EEmitterNormalsMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode_MetaData)) }; // 1440166663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09* Ensures that movement generated from the orbit module is applied to velocity-aligned particles\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Ensures that movement generated from the orbit module is applied to velocity-aligned particles" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bOrbitModuleAffectsVelocityAlignment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment = { "bOrbitModuleAffectsVelocityAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** The number of sub-images horizontally in the texture\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of sub-images horizontally in the texture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal = { "SubImages_Horizontal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, SubImages_Horizontal), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** The number of sub-images vertically in the texture\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of sub-images vertically in the texture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical = { "SubImages_Vertical", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, SubImages_Vertical), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The amount of time (particle-relative, 0.0 to 1.0) to 'lock' on a random sub image\n\x09 *\x09    0.0 = change every frame\n\x09 *      1.0 = select a random image at spawn and hold for the life of the particle\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The amount of time (particle-relative, 0.0 to 1.0) to 'lock' on a random sub image\n    0.0 = change every frame\n1.0 = select a random image at spawn and hold for the life of the particle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime = { "RandomImageTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, RandomImageTime), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** The number of times to change a random image over the life of the particle.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of times to change a random image over the life of the particle." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges = { "RandomImageChanges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, RandomImageChanges), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "Comment", "/** Local space position that UVs generated with the ParticleMacroUV material node will be centered on. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Local space position that UVs generated with the ParticleMacroUV material node will be centered on." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition = { "MacroUVPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MacroUVPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "Comment", "/** World space radius that UVs generated with the ParticleMacroUV material node will tile based on. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "World space radius that UVs generated with the ParticleMacroUV material node will tile based on." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius = { "MacroUVRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MacroUVRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Controls UV Flipping for this emitter.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Controls UV Flipping for this emitter." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode = { "UVFlippingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, UVFlippingMode), Z_Construct_UEnum_Engine_EParticleUVFlipMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_MetaData)) }; // 3391079786
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "Comment", "/**\n\x09* More bounding vertices results in reduced overdraw, but adds more triangle overhead.\n\x09* The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\n\x09* and when the particles using the texture will be few and large.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode = { "BoundingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, BoundingMode), Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode_MetaData)) }; // 1272199695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/**\n\x09 *\x09If true, recalculate the emitter duration on each loop.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, recalculate the emitter duration on each loop." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bDurationRecalcEachLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop = { "bDurationRecalcEachLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter_MetaData[] = {
		{ "Category", "Normals" },
		{ "Comment", "/** \n\x09 * When EmitterNormalsMode is ENM_Spherical, particle normals are created to face away from NormalsSphereCenter. \n\x09 * NormalsSphereCenter is in local space.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "When EmitterNormalsMode is ENM_Spherical, particle normals are created to face away from NormalsSphereCenter.\nNormalsSphereCenter is in local space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter = { "NormalsSphereCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, NormalsSphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "Comment", "/**\n\x09* Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\n\x09* Raising this threshold slightly can reduce overdraw in particles using this animation asset.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\nRaising this threshold slightly can reduce overdraw in particles using this animation asset." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold = { "AlphaThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, AlphaThreshold), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/** The number of times to loop the emitter.\n\x09 *\x09""0 indicates loop continuously\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of times to loop the emitter.\n    0 indicates loop continuously" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops = { "EmitterLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterLoops), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "Comment", "/**\n\x09* Texture to generate bounding geometry from.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Texture to generate bounding geometry from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture = { "CutoutTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, CutoutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09The maximum number of particles to DRAW for this emitter.\n\x09 *\x09If set to 0, it will use whatever number are present.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The maximum number of particles to DRAW for this emitter.\nIf set to 0, it will use whatever number are present." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount = { "MaxDrawCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MaxDrawCount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/**\n\x09 *\x09The low end of the emitter duration if using a range.\n\x09 */" },
		{ "DisplayAfter", "EmitterDuration" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The low end of the emitter duration if using a range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow = { "EmitterDurationLow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterDurationLow), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection_MetaData[] = {
		{ "Category", "Normals" },
		{ "Comment", "/** \n\x09 * When EmitterNormalsMode is ENM_Cylindrical, \n\x09 * particle normals are created to face away from the cylinder going through NormalsSphereCenter in the direction NormalsCylinderDirection. \n\x09 * NormalsCylinderDirection is in local space.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "When EmitterNormalsMode is ENM_Cylindrical,\nparticle normals are created to face away from the cylinder going through NormalsSphereCenter in the direction NormalsCylinderDirection.\nNormalsCylinderDirection is in local space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection = { "NormalsCylinderDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, NormalsCylinderDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_Inner = { "NamedMaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** \n\x09*\x09Named material overrides for this emitter. \n\x09*\x09Overrides this emitter's material(s) with those in the correspondingly named slot(s) of the owning system.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Named material overrides for this emitter.\nOverrides this emitter's material(s) with those in the correspondingly named slot(s) of the owning system." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides = { "NamedMaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleRequired, NamedMaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleRequired_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRequired>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRequired_Statics::ClassParams = {
		&UParticleModuleRequired::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleRequired()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleRequired.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRequired.OuterSingleton, Z_Construct_UClass_UParticleModuleRequired_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleRequired.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleRequired>()
	{
		return UParticleModuleRequired::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRequired);
	UParticleModuleRequired::~UParticleModuleRequired() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UParticleModuleRequired)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::EnumInfo[] = {
		{ EParticleUVFlipMode_StaticEnum, TEXT("EParticleUVFlipMode"), &Z_Registration_Info_UEnum_EParticleUVFlipMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3391079786U) },
		{ EParticleSortMode_StaticEnum, TEXT("EParticleSortMode"), &Z_Registration_Info_UEnum_EParticleSortMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1452323673U) },
		{ EEmitterNormalsMode_StaticEnum, TEXT("EEmitterNormalsMode"), &Z_Registration_Info_UEnum_EEmitterNormalsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1440166663U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRequired, UParticleModuleRequired::StaticClass, TEXT("UParticleModuleRequired"), &Z_Registration_Info_UClass_UParticleModuleRequired, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRequired), 3648457458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_3134001522(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
