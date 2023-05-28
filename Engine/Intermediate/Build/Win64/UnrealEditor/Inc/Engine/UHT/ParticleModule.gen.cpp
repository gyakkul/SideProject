// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModuleType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleCurvePair();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModuleType;
	static UEnum* EModuleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModuleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModuleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EModuleType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EModuleType"));
		}
		return Z_Registration_Info_UEnum_EModuleType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EModuleType>()
	{
		return EModuleType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EModuleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EModuleType_Statics::Enumerators[] = {
		{ "EPMT_General", (int64)EPMT_General },
		{ "EPMT_TypeData", (int64)EPMT_TypeData },
		{ "EPMT_Beam", (int64)EPMT_Beam },
		{ "EPMT_Trail", (int64)EPMT_Trail },
		{ "EPMT_Spawn", (int64)EPMT_Spawn },
		{ "EPMT_Required", (int64)EPMT_Required },
		{ "EPMT_Event", (int64)EPMT_Event },
		{ "EPMT_Light", (int64)EPMT_Light },
		{ "EPMT_SubUV", (int64)EPMT_SubUV },
		{ "EPMT_MAX", (int64)EPMT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EModuleType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** ModuleType\n *\x09Indicates the kind of emitter the module can be applied to.\n *\x09ie, EPMT_Beam - only applies to beam emitters.\n *\n *\x09The TypeData field is present to speed up finding the TypeData module.\n */" },
		{ "EPMT_Beam.Comment", "/** Beam - only applied to beam emitters\x09\x09\x09*/" },
		{ "EPMT_Beam.DisplayName", "Beam" },
		{ "EPMT_Beam.Name", "EPMT_Beam" },
		{ "EPMT_Beam.ToolTip", "Beam - only applied to beam emitters" },
		{ "EPMT_Event.Comment", "/** Event - event related modules\x09\x09\x09\x09\x09*/" },
		{ "EPMT_Event.DisplayName", "Event" },
		{ "EPMT_Event.Name", "EPMT_Event" },
		{ "EPMT_Event.ToolTip", "Event - event related modules" },
		{ "EPMT_General.Comment", "/** General - all emitter types can use it\x09\x09\x09*/" },
		{ "EPMT_General.DisplayName", "General" },
		{ "EPMT_General.Name", "EPMT_General" },
		{ "EPMT_General.ToolTip", "General - all emitter types can use it" },
		{ "EPMT_Light.Comment", "/** Light related modules\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "EPMT_Light.DisplayName", "Light" },
		{ "EPMT_Light.Name", "EPMT_Light" },
		{ "EPMT_Light.ToolTip", "Light related modules" },
		{ "EPMT_MAX.Name", "EPMT_MAX" },
		{ "EPMT_Required.Comment", "/** Required - all emitter types REQUIRE it\x09\x09\x09*/" },
		{ "EPMT_Required.DisplayName", "Required" },
		{ "EPMT_Required.Name", "EPMT_Required" },
		{ "EPMT_Required.ToolTip", "Required - all emitter types REQUIRE it" },
		{ "EPMT_Spawn.Comment", "/** Spawn - all emitter types REQUIRE it\x09\x09\x09*/" },
		{ "EPMT_Spawn.DisplayName", "Spawn" },
		{ "EPMT_Spawn.Name", "EPMT_Spawn" },
		{ "EPMT_Spawn.ToolTip", "Spawn - all emitter types REQUIRE it" },
		{ "EPMT_SubUV.Comment", "/** SubUV related modules\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "EPMT_SubUV.DisplayName", "SubUV" },
		{ "EPMT_SubUV.Name", "EPMT_SubUV" },
		{ "EPMT_SubUV.ToolTip", "SubUV related modules" },
		{ "EPMT_Trail.Comment", "/** Trail - only applied to trail emitters\x09\x09\x09*/" },
		{ "EPMT_Trail.DisplayName", "Trail" },
		{ "EPMT_Trail.Name", "EPMT_Trail" },
		{ "EPMT_Trail.ToolTip", "Trail - only applied to trail emitters" },
		{ "EPMT_TypeData.Comment", "/** TypeData - TypeData modules\x09\x09\x09\x09\x09\x09*/" },
		{ "EPMT_TypeData.DisplayName", "Type Data" },
		{ "EPMT_TypeData.Name", "EPMT_TypeData" },
		{ "EPMT_TypeData.ToolTip", "TypeData - TypeData modules" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "ModuleType\n   Indicates the kind of emitter the module can be applied to.\n   ie, EPMT_Beam - only applies to beam emitters.\n\n   The TypeData field is present to speed up finding the TypeData module." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EModuleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EModuleType",
		"EModuleType",
		Z_Construct_UEnum_Engine_EModuleType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModuleType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EModuleType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModuleType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EModuleType()
	{
		if (!Z_Registration_Info_UEnum_EModuleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModuleType.InnerSingleton, Z_Construct_UEnum_Engine_EModuleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModuleType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSourceSelectionMethod;
	static UEnum* EParticleSourceSelectionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSourceSelectionMethod"));
		}
		return Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSourceSelectionMethod>()
	{
		return EParticleSourceSelectionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enumerators[] = {
		{ "EPSSM_Random", (int64)EPSSM_Random },
		{ "EPSSM_Sequential", (int64)EPSSM_Sequential },
		{ "EPSSM_MAX", (int64)EPSSM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09Particle Selection Method, for any emitters that utilize particles\n *\x09""as the source points.\n */" },
		{ "EPSSM_MAX.Name", "EPSSM_MAX" },
		{ "EPSSM_Random.Comment", "/** Random\x09\x09- select a particle at random\x09\x09*/" },
		{ "EPSSM_Random.DisplayName", "Random" },
		{ "EPSSM_Random.Name", "EPSSM_Random" },
		{ "EPSSM_Random.ToolTip", "Random         - select a particle at random" },
		{ "EPSSM_Sequential.Comment", "/** Sequential\x09- select a particle in order\x09\x09*/" },
		{ "EPSSM_Sequential.DisplayName", "Sequential" },
		{ "EPSSM_Sequential.Name", "EPSSM_Sequential" },
		{ "EPSSM_Sequential.ToolTip", "Sequential     - select a particle in order" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "Particle Selection Method, for any emitters that utilize particles\nas the source points." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleSourceSelectionMethod",
		"EParticleSourceSelectionMethod",
		Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod()
	{
		if (!Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleCurvePair;
class UScriptStruct* FParticleCurvePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleCurvePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleCurvePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleCurvePair, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleCurvePair"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleCurvePair.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleCurvePair>()
{
	return FParticleCurvePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleCurvePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleCurvePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleCurvePair, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject = { "CurveObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleCurvePair, CurveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleCurvePair",
		sizeof(FParticleCurvePair),
		alignof(FParticleCurvePair),
		Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleCurvePair()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleCurvePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleCurvePair.InnerSingleton, Z_Construct_UScriptStruct_FParticleCurvePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleCurvePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo;
class UScriptStruct* FParticleRandomSeedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleRandomSeedInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleRandomSeedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleRandomSeedInfo>()
{
	return FParticleRandomSeedInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGetSeedFromInstance_MetaData[];
#endif
		static void NewProp_bGetSeedFromInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetSeedFromInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceSeedIsIndex_MetaData[];
#endif
		static void NewProp_bInstanceSeedIsIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceSeedIsIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetSeedOnEmitterLooping_MetaData[];
#endif
		static void NewProp_bResetSeedOnEmitterLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSeedOnEmitterLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomlySelectSeedArray_MetaData[];
#endif
		static void NewProp_bRandomlySelectSeedArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomlySelectSeedArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RandomSeeds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleRandomSeedInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** The name to expose to the placed instances for setting this seed */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The name to expose to the placed instances for setting this seed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleRandomSeedInfo, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, the module will attempt to get the seed from the owner\n\x09 *\x09instance. If that fails, it will fall back to getting it from\n\x09 *\x09the RandomSeeds array.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module will attempt to get the seed from the owner\ninstance. If that fails, it will fall back to getting it from\nthe RandomSeeds array." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bGetSeedFromInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance = { "bGetSeedFromInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, the seed value retrieved from the instance will be an\n\x09 *\x09index into the array of seeds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the seed value retrieved from the instance will be an\nindex into the array of seeds." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bInstanceSeedIsIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex = { "bInstanceSeedIsIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, then reset the seed upon the emitter looping.\n\x09 *\x09""For looping environmental effects this should likely be set to false to avoid\n\x09 *\x09""a repeating pattern.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, then reset the seed upon the emitter looping.\nFor looping environmental effects this should likely be set to false to avoid\na repeating pattern." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bResetSeedOnEmitterLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping = { "bResetSeedOnEmitterLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/**\n\x09*\x09If true, then randomly select a seed entry from the RandomSeeds array\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, then randomly select a seed entry from the RandomSeeds array" },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bRandomlySelectSeedArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray = { "bRandomlySelectSeedArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_Inner = { "RandomSeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09The random seed values to utilize for the module. \n\x09 *\x09More than 1 means the instance will randomly select one.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The random seed values to utilize for the module.\nMore than 1 means the instance will randomly select one." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds = { "RandomSeeds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleRandomSeedInfo, RandomSeeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleRandomSeedInfo",
		sizeof(FParticleRandomSeedInfo),
		alignof(FParticleRandomSeedInfo),
		Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.InnerSingleton, Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.InnerSingleton;
	}
	void UParticleModule::StaticRegisterNativesUParticleModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModule);
	UClass* Z_Construct_UClass_UParticleModule_NoRegister()
	{
		return UParticleModule::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnModule_MetaData[];
#endif
		static void NewProp_bSpawnModule_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateModule_MetaData[];
#endif
		static void NewProp_bUpdateModule_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinalUpdateModule_MetaData[];
#endif
		static void NewProp_bFinalUpdateModule_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinalUpdateModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateForGPUEmitter_MetaData[];
#endif
		static void NewProp_bUpdateForGPUEmitter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateForGPUEmitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurvesAsColor_MetaData[];
#endif
		static void NewProp_bCurvesAsColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurvesAsColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b3DDrawMode_MetaData[];
#endif
		static void NewProp_b3DDrawMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_b3DDrawMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupported3DDrawMode_MetaData[];
#endif
		static void NewProp_bSupported3DDrawMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupported3DDrawMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[];
#endif
		static void NewProp_bEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDuplicate_MetaData[];
#endif
		static void NewProp_LODDuplicate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LODDuplicate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsRandomSeed_MetaData[];
#endif
		static void NewProp_bSupportsRandomSeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsRandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresLoopingNotification_MetaData[];
#endif
		static void NewProp_bRequiresLoopingNotification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresLoopingNotification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODValidity_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODValidity;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleEditorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleEditorColor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleModule.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during Spawning\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during Spawning" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSpawnModule = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule = { "bSpawnModule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during Updating\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during Updating" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bUpdateModule = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule = { "bUpdateModule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during final update\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during final update" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bFinalUpdateModule = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule = { "bFinalUpdateModule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during update and/or final update for GPU emitters*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during update and/or final update for GPU emitters" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bUpdateForGPUEmitter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter = { "bUpdateForGPUEmitter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData[] = {
		{ "Comment", "/** If true, the module displays FVector curves as colors\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module displays FVector curves as colors" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bCurvesAsColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor = { "bCurvesAsColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/** If true, the module should render its 3D visualization helper\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module should render its 3D visualization helper" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->b3DDrawMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode = { "b3DDrawMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData[] = {
		{ "Comment", "/** If true, the module supports rendering a 3D visualization helper\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module supports rendering a 3D visualization helper" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSupported3DDrawMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode = { "bSupported3DDrawMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** If true, the module is enabled\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module is enabled" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData[] = {
		{ "Comment", "/** If true, the module has had editing enabled on it\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module has had editing enabled on it" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable = { "bEditable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09If true, this flag indicates that auto-generation for LOD will result in\n\x09*\x09""an exact duplicate of the module, regardless of the percentage.\n\x09*\x09If false, it will result in a module with different settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, this flag indicates that auto-generation for LOD will result in\nan exact duplicate of the module, regardless of the percentage.\nIf false, it will result in a module with different settings." },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->LODDuplicate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate = { "LODDuplicate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData[] = {
		{ "Comment", "/** If true, the module supports RandomSeed setting */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module supports RandomSeed setting" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSupportsRandomSeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed = { "bSupportsRandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData[] = {
		{ "Comment", "/** If true, the module should be told when looping */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module should be told when looping" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bRequiresLoopingNotification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification = { "bRequiresLoopingNotification", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The LOD levels this module is present in.\n\x09 *\x09""Bit-flags are used to indicate validity for a given LOD level.\n\x09 *\x09""For example, if\n\x09 *\x09\x09((1 << Level) & LODValidity) != 0\n\x09 *\x09then the module is used in that LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The LOD levels this module is present in.\nBit-flags are used to indicate validity for a given LOD level.\nFor example, if\n        ((1 << Level) & LODValidity) != 0\nthen the module is used in that LOD." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity = { "LODValidity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModule, LODValidity), nullptr, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/** The color to draw the modules curves in the curve editor. \n\x09 *\x09If bCurvesAsColor is true, it overrides this value.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The color to draw the modules curves in the curve editor.\n    If bCurvesAsColor is true, it overrides this value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor = { "ModuleEditorColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModule, ModuleEditorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModule_Statics::ClassParams = {
		&UParticleModule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModule()
	{
		if (!Z_Registration_Info_UClass_UParticleModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModule.OuterSingleton, Z_Construct_UClass_UParticleModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModule.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModule>()
	{
		return UParticleModule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModule);
	UParticleModule::~UParticleModule() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::EnumInfo[] = {
		{ EModuleType_StaticEnum, TEXT("EModuleType"), &Z_Registration_Info_UEnum_EModuleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1744302081U) },
		{ EParticleSourceSelectionMethod_StaticEnum, TEXT("EParticleSourceSelectionMethod"), &Z_Registration_Info_UEnum_EParticleSourceSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 740835518U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ScriptStructInfo[] = {
		{ FParticleCurvePair::StaticStruct, Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewStructOps, TEXT("ParticleCurvePair"), &Z_Registration_Info_UScriptStruct_ParticleCurvePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleCurvePair), 2942928091U) },
		{ FParticleRandomSeedInfo::StaticStruct, Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewStructOps, TEXT("ParticleRandomSeedInfo"), &Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleRandomSeedInfo), 2626427191U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModule, UParticleModule::StaticClass, TEXT("UParticleModule"), &Z_Registration_Info_UClass_UParticleModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModule), 2656963784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_1087637925(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
