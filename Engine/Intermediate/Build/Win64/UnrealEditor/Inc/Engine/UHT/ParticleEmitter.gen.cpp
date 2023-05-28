// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleEmitter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterRenderMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleBurstMethod;
	static UEnum* EParticleBurstMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleBurstMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleBurstMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleBurstMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleBurstMethod"));
		}
		return Z_Registration_Info_UEnum_EParticleBurstMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleBurstMethod>()
	{
		return EParticleBurstMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics::Enumerators[] = {
		{ "EPBM_Instant", (int64)EPBM_Instant },
		{ "EPBM_Interpolated", (int64)EPBM_Interpolated },
		{ "EPBM_MAX", (int64)EPBM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//~=============================================================================\n//\x09""Burst emissions\n//~=============================================================================\n" },
		{ "EPBM_Instant.DisplayName", "Instant" },
		{ "EPBM_Instant.Name", "EPBM_Instant" },
		{ "EPBM_Interpolated.DisplayName", "Interpolated" },
		{ "EPBM_Interpolated.Name", "EPBM_Interpolated" },
		{ "EPBM_MAX.Name", "EPBM_MAX" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "Burst emissions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleBurstMethod",
		"EParticleBurstMethod",
		Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod()
	{
		if (!Z_Registration_Info_UEnum_EParticleBurstMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleBurstMethod.InnerSingleton, Z_Construct_UEnum_Engine_EParticleBurstMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleBurstMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSubUVInterpMethod;
	static UEnum* EParticleSubUVInterpMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleSubUVInterpMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleSubUVInterpMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSubUVInterpMethod"));
		}
		return Z_Registration_Info_UEnum_EParticleSubUVInterpMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSubUVInterpMethod>()
	{
		return EParticleSubUVInterpMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics::Enumerators[] = {
		{ "PSUVIM_None", (int64)PSUVIM_None },
		{ "PSUVIM_Linear", (int64)PSUVIM_Linear },
		{ "PSUVIM_Linear_Blend", (int64)PSUVIM_Linear_Blend },
		{ "PSUVIM_Random", (int64)PSUVIM_Random },
		{ "PSUVIM_Random_Blend", (int64)PSUVIM_Random_Blend },
		{ "PSUVIM_MAX", (int64)PSUVIM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//~=============================================================================\n//\x09SubUV-related\n//~=============================================================================\n" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "PSUVIM_Linear.DisplayName", "Linear" },
		{ "PSUVIM_Linear.Name", "PSUVIM_Linear" },
		{ "PSUVIM_Linear_Blend.DisplayName", "Linear Blend" },
		{ "PSUVIM_Linear_Blend.Name", "PSUVIM_Linear_Blend" },
		{ "PSUVIM_MAX.Name", "PSUVIM_MAX" },
		{ "PSUVIM_None.DisplayName", "None" },
		{ "PSUVIM_None.Name", "PSUVIM_None" },
		{ "PSUVIM_Random.DisplayName", "Random" },
		{ "PSUVIM_Random.Name", "PSUVIM_Random" },
		{ "PSUVIM_Random_Blend.DisplayName", "Random Blend" },
		{ "PSUVIM_Random_Blend.Name", "PSUVIM_Random_Blend" },
		{ "ToolTip", "SubUV-related" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleSubUVInterpMethod",
		"EParticleSubUVInterpMethod",
		Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod()
	{
		if (!Z_Registration_Info_UEnum_EParticleSubUVInterpMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSubUVInterpMethod.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleSubUVInterpMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEmitterRenderMode;
	static UEnum* EEmitterRenderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEmitterRenderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEmitterRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterRenderMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterRenderMode"));
		}
		return Z_Registration_Info_UEnum_EEmitterRenderMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEmitterRenderMode>()
	{
		return EEmitterRenderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics::Enumerators[] = {
		{ "ERM_Normal", (int64)ERM_Normal },
		{ "ERM_Point", (int64)ERM_Point },
		{ "ERM_Cross", (int64)ERM_Cross },
		{ "ERM_LightsOnly", (int64)ERM_LightsOnly },
		{ "ERM_None", (int64)ERM_None },
		{ "ERM_MAX", (int64)ERM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//~=============================================================================\n//\x09""Cascade-related\n//~=============================================================================\n" },
		{ "ERM_Cross.DisplayName", "Cross" },
		{ "ERM_Cross.Name", "ERM_Cross" },
		{ "ERM_LightsOnly.DisplayName", "Lights Only" },
		{ "ERM_LightsOnly.Name", "ERM_LightsOnly" },
		{ "ERM_MAX.Name", "ERM_MAX" },
		{ "ERM_None.DisplayName", "None" },
		{ "ERM_None.Name", "ERM_None" },
		{ "ERM_Normal.DisplayName", "Normal" },
		{ "ERM_Normal.Name", "ERM_Normal" },
		{ "ERM_Point.DisplayName", "Point" },
		{ "ERM_Point.Name", "ERM_Point" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "Cascade-related" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EEmitterRenderMode",
		"EEmitterRenderMode",
		Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EEmitterRenderMode()
	{
		if (!Z_Registration_Info_UEnum_EEmitterRenderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEmitterRenderMode.InnerSingleton, Z_Construct_UEnum_Engine_EEmitterRenderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEmitterRenderMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleBurst;
class UScriptStruct* FParticleBurst::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleBurst.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleBurst.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleBurst, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleBurst"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleBurst.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleBurst>()
{
	return FParticleBurst::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleBurst_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountLow_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleBurst_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleBurst_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleBurst>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ParticleBurst" },
		{ "Comment", "/** The number of particles to burst */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The number of particles to burst" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleBurst, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow_MetaData[] = {
		{ "Category", "ParticleBurst" },
		{ "Comment", "/** If >= 0, use as a range [CountLow..Count] */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If >= 0, use as a range [CountLow..Count]" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow = { "CountLow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleBurst, CountLow), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "ParticleBurst" },
		{ "Comment", "/** The time at which to burst them (0..1: emitter lifetime) */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The time at which to burst them (0..1: emitter lifetime)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleBurst, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleBurst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleBurst_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleBurst",
		sizeof(FParticleBurst),
		alignof(FParticleBurst),
		Z_Construct_UScriptStruct_FParticleBurst_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleBurst_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleBurst.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleBurst.InnerSingleton, Z_Construct_UScriptStruct_FParticleBurst_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleBurst.InnerSingleton;
	}
	void UParticleEmitter::StaticRegisterNativesUParticleEmitter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleEmitter);
	UClass* Z_Construct_UClass_UParticleEmitter_NoRegister()
	{
		return UParticleEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UParticleEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubUVDataOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubUVDataOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterRenderMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmitterRenderMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SignificanceLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignificanceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SignificanceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacySpawningBehavior_MetaData[];
#endif
		static void NewProp_bUseLegacySpawningBehavior_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacySpawningBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertedModules_MetaData[];
#endif
		static void NewProp_ConvertedModules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConvertedModules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSoloing_MetaData[];
#endif
		static void NewProp_bIsSoloing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSoloing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookedOut_MetaData[];
#endif
		static void NewProp_bCookedOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookedOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisabledLODsKeepEmitterAlive_MetaData[];
#endif
		static void NewProp_bDisabledLODsKeepEmitterAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabledLODsKeepEmitterAlive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenInsignficant_MetaData[];
#endif
		static void NewProp_bDisableWhenInsignficant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenInsignficant;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[];
#endif
		static void NewProp_bCollapsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetailMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterEditorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterEditorColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODLevels_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LODLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakActiveParticles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PeakActiveParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialAllocationCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialAllocationCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelSpawnRateScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QualityLevelSpawnRateScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailModeBitmask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DetailModeBitmask;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailModeDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DetailModeDisplay;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleEmitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** The name of the emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The name of the emitter." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, EmitterName), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset = { "SubUVDataOffset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, SubUVDataOffset), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/**\n\x09 *\x09How to render the emitter particles. Can be one of the following:\n\x09 *\x09\x09""ERM_Normal\x09- As the intended sprite/mesh\n\x09 *\x09\x09""ERM_Point\x09- As a 2x2 pixel block with no scaling and the color set in EmitterEditorColor\n\x09 *\x09\x09""ERM_Cross\x09- As a cross of lines, scaled to the size of the particle in EmitterEditorColor\n\x09 *\x09\x09""ERM_None\x09- Do not render\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "How to render the emitter particles. Can be one of the following:\n        ERM_Normal      - As the intended sprite/mesh\n        ERM_Point       - As a 2x2 pixel block with no scaling and the color set in EmitterEditorColor\n        ERM_Cross       - As a cross of lines, scaled to the size of the particle in EmitterEditorColor\n        ERM_None        - Do not render" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode = { "EmitterRenderMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, EmitterRenderMode), Z_Construct_UEnum_Engine_EEmitterRenderMode, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode_MetaData)) }; // 1052609068
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_MetaData[] = {
		{ "Category", "Significance" },
		{ "Comment", "/** The significance level required of this emitter's owner for this emitter to be active. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The significance level required of this emitter's owner for this emitter to be active." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel = { "SignificanceLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, SignificanceLevel), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_MetaData)) }; // 292229255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** If true, maintains some legacy spawning behavior. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If true, maintains some legacy spawning behavior." },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bUseLegacySpawningBehavior = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior = { "bUseLegacySpawningBehavior", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->ConvertedModules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules = { "ConvertedModules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_MetaData[] = {
		{ "Comment", "/** If true, then show only this emitter in the editor */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If true, then show only this emitter in the editor" },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bIsSoloing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing = { "bIsSoloing", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09If true, then this emitter was 'cooked out' by the cooker. \n\x09 *\x09This means it was completely disabled, but to preserve any\n\x09 *\x09indexing schemes, it is left in place.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If true, then this emitter was 'cooked out' by the cooker.\nThis means it was completely disabled, but to preserve any\nindexing schemes, it is left in place." },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bCookedOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut = { "bCookedOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** When true, if the current LOD is disabled the emitter will be kept alive. Otherwise, the emitter will be considered complete if the current LOD is disabled. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "When true, if the current LOD is disabled the emitter will be kept alive. Otherwise, the emitter will be considered complete if the current LOD is disabled." },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bDisabledLODsKeepEmitterAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive = { "bDisabledLODsKeepEmitterAlive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_MetaData[] = {
		{ "Category", "Significance" },
		{ "Comment", "/** When true, emitters deemed insignificant will have their tick and render disabled Instantly. When false they will simple stop spawning new particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "When true, emitters deemed insignificant will have their tick and render disabled Instantly. When false they will simple stop spawning new particles." },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bDisableWhenInsignficant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant = { "bDisableWhenInsignficant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/** This value indicates the emitter should be drawn 'collapsed' in Cascade */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "This value indicates the emitter should be drawn 'collapsed' in Cascade" },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bCollapsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed = { "bCollapsed", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode_MetaData[] = {
		{ "Comment", "/** If detail mode is >= system detail mode, primitive won't be rendered. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If detail mode is >= system detail mode, primitive won't be rendered." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode = { "DetailMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, DetailMode_DEPRECATED), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode_MetaData)) }; // 3777735330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/**\n\x09 *\x09The color of the emitter in the curve editor and debug rendering modes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The color of the emitter in the curve editor and debug rendering modes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor = { "EmitterEditorColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, EmitterEditorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner_MetaData[] = {
		{ "Comment", "//~=============================================================================\n//\x09'Private' data - not required by the editor\n//~=============================================================================\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "'Private' data - not required by the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner = { "LODLevels", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleLODLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_MetaData[] = {
		{ "Comment", "//~=============================================================================\n//\x09'Private' data - not required by the editor\n//~=============================================================================\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "'Private' data - not required by the editor" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels = { "LODLevels", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, LODLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles = { "PeakActiveParticles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, PeakActiveParticles), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/**\n\x09 *\x09Initial allocation count - overrides calculated peak count if > 0\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "Initial allocation count - overrides calculated peak count if > 0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount = { "InitialAllocationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, InitialAllocationCount), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale = { "QualityLevelSpawnRateScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, QualityLevelSpawnRateScale), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Engine.EParticleDetailMode" },
		{ "Category", "Particle" },
		{ "Comment", "/** Detail mode: Set flags reflecting which system detail mode you want the emitter to be ticked and rendered in */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "Detail mode: Set flags reflecting which system detail mode you want the emitter to be ticked and rendered in" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask = { "DetailModeBitmask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, DetailModeBitmask), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay_MetaData[] = {
		{ "Category", "Particle" },
		{ "DisplayName", "Current Detailmodes" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay = { "DetailModeDisplay", nullptr, (EPropertyFlags)0x0010000800022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleEmitter, DetailModeDisplay), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleEmitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleEmitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleEmitter_Statics::ClassParams = {
		&UParticleEmitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleEmitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::PropPointers),
		0,
		0x008810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleEmitter()
	{
		if (!Z_Registration_Info_UClass_UParticleEmitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleEmitter.OuterSingleton, Z_Construct_UClass_UParticleEmitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleEmitter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleEmitter>()
	{
		return UParticleEmitter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleEmitter);
	UParticleEmitter::~UParticleEmitter() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleEmitter)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::EnumInfo[] = {
		{ EParticleBurstMethod_StaticEnum, TEXT("EParticleBurstMethod"), &Z_Registration_Info_UEnum_EParticleBurstMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2836185684U) },
		{ EParticleSubUVInterpMethod_StaticEnum, TEXT("EParticleSubUVInterpMethod"), &Z_Registration_Info_UEnum_EParticleSubUVInterpMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 705126572U) },
		{ EEmitterRenderMode_StaticEnum, TEXT("EEmitterRenderMode"), &Z_Registration_Info_UEnum_EEmitterRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1052609068U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::ScriptStructInfo[] = {
		{ FParticleBurst::StaticStruct, Z_Construct_UScriptStruct_FParticleBurst_Statics::NewStructOps, TEXT("ParticleBurst"), &Z_Registration_Info_UScriptStruct_ParticleBurst, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleBurst), 3860489593U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleEmitter, UParticleEmitter::StaticClass, TEXT("UParticleEmitter"), &Z_Registration_Info_UClass_UParticleEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleEmitter), 3229623790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_2617101196(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
