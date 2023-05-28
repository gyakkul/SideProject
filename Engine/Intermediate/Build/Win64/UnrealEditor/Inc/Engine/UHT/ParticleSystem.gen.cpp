// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemUpdateMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLODSoloTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedEmitterMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemLOD();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSystemUpdateMode;
	static UEnum* EParticleSystemUpdateMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemUpdateMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSystemUpdateMode"));
		}
		return Z_Registration_Info_UEnum_EParticleSystemUpdateMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSystemUpdateMode>()
	{
		return EParticleSystemUpdateMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::Enumerators[] = {
		{ "EPSUM_RealTime", (int64)EPSUM_RealTime },
		{ "EPSUM_FixedTime", (int64)EPSUM_FixedTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09ParticleSystemUpdateMode\n *\x09""Enumeration indicating the method by which the system should be updated\n */" },
		{ "EPSUM_FixedTime.Comment", "/** FixedTime\x09- update via a fixed time step\x09\x09\x09\x09\x09\x09*/" },
		{ "EPSUM_FixedTime.DisplayName", "Fixed-Time" },
		{ "EPSUM_FixedTime.Name", "EPSUM_FixedTime" },
		{ "EPSUM_FixedTime.ToolTip", "FixedTime      - update via a fixed time step" },
		{ "EPSUM_RealTime.Comment", "/** RealTime\x09- update via the delta time passed in\x09\x09\x09\x09*/" },
		{ "EPSUM_RealTime.DisplayName", "Real-Time" },
		{ "EPSUM_RealTime.Name", "EPSUM_RealTime" },
		{ "EPSUM_RealTime.ToolTip", "RealTime       - update via the delta time passed in" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "ParticleSystemUpdateMode\nEnumeration indicating the method by which the system should be updated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleSystemUpdateMode",
		"EParticleSystemUpdateMode",
		Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleSystemUpdateMode()
	{
		if (!Z_Registration_Info_UEnum_EParticleSystemUpdateMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSystemUpdateMode.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleSystemUpdateMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ParticleSystemLODMethod;
	static UEnum* ParticleSystemLODMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ParticleSystemLODMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemLODMethod"));
		}
		return Z_Registration_Info_UEnum_ParticleSystemLODMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ParticleSystemLODMethod>()
	{
		return ParticleSystemLODMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::Enumerators[] = {
		{ "PARTICLESYSTEMLODMETHOD_Automatic", (int64)PARTICLESYSTEMLODMETHOD_Automatic },
		{ "PARTICLESYSTEMLODMETHOD_DirectSet", (int64)PARTICLESYSTEMLODMETHOD_DirectSet },
		{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic", (int64)PARTICLESYSTEMLODMETHOD_ActivateAutomatic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09ParticleSystemLODMethod\n */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic.Comment", "// LOD level is determined at Activation time, then left alone unless directly set by game code.\n" },
		{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic.DisplayName", "Activate Automatic" },
		{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic.Name", "PARTICLESYSTEMLODMETHOD_ActivateAutomatic" },
		{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic.ToolTip", "LOD level is determined at Activation time, then left alone unless directly set by game code." },
		{ "PARTICLESYSTEMLODMETHOD_Automatic.Comment", "// Automatically set the LOD level, checking every LODDistanceCheckTime seconds.\n" },
		{ "PARTICLESYSTEMLODMETHOD_Automatic.DisplayName", "Automatic" },
		{ "PARTICLESYSTEMLODMETHOD_Automatic.Name", "PARTICLESYSTEMLODMETHOD_Automatic" },
		{ "PARTICLESYSTEMLODMETHOD_Automatic.ToolTip", "Automatically set the LOD level, checking every LODDistanceCheckTime seconds." },
		{ "PARTICLESYSTEMLODMETHOD_DirectSet.Comment", "// LOD level is directly set by the game code.\n" },
		{ "PARTICLESYSTEMLODMETHOD_DirectSet.DisplayName", "Direct Set" },
		{ "PARTICLESYSTEMLODMETHOD_DirectSet.Name", "PARTICLESYSTEMLODMETHOD_DirectSet" },
		{ "PARTICLESYSTEMLODMETHOD_DirectSet.ToolTip", "LOD level is directly set by the game code." },
		{ "ToolTip", "ParticleSystemLODMethod" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ParticleSystemLODMethod",
		"ParticleSystemLODMethod",
		Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod()
	{
		if (!Z_Registration_Info_UEnum_ParticleSystemLODMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ParticleSystemLODMethod.InnerSingleton, Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ParticleSystemLODMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod;
	static UEnum* EParticleSystemOcclusionBoundsMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSystemOcclusionBoundsMethod"));
		}
		return Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSystemOcclusionBoundsMethod>()
	{
		return EParticleSystemOcclusionBoundsMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::Enumerators[] = {
		{ "EPSOBM_None", (int64)EPSOBM_None },
		{ "EPSOBM_ParticleBounds", (int64)EPSOBM_ParticleBounds },
		{ "EPSOBM_CustomBounds", (int64)EPSOBM_CustomBounds },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Occlusion method enumeration */" },
		{ "EPSOBM_CustomBounds.Comment", "/** Use the custom occlusion bounds when determining occlusion */" },
		{ "EPSOBM_CustomBounds.DisplayName", "Custom Bounds" },
		{ "EPSOBM_CustomBounds.Name", "EPSOBM_CustomBounds" },
		{ "EPSOBM_CustomBounds.ToolTip", "Use the custom occlusion bounds when determining occlusion" },
		{ "EPSOBM_None.Comment", "/** Don't determine occlusion on this particle system */" },
		{ "EPSOBM_None.DisplayName", "None" },
		{ "EPSOBM_None.Name", "EPSOBM_None" },
		{ "EPSOBM_None.ToolTip", "Don't determine occlusion on this particle system" },
		{ "EPSOBM_ParticleBounds.Comment", "/** Use the bounds of the particle system component when determining occlusion */" },
		{ "EPSOBM_ParticleBounds.DisplayName", "Particle Bounds" },
		{ "EPSOBM_ParticleBounds.Name", "EPSOBM_ParticleBounds" },
		{ "EPSOBM_ParticleBounds.ToolTip", "Use the bounds of the particle system component when determining occlusion" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Occlusion method enumeration" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleSystemOcclusionBoundsMethod",
		"EParticleSystemOcclusionBoundsMethod",
		Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod()
	{
		if (!Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleSystemLOD;
class UScriptStruct* FParticleSystemLOD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSystemLOD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleSystemLOD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemLOD, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemLOD"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleSystemLOD.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSystemLOD>()
{
	return FParticleSystemLOD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleSystemLOD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure containing per-LOD settings that pertain to the entire UParticleSystem. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Structure containing per-LOD settings that pertain to the entire UParticleSystem." },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemLOD>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleSystemLOD",
		sizeof(FParticleSystemLOD),
		alignof(FParticleSystemLOD),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemLOD()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleSystemLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleSystemLOD.InnerSingleton, Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleSystemLOD.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LODSoloTrack;
class UScriptStruct* FLODSoloTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LODSoloTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LODSoloTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODSoloTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LODSoloTrack"));
	}
	return Z_Registration_Info_UScriptStruct_LODSoloTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLODSoloTrack>()
{
	return FLODSoloTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLODSoloTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoloEnableSetting_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoloEnableSetting_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoloEnableSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODSoloTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Temporary array for tracking 'solo' emitter mode.\n *\x09""Entry will be true if emitter was enabled \n */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Temporary array for tracking 'solo' emitter mode.\nEntry will be true if emitter was enabled" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODSoloTrack>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_Inner = { "SoloEnableSetting", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting = { "SoloEnableSetting", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODSoloTrack, SoloEnableSetting), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODSoloTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODSoloTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LODSoloTrack",
		sizeof(FLODSoloTrack),
		alignof(FLODSoloTrack),
		Z_Construct_UScriptStruct_FLODSoloTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLODSoloTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_LODSoloTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LODSoloTrack.InnerSingleton, Z_Construct_UScriptStruct_FLODSoloTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LODSoloTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedEmitterMaterial;
class UScriptStruct* FNamedEmitterMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedEmitterMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedEmitterMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedEmitterMaterial, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedEmitterMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_NamedEmitterMaterial.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedEmitterMaterial>()
{
	return FNamedEmitterMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedEmitterMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NamedMaterial" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedEmitterMaterial, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "NamedMaterial" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedEmitterMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedEmitterMaterial",
		sizeof(FNamedEmitterMaterial),
		alignof(FNamedEmitterMaterial),
		Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedEmitterMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedEmitterMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedEmitterMaterial.InnerSingleton, Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedEmitterMaterial.InnerSingleton;
	}
	void UFXSystemAsset::StaticRegisterNativesUFXSystemAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFXSystemAsset);
	UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister()
	{
		return UFXSystemAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFXSystemAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxPoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolPrimeSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PoolPrimeSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFXSystemAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFXSystemAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Particles/ParticleSystem.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_MaxPoolSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Max number of components of this system to keep resident in the world component pool. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Max number of components of this system to keep resident in the world component pool." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_MaxPoolSize = { "MaxPoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFXSystemAsset, MaxPoolSize), METADATA_PARAMS(Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_MaxPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_MaxPoolSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_PoolPrimeSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09* How many instances we should use to initially prime the pool.\n\x09* This can amortize runtime activation cost by moving it to load time.\n\x09* Use with care as this could cause large hitches for systems loaded/unloaded during play rather than at level load.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "How many instances we should use to initially prime the pool.\nThis can amortize runtime activation cost by moving it to load time.\nUse with care as this could cause large hitches for systems loaded/unloaded during play rather than at level load." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_PoolPrimeSize = { "PoolPrimeSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFXSystemAsset, PoolPrimeSize), METADATA_PARAMS(Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_PoolPrimeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_PoolPrimeSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFXSystemAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_MaxPoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFXSystemAsset_Statics::NewProp_PoolPrimeSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFXSystemAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFXSystemAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFXSystemAsset_Statics::ClassParams = {
		&UFXSystemAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFXSystemAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFXSystemAsset_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFXSystemAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFXSystemAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFXSystemAsset()
	{
		if (!Z_Registration_Info_UClass_UFXSystemAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFXSystemAsset.OuterSingleton, Z_Construct_UClass_UFXSystemAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFXSystemAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UFXSystemAsset>()
	{
		return UFXSystemAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFXSystemAsset);
	UFXSystemAsset::~UFXSystemAsset() {}
	DEFINE_FUNCTION(UParticleSystem::execContainsEmitterType)
	{
		P_GET_OBJECT(UClass,Z_Param_TypeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsEmitterType(Z_Param_TypeData);
		P_NATIVE_END;
	}
	void UParticleSystem::StaticRegisterNativesUParticleSystem()
	{
		UClass* Class = UParticleSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsEmitterType", &UParticleSystem::execContainsEmitterType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics
	{
		struct ParticleSystem_eventContainsEmitterType_Parms
		{
			UClass* TypeData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_TypeData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_TypeData = { "TypeData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystem_eventContainsEmitterType_Parms, TypeData), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystem_eventContainsEmitterType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParticleSystem_eventContainsEmitterType_Parms), &Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_TypeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle System" },
		{ "Comment", "/** \n\x09Returns true if this system contains an emitter of the pasesd type. \n\x09@ param TypeData - The emitter type to check for. Must be a child class of UParticleModuleTypeDataBase\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Returns true if this system contains an emitter of the pasesd type.\n@ param TypeData - The emitter type to check for. Must be a child class of UParticleModuleTypeDataBase" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystem, nullptr, "ContainsEmitterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::ParticleSystem_eventContainsEmitterType_Parms), Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystem_ContainsEmitterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleSystem);
	UClass* Z_Construct_UClass_UParticleSystem_NoRegister()
	{
		return UParticleSystem::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_FPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateTime_FPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateTime_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTickRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Emitters_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Emitters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbnailAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbnailDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailWarmup_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbnailWarmup;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveEdSetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveEdSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDistanceCheckTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistanceCheckTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MacroUVRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MacroUVRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDistances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODDistances;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorLODSetting_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditorLODSetting;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedRelativeBoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixedRelativeBoundingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsBeforeInactive_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsBeforeInactive;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FloorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorScale3D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorScale3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayLow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientZAxisTowardCamera_MetaData[];
#endif
		static void NewProp_bOrientZAxisTowardCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientZAxisTowardCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedRelativeBoundingBox_MetaData[];
#endif
		static void NewProp_bUseFixedRelativeBoundingBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedRelativeBoundingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldResetPeakCounts_MetaData[];
#endif
		static void NewProp_bShouldResetPeakCounts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldResetPeakCounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPhysics_MetaData[];
#endif
		static void NewProp_bHasPhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRealtimeThumbnail_MetaData[];
#endif
		static void NewProp_bUseRealtimeThumbnail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRealtimeThumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImageOutOfDate_MetaData[];
#endif
		static void NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ThumbnailImageOutOfDate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailImage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDelayRange_MetaData[];
#endif
		static void NewProp_bUseDelayRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDelayRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowManagedTicking_MetaData[];
#endif
		static void NewProp_bAllowManagedTicking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowManagedTicking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivate_MetaData[];
#endif
		static void NewProp_bAutoDeactivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegenerateLODDuplicate_MetaData[];
#endif
		static void NewProp_bRegenerateLODDuplicate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegenerateLODDuplicate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemUpdateMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SystemUpdateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InsignificantReaction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsignificantReaction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InsignificantReaction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionBoundsMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionBoundsMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxSignificanceLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSignificanceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxSignificanceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenTicks_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MinTimeBetweenTicks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsignificanceDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InsignificanceDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MacroUVPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MacroUVPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOcclusionBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOcclusionBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoloTracking_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoloTracking_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoloTracking;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamedMaterialSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedMaterialSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedMaterialSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFXSystemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParticleSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParticleSystem_ContainsEmitterType, "ContainsEmitterType" }, // 1452945895
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A ParticleSystem is a complete particle effect that contains any number of ParticleEmitters. By allowing multiple emitters\n * in a system, the designer can create elaborate particle effects that are held in a single system. Once created using\n * Cascade, a ParticleSystem can then be inserted into a level or created in script.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleSystem.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "A ParticleSystem is a complete particle effect that contains any number of ParticleEmitters. By allowing multiple emitters\nin a system, the designer can create elaborate particle effects that are held in a single system. Once created using\nCascade, a ParticleSystem can then be inserted into a level or created in script." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "Comment", "/** UpdateTime_FPS\x09- the frame per second to update at in FixedTime mode\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "UpdateTime_FPS - the frame per second to update at in FixedTime mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS = { "UpdateTime_FPS", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, UpdateTime_FPS), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta_MetaData[] = {
		{ "Comment", "/** UpdateTime_Delta\x09- internal\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "UpdateTime_Delta       - internal" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta = { "UpdateTime_Delta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, UpdateTime_Delta), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "Comment", "/** \n\x09 * WarmupTime - the time to warm-up the particle system when first rendered\x09\n\x09 * Warning: WarmupTime is implemented by simulating the particle system for the time requested upon activation.  \n\x09 * This is extremely prone to cause hitches, especially with large particle counts - use with caution.\n\x09 */" },
		{ "DisplayName", "Warmup Time - beware hitches!" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "WarmupTime - the time to warm-up the particle system when first rendered\nWarning: WarmupTime is implemented by simulating the particle system for the time requested upon activation.\nThis is extremely prone to cause hitches, especially with large particle counts - use with caution." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "Comment", "/**\x09WarmupTickRate - the time step for each tick during warm up.\n\x09\x09Increasing this improves performance. Decreasing, improves accuracy.\n\x09\x09Set to 0 to use the default tick time.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "WarmupTickRate - the time step for each tick during warm up.\n       Increasing this improves performance. Decreasing, improves accuracy.\n       Set to 0 to use the default tick time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate = { "WarmupTickRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, WarmupTickRate), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner_MetaData[] = {
		{ "Comment", "/** Emitters\x09- internal - the array of emitters in the system\x09\x09\x09\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Emitters       - internal - the array of emitters in the system" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_MetaData[] = {
		{ "Comment", "/** Emitters\x09- internal - the array of emitters in the system\x09\x09\x09\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Emitters       - internal - the array of emitters in the system" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent_MetaData[] = {
		{ "Comment", "/** The component used to preview the particle system in Cascade\x09\x09\x09\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The component used to preview the particle system in Cascade" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent = { "PreviewComponent", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, PreviewComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle_MetaData[] = {
		{ "Comment", "/** The angle to use when rendering the thumbnail image\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The angle to use when rendering the thumbnail image" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle = { "ThumbnailAngle", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, ThumbnailAngle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance_MetaData[] = {
		{ "Comment", "/** The distance to place the system when rendering the thumbnail image\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The distance to place the system when rendering the thumbnail image" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance = { "ThumbnailDistance", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, ThumbnailDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** The time to warm-up the system for the thumbnail image\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The time to warm-up the system for the thumbnail image" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup = { "ThumbnailWarmup", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, ThumbnailWarmup), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup_MetaData[] = {
		{ "Comment", "/** Used for curve editor to remember curve-editing setup.\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Used for curve editor to remember curve-editing setup." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup = { "CurveEdSetup", nullptr, (EPropertyFlags)0x0014000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, CurveEdSetup), Z_Construct_UClass_UInterpCurveEdSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/**\n\x09 *\x09How often (in seconds) the system should perform the LOD distance check.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "How often (in seconds) the system should perform the LOD distance check." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime = { "LODDistanceCheckTime", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, LODDistanceCheckTime), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "Comment", "/** World space radius that UVs generated with the ParticleMacroUV material node will tile based on. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "World space radius that UVs generated with the ParticleMacroUV material node will tile based on." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius = { "MacroUVRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, MacroUVRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_Inner = { "LODDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/**\n\x09 *\x09The array of distances for each LOD level in the system.\n\x09 *\x09Used when LODMethod is set to PARTICLESYSTEMLODMETHOD_Automatic.\n\x09 *\n\x09 *\x09""Example: System with 3 LOD levels\n\x09 *\x09\x09LODDistances(0) = 0.0\n\x09 *\x09\x09LODDistances(1) = 2500.0\n\x09 *\x09\x09LODDistances(2) = 5000.0\n\x09 *\n\x09 *\x09\x09In this case, when the system is [   0.0 ..   2499.9] from the camera, LOD level 0 will be used.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09 [2500.0 ..   4999.9] from the camera, LOD level 1 will be used.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09 [5000.0 .. INFINITY] from the camera, LOD level 2 will be used.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The array of distances for each LOD level in the system.\nUsed when LODMethod is set to PARTICLESYSTEMLODMETHOD_Automatic.\n\nExample: System with 3 LOD levels\n        LODDistances(0) = 0.0\n        LODDistances(1) = 2500.0\n        LODDistances(2) = 5000.0\n\n        In this case, when the system is [   0.0 ..   2499.9] from the camera, LOD level 0 will be used.\n                                                                         [2500.0 ..   4999.9] from the camera, LOD level 1 will be used.\n                                                                         [5000.0 .. INFINITY] from the camera, LOD level 2 will be used." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances = { "LODDistances", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, LODDistances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting_MetaData[] = {
		{ "Comment", "/** LOD setting for intepolation (set by Cascade) Range [0..100]\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "LOD setting for intepolation (set by Cascade) Range [0..100]" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting = { "EditorLODSetting", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, EditorLODSetting), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_Inner = { "LODSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FParticleSystemLOD, METADATA_PARAMS(nullptr, 0) }; // 2210614807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings = { "LODSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, LODSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_MetaData)) }; // 2210614807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox_MetaData[] = {
		{ "Category", "Bounds" },
		{ "Comment", "/**\x09""Fixed relative bounding box for particle system.\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Fixed relative bounding box for particle system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox = { "FixedRelativeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, FixedRelativeBoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "Comment", "/**\n\x09 * Number of seconds of emitter not being rendered that need to pass before it\n\x09 * no longer gets ticked/ becomes inactive.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Number of seconds of emitter not being rendered that need to pass before it\nno longer gets ticked/ becomes inactive." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive = { "SecondsBeforeInactive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, SecondsBeforeInactive), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "Comment", "//\n//\x09""Cascade 'floor' mesh information.\n//\n" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Cascade 'floor' mesh information." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, FloorMesh), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition = { "FloorPosition", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, FloorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation = { "FloorRotation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, FloorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale = { "FloorScale", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, FloorScale), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D = { "FloorScale3D", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, FloorScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Comment", "/** The background color to display in Cascade */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The background color to display in Cascade" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/** How long this Particle system should delay when ActivateSystem is called on it. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "How long this Particle system should delay when ActivateSystem is called on it." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, Delay), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/** The low end of the emitter delay if using a range. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The low end of the emitter delay if using a range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow = { "DelayLow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, DelayLow), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "Comment", "/** If true, the system's Z axis will be oriented toward the camera\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "If true, the system's Z axis will be oriented toward the camera" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bOrientZAxisTowardCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera = { "bOrientZAxisTowardCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_MetaData[] = {
		{ "Category", "Bounds" },
		{ "Comment", "/** Whether to use the fixed relative bounding box or calculate it every frame. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Whether to use the fixed relative bounding box or calculate it every frame." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bUseFixedRelativeBoundingBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox = { "bUseFixedRelativeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_MetaData[] = {
		{ "Comment", "/** EDITOR ONLY: Indicates that Cascade would like to have the PeakActiveParticles count reset */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "EDITOR ONLY: Indicates that Cascade would like to have the PeakActiveParticles count reset" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bShouldResetPeakCounts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts = { "bShouldResetPeakCounts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_MetaData[] = {
		{ "Comment", "/** Set during load time to indicate that physics is used... */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Set during load time to indicate that physics is used..." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bHasPhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics = { "bHasPhysics", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Inidicates the old 'real-time' thumbnail rendering should be used\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Inidicates the old 'real-time' thumbnail rendering should be used" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bUseRealtimeThumbnail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail = { "bUseRealtimeThumbnail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData[] = {
		{ "Comment", "/** Internal: Indicates the PSys thumbnail image is out of date\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Internal: Indicates the PSys thumbnail image is out of date" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->ThumbnailImageOutOfDate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate = { "ThumbnailImageOutOfDate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** Internal: The PSys thumbnail image\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Internal: The PSys thumbnail image" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09 *\x09If true, select the emitter delay from the range \n\x09 *\x09\x09[DelayLow..Delay]\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "If true, select the emitter delay from the range\n        [DelayLow..Delay]" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bUseDelayRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange = { "bUseDelayRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Whether or not to allow instances of this system to have their ticks managed." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bAllowManagedTicking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking = { "bAllowManagedTicking", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Auto-deactivate system if all emitters are determined to not spawn particles again, regardless of lifetime." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bAutoDeactivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate = { "bAutoDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09Internal value that tracks the regenerate LOD levels preference.\n\x09 *\x09If true, when autoregenerating LOD levels in code, the low level will\n\x09 *\x09""be a duplicate of the high.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Internal value that tracks the regenerate LOD levels preference.\nIf true, when autoregenerating LOD levels in code, the low level will\nbe a duplicate of the high." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bRegenerateLODDuplicate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate = { "bRegenerateLODDuplicate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode = { "SystemUpdateMode", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, SystemUpdateMode), Z_Construct_UEnum_Engine_EParticleSystemUpdateMode, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode_MetaData)) }; // 987424591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/**\n\x09 *\x09The method of LOD level determination to utilize for this particle system\n\x09 *\x09  PARTICLESYSTEMLODMETHOD_Automatic - Automatically set the LOD level, checking every LODDistanceCheckTime seconds.\n\x09 *    PARTICLESYSTEMLODMETHOD_DirectSet - LOD level is directly set by the game code.\n\x09 *    PARTICLESYSTEMLODMETHOD_ActivateAutomatic - LOD level is determined at Activation time, then left alone unless directly set by game code.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The method of LOD level determination to utilize for this particle system\n  PARTICLESYSTEMLODMETHOD_Automatic - Automatically set the LOD level, checking every LODDistanceCheckTime seconds.\nPARTICLESYSTEMLODMETHOD_DirectSet - LOD level is directly set by the game code.\nPARTICLESYSTEMLODMETHOD_ActivateAutomatic - LOD level is determined at Activation time, then left alone unless directly set by game code." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod = { "LODMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, LODMethod), Z_Construct_UEnum_Engine_ParticleSystemLODMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod_MetaData)) }; // 506550998
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** The reaction this system takes when all emitters are insignificant. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The reaction this system takes when all emitters are insignificant." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction = { "InsignificantReaction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, InsignificantReaction), Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_MetaData)) }; // 3000398132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "Comment", "/**\n\x09 *\x09Which occlusion bounds method to use for this particle system.\n\x09 *\x09""EPSOBM_None - Don't determine occlusion for this system.\n\x09 *\x09""EPSOBM_ParticleBounds - Use the bounds of the component when determining occlusion.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Which occlusion bounds method to use for this particle system.\nEPSOBM_None - Don't determine occlusion for this system.\nEPSOBM_ParticleBounds - Use the bounds of the component when determining occlusion." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod = { "OcclusionBoundsMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, OcclusionBoundsMethod), Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod_MetaData)) }; // 696057256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** The maximum level of significance for emitters in this system. Any emitters with a higher significance will be capped at this significance level. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The maximum level of significance for emitters in this system. Any emitters with a higher significance will be capped at this significance level." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel = { "MaxSignificanceLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, MaxSignificanceLevel), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_MetaData)) }; // 292229255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Minimum duration between ticks; 33=tick at max. 30FPS, 16=60FPS, 8=120FPS" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks = { "MinTimeBetweenTicks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, MinTimeBetweenTicks), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Time delay between all emitters becoming insignificant and the systems insignificant reaction. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Time delay between all emitters becoming insignificant and the systems insignificant reaction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay = { "InsignificanceDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, InsignificanceDelay), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "Comment", "/** Local space position that UVs generated with the ParticleMacroUV material node will be centered on. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Local space position that UVs generated with the ParticleMacroUV material node will be centered on." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition = { "MacroUVPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, MacroUVPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "Comment", "/** The occlusion bounds to use if OcclusionBoundsMethod is set to EPSOBM_CustomBounds */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The occlusion bounds to use if OcclusionBoundsMethod is set to EPSOBM_CustomBounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds = { "CustomOcclusionBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, CustomOcclusionBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_Inner = { "SoloTracking", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLODSoloTrack, METADATA_PARAMS(nullptr, 0) }; // 1483976680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking = { "SoloTracking", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, SoloTracking), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_MetaData)) }; // 1483976680
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_Inner = { "NamedMaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedEmitterMaterial, METADATA_PARAMS(nullptr, 0) }; // 737647213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** \n\x09*\x09""Array of named material slots for use by emitters of this system. \n\x09*\x09""Emitters can use these instead of their own materials by providing the name to the NamedMaterialOverrides property of their required module.\n\x09*\x09These materials can be overridden using CreateNamedDynamicMaterialInstance() on a ParticleSystemComponent.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Array of named material slots for use by emitters of this system.\nEmitters can use these instead of their own materials by providing the name to the NamedMaterialOverrides property of their required module.\nThese materials can be overridden using CreateNamedDynamicMaterialInstance() on a ParticleSystemComponent." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots = { "NamedMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystem, NamedMaterialSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_MetaData)) }; // 737647213
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystem_Statics::ClassParams = {
		&UParticleSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UParticleSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystem()
	{
		if (!Z_Registration_Info_UClass_UParticleSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleSystem.OuterSingleton, Z_Construct_UClass_UParticleSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleSystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleSystem>()
	{
		return UParticleSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystem);
	UParticleSystem::~UParticleSystem() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystem)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::EnumInfo[] = {
		{ EParticleSystemUpdateMode_StaticEnum, TEXT("EParticleSystemUpdateMode"), &Z_Registration_Info_UEnum_EParticleSystemUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 987424591U) },
		{ ParticleSystemLODMethod_StaticEnum, TEXT("ParticleSystemLODMethod"), &Z_Registration_Info_UEnum_ParticleSystemLODMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 506550998U) },
		{ EParticleSystemOcclusionBoundsMethod_StaticEnum, TEXT("EParticleSystemOcclusionBoundsMethod"), &Z_Registration_Info_UEnum_EParticleSystemOcclusionBoundsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 696057256U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::ScriptStructInfo[] = {
		{ FParticleSystemLOD::StaticStruct, Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::NewStructOps, TEXT("ParticleSystemLOD"), &Z_Registration_Info_UScriptStruct_ParticleSystemLOD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleSystemLOD), 2210614807U) },
		{ FLODSoloTrack::StaticStruct, Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewStructOps, TEXT("LODSoloTrack"), &Z_Registration_Info_UScriptStruct_LODSoloTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLODSoloTrack), 1483976680U) },
		{ FNamedEmitterMaterial::StaticStruct, Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewStructOps, TEXT("NamedEmitterMaterial"), &Z_Registration_Info_UScriptStruct_NamedEmitterMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedEmitterMaterial), 737647213U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFXSystemAsset, UFXSystemAsset::StaticClass, TEXT("UFXSystemAsset"), &Z_Registration_Info_UClass_UFXSystemAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFXSystemAsset), 2443708933U) },
		{ Z_Construct_UClass_UParticleSystem, UParticleSystem::StaticClass, TEXT("UParticleSystem"), &Z_Registration_Info_UClass_UParticleSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleSystem), 1730719015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_70362704(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
