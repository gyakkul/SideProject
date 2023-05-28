// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestructibleMesh.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleMesh() {}
// Cross Module References
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleFractureSettings_NoRegister();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleMesh();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleMesh_NoRegister();
	APEXDESTRUCTION_API UEnum* Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleAdvancedParameters();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleDamageParameters();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleDebrisParameters();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleDepthParameters();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleParameters();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleParametersFlag();
	APEXDESTRUCTION_API UScriptStruct* Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFractureEffect();
	UPackage* Z_Construct_UPackage__Script_ApexDestruction();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImpactDamageOverride;
	static UEnum* EImpactDamageOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImpactDamageOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImpactDamageOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("EImpactDamageOverride"));
		}
		return Z_Registration_Info_UEnum_EImpactDamageOverride.OuterSingleton;
	}
	template<> APEXDESTRUCTION_API UEnum* StaticEnum<EImpactDamageOverride>()
	{
		return EImpactDamageOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics::Enumerators[] = {
		{ "IDO_None", (int64)IDO_None },
		{ "IDO_On", (int64)IDO_On },
		{ "IDO_Off", (int64)IDO_Off },
		{ "IDO_MAX", (int64)IDO_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Chunks up to the depth DefaultImpactDamageDepth will take impact damage, unless IDO_On or IDO_Off is chosen.\n*/" },
		{ "IDO_MAX.Name", "IDO_MAX" },
		{ "IDO_None.Name", "IDO_None" },
		{ "IDO_Off.Name", "IDO_Off" },
		{ "IDO_On.Name", "IDO_On" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Chunks up to the depth DefaultImpactDamageDepth will take impact damage, unless IDO_On or IDO_Off is chosen." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		"EImpactDamageOverride",
		"EImpactDamageOverride",
		Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride()
	{
		if (!Z_Registration_Info_UEnum_EImpactDamageOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImpactDamageOverride.InnerSingleton, Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImpactDamageOverride.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DestructibleDepthParameters;
class UScriptStruct* FDestructibleDepthParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DestructibleDepthParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DestructibleDepthParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleDepthParameters, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("DestructibleDepthParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DestructibleDepthParameters.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FDestructibleDepthParameters>()
{
	return FDestructibleDepthParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactDamageOverride_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImpactDamageOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Properties that may be set for all chunks at a particular depth in the fracture hierarchy. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Properties that may be set for all chunks at a particular depth in the fracture hierarchy." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleDepthParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::NewProp_ImpactDamageOverride_MetaData[] = {
		{ "Category", "DestructibleDepthParameters" },
		{ "Comment", "/** Chunks up to the depth DefaultImpactDamageDepth will take impact damage, unless one of the override options (see EImpactDamageOverride) is chosen. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Chunks up to the depth DefaultImpactDamageDepth will take impact damage, unless one of the override options (see EImpactDamageOverride) is chosen." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::NewProp_ImpactDamageOverride = { "ImpactDamageOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDepthParameters, ImpactDamageOverride), Z_Construct_UEnum_ApexDestruction_EImpactDamageOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::NewProp_ImpactDamageOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::NewProp_ImpactDamageOverride_MetaData)) }; // 68691403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::NewProp_ImpactDamageOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"DestructibleDepthParameters",
		sizeof(FDestructibleDepthParameters),
		alignof(FDestructibleDepthParameters),
		Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleDepthParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DestructibleDepthParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DestructibleDepthParameters.InnerSingleton, Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DestructibleDepthParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DestructibleParametersFlag;
class UScriptStruct* FDestructibleParametersFlag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DestructibleParametersFlag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DestructibleParametersFlag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleParametersFlag, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("DestructibleParametersFlag"));
	}
	return Z_Registration_Info_UScriptStruct_DestructibleParametersFlag.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FDestructibleParametersFlag>()
{
	return FDestructibleParametersFlag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAccumulateDamage_MetaData[];
#endif
		static void NewProp_bAccumulateDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccumulateDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssetDefinedSupport_MetaData[];
#endif
		static void NewProp_bAssetDefinedSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetDefinedSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldSupport_MetaData[];
#endif
		static void NewProp_bWorldSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebrisTimeout_MetaData[];
#endif
		static void NewProp_bDebrisTimeout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebrisTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebrisMaxSeparation_MetaData[];
#endif
		static void NewProp_bDebrisMaxSeparation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebrisMaxSeparation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrumbleSmallestChunks_MetaData[];
#endif
		static void NewProp_bCrumbleSmallestChunks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrumbleSmallestChunks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAccurateRaycasts_MetaData[];
#endif
		static void NewProp_bAccurateRaycasts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccurateRaycasts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseValidBounds_MetaData[];
#endif
		static void NewProp_bUseValidBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseValidBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFormExtendedStructures_MetaData[];
#endif
		static void NewProp_bFormExtendedStructures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFormExtendedStructures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Flags that apply to a destructible actor. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Flags that apply to a destructible actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleParametersFlag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccumulateDamage_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09If set, chunks will \"remember\" damage applied to them, so that many applications of a damage amount\n\x09\x09""below damageThreshold will eventually fracture the chunk.  If not set, a single application of\n\x09\x09""damage must exceed damageThreshold in order to fracture the chunk.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "If set, chunks will \"remember\" damage applied to them, so that many applications of a damage amount\nbelow damageThreshold will eventually fracture the chunk.  If not set, a single application of\ndamage must exceed damageThreshold in order to fracture the chunk." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccumulateDamage_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bAccumulateDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccumulateDamage = { "bAccumulateDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccumulateDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccumulateDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccumulateDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAssetDefinedSupport_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09If set, then chunks which are tagged as \"support\" chunks (via NxDestructibleChunkDesc::isSupportChunk)\n\x09\x09will have environmental support in static destructibles.\n\n\x09\x09Note: if both bAssetDefinedSupport and bWorldSupport are set, then chunks must be tagged as\n\x09\x09\"support\" chunks AND overlap the Scene's static geometry in order to be environmentally supported.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "If set, then chunks which are tagged as \"support\" chunks (via NxDestructibleChunkDesc::isSupportChunk)\nwill have environmental support in static destructibles.\n\nNote: if both bAssetDefinedSupport and bWorldSupport are set, then chunks must be tagged as\n\"support\" chunks AND overlap the Scene's static geometry in order to be environmentally supported." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAssetDefinedSupport_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bAssetDefinedSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAssetDefinedSupport = { "bAssetDefinedSupport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAssetDefinedSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAssetDefinedSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAssetDefinedSupport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bWorldSupport_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09If set, then chunks which overlap the Scene's static geometry will have environmental support in\n\x09\x09static destructibles.\n\n\x09\x09Note: if both bAssetDefinedSupport and bWorldSupport are set, then chunks must be tagged as\n\x09\x09\"support\" chunks AND overlap the Scene's static geometry in order to be environmentally supported.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "If set, then chunks which overlap the Scene's static geometry will have environmental support in\nstatic destructibles.\n\nNote: if both bAssetDefinedSupport and bWorldSupport are set, then chunks must be tagged as\n\"support\" chunks AND overlap the Scene's static geometry in order to be environmentally supported." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bWorldSupport_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bWorldSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bWorldSupport = { "bWorldSupport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bWorldSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bWorldSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bWorldSupport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisTimeout_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09Whether or not chunks at or deeper than the \"debris\" depth (see NxDestructibleParameters::debrisDepth)\n\x09\x09will time out.  The lifetime is a value between NxDestructibleParameters::debrisLifetimeMin and\n\x09\x09NxDestructibleParameters::debrisLifetimeMax, based upon the destructible module's LOD setting.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Whether or not chunks at or deeper than the \"debris\" depth (see NxDestructibleParameters::debrisDepth)\nwill time out.  The lifetime is a value between NxDestructibleParameters::debrisLifetimeMin and\nNxDestructibleParameters::debrisLifetimeMax, based upon the destructible module's LOD setting." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisTimeout_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bDebrisTimeout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisTimeout = { "bDebrisTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisTimeout_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisMaxSeparation_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09Whether or not chunks at or deeper than the \"debris\" depth (see NxDestructibleParameters::debrisDepth)\n\x09\x09will be removed if they separate too far from their origins.  The maxSeparation is a value between\n\x09\x09NxDestructibleParameters::debrisMaxSeparationMin and NxDestructibleParameters::debrisMaxSeparationMax,\n\x09\x09""based upon the destructible module's LOD setting.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Whether or not chunks at or deeper than the \"debris\" depth (see NxDestructibleParameters::debrisDepth)\nwill be removed if they separate too far from their origins.  The maxSeparation is a value between\nNxDestructibleParameters::debrisMaxSeparationMin and NxDestructibleParameters::debrisMaxSeparationMax,\nbased upon the destructible module's LOD setting." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisMaxSeparation_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bDebrisMaxSeparation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisMaxSeparation = { "bDebrisMaxSeparation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisMaxSeparation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisMaxSeparation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisMaxSeparation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bCrumbleSmallestChunks_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09If set, the smallest chunks may be further broken down, either by fluid crumbles (if a crumble particle\n\x09\x09system is specified in the NxDestructibleActorDesc), or by simply removing the chunk if no crumble\n\x09\x09particle system is specified.  Note: the \"smallest chunks\" are normally defined to be the deepest level\n\x09\x09of the fracture hierarchy.  However, they may be taken from higher levels of the hierarchy if\n\x09\x09NxModuleDestructible::setMaxChunkDepthOffset is called with a non-zero value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "If set, the smallest chunks may be further broken down, either by fluid crumbles (if a crumble particle\nsystem is specified in the NxDestructibleActorDesc), or by simply removing the chunk if no crumble\nparticle system is specified.  Note: the \"smallest chunks\" are normally defined to be the deepest level\nof the fracture hierarchy.  However, they may be taken from higher levels of the hierarchy if\nNxModuleDestructible::setMaxChunkDepthOffset is called with a non-zero value." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bCrumbleSmallestChunks_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bCrumbleSmallestChunks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bCrumbleSmallestChunks = { "bCrumbleSmallestChunks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bCrumbleSmallestChunks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bCrumbleSmallestChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bCrumbleSmallestChunks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccurateRaycasts_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09If set, the NxDestructibleActor::rayCast function will search within the nearest visible chunk hit\n\x09\x09""for collisions with child chunks.  This is used to get a better raycast position and normal, in\n\x09\x09""case the parent collision volume does not tightly fit the graphics mesh.  The returned chunk index\n\x09\x09will always be that of the visible parent that is intersected, however.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "If set, the NxDestructibleActor::rayCast function will search within the nearest visible chunk hit\nfor collisions with child chunks.  This is used to get a better raycast position and normal, in\ncase the parent collision volume does not tightly fit the graphics mesh.  The returned chunk index\nwill always be that of the visible parent that is intersected, however." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccurateRaycasts_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bAccurateRaycasts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccurateRaycasts = { "bAccurateRaycasts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccurateRaycasts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccurateRaycasts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccurateRaycasts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bUseValidBounds_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09If set, the ValidBounds field of NxDestructibleParameters will be used.  These bounds are translated\n\x09\x09(but not scaled or rotated) to the origin of the destructible actor.  If a chunk or chunk island moves\n\x09\x09outside of those bounds, it is destroyed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "If set, the ValidBounds field of NxDestructibleParameters will be used.  These bounds are translated\n(but not scaled or rotated) to the origin of the destructible actor.  If a chunk or chunk island moves\noutside of those bounds, it is destroyed." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bUseValidBounds_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bUseValidBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bUseValidBounds = { "bUseValidBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bUseValidBounds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bUseValidBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bUseValidBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bFormExtendedStructures_MetaData[] = {
		{ "Category", "DestructibleParametersFlag" },
		{ "Comment", "/**\n\x09\x09If initially static, the destructible will become part of an extended support structure if it is\n\x09\x09in contact with another static destructible that also has this flag set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "If initially static, the destructible will become part of an extended support structure if it is\nin contact with another static destructible that also has this flag set." },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bFormExtendedStructures_SetBit(void* Obj)
	{
		((FDestructibleParametersFlag*)Obj)->bFormExtendedStructures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bFormExtendedStructures = { "bFormExtendedStructures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDestructibleParametersFlag), &Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bFormExtendedStructures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bFormExtendedStructures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bFormExtendedStructures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccumulateDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAssetDefinedSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bWorldSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bDebrisMaxSeparation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bCrumbleSmallestChunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bAccurateRaycasts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bUseValidBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewProp_bFormExtendedStructures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"DestructibleParametersFlag",
		sizeof(FDestructibleParametersFlag),
		alignof(FDestructibleParametersFlag),
		Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleParametersFlag()
	{
		if (!Z_Registration_Info_UScriptStruct_DestructibleParametersFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DestructibleParametersFlag.InnerSingleton, Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DestructibleParametersFlag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DestructibleDamageParameters;
class UScriptStruct* FDestructibleDamageParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DestructibleDamageParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DestructibleDamageParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleDamageParameters, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("DestructibleDamageParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DestructibleDamageParameters.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FDestructibleDamageParameters>()
{
	return FDestructibleDamageParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableImpactDamage_MetaData[];
#endif
		static void NewProp_bEnableImpactDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableImpactDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactDamageDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultImpactDamageDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomImpactResistance_MetaData[];
#endif
		static void NewProp_bCustomImpactResistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomImpactResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Parameters that pertain to chunk damage. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters that pertain to chunk damage." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleDamageParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "DestructibleDamageParameters" },
		{ "Comment", "/**\n\x09\x09The damage amount which will cause a chunk to fracture (break free).\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "The damage amount which will cause a chunk to fracture (break free)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDamageParameters, DamageThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageSpread_MetaData[] = {
		{ "Category", "DestructibleDamageParameters" },
		{ "Comment", "/** Controls how easily damage spreads. DamageRadius = Damage*DamageSpread. All chunks within DamageRadius will take damage. Full damage is taken at zero distance, and zero damage at the DamageRadius.*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Controls how easily damage spreads. DamageRadius = Damage*DamageSpread. All chunks within DamageRadius will take damage. Full damage is taken at zero distance, and zero damage at the DamageRadius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageSpread = { "DamageSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDamageParameters, DamageSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bEnableImpactDamage_MetaData[] = {
		{ "Category", "DestructibleDamageParameters" },
		{ "Comment", "/**\n\x09\x09Whether to apply damage to destructible when colliding with an object.\n\x09\x09@see ImpactDamage\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Whether to apply damage to destructible when colliding with an object.\n@see ImpactDamage" },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bEnableImpactDamage_SetBit(void* Obj)
	{
		((FDestructibleDamageParameters*)Obj)->bEnableImpactDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bEnableImpactDamage = { "bEnableImpactDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDestructibleDamageParameters), &Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bEnableImpactDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bEnableImpactDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bEnableImpactDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactDamage_MetaData[] = {
		{ "Category", "DestructibleDamageParameters" },
		{ "Comment", "/**\n\x09\x09""Controls how much damage is applied upon collision. Damage = ImpactDamage * ImpactForce.\n\x09\x09@see DepthParameters for per level control of ImpactDamage\n\x09*/" },
		{ "editcondition", "bEnableImpactDamage" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Controls how much damage is applied upon collision. Damage = ImpactDamage * ImpactForce.\n@see DepthParameters for per level control of ImpactDamage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactDamage = { "ImpactDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDamageParameters, ImpactDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DefaultImpactDamageDepth_MetaData[] = {
		{ "Category", "DestructibleDamageParameters" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09\x09Max depth level where impact damage is enabled. @see DepthParameters for per level control of ImpactDamage\n\x09\x09If negative, impact damage is disabled\n\x09*/" },
		{ "editcondition", "bEnableImpactDamage" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Max depth level where impact damage is enabled. @see DepthParameters for per level control of ImpactDamage\nIf negative, impact damage is disabled" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DefaultImpactDamageDepth = { "DefaultImpactDamageDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDamageParameters, DefaultImpactDamageDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DefaultImpactDamageDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DefaultImpactDamageDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bCustomImpactResistance_MetaData[] = {
		{ "Category", "DestructibleDamageParameters" },
		{ "Comment", "/**\n\x09\x09""By default, objects that collide with destructibles will bounce back. Custom resistance allows for finer control of how much a destructible \"pushes back\" against a colliding object.\n\x09\x09@see ImpactResistance\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "By default, objects that collide with destructibles will bounce back. Custom resistance allows for finer control of how much a destructible \"pushes back\" against a colliding object.\n@see ImpactResistance" },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bCustomImpactResistance_SetBit(void* Obj)
	{
		((FDestructibleDamageParameters*)Obj)->bCustomImpactResistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bCustomImpactResistance = { "bCustomImpactResistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDestructibleDamageParameters), &Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bCustomImpactResistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bCustomImpactResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bCustomImpactResistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactResistance_MetaData[] = {
		{ "Category", "DestructibleDamageParameters" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09\x09""Controls how much resistance is applied to colliding objects. Weak materials like glass should set this to a low value so that objects will pass right through them during fracture.\n\x09\x09@see DepthParameters for per level control of ImpactResistance\n\x09*/" },
		{ "editcondition", "bCustomImpactResistance" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Controls how much resistance is applied to colliding objects. Weak materials like glass should set this to a low value so that objects will pass right through them during fracture.\n@see DepthParameters for per level control of ImpactResistance" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactResistance = { "ImpactResistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDamageParameters, ImpactResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactResistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DamageSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bEnableImpactDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_DefaultImpactDamageDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_bCustomImpactResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewProp_ImpactResistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"DestructibleDamageParameters",
		sizeof(FDestructibleDamageParameters),
		alignof(FDestructibleDamageParameters),
		Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleDamageParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DestructibleDamageParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DestructibleDamageParameters.InnerSingleton, Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DestructibleDamageParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DestructibleDebrisParameters;
class UScriptStruct* FDestructibleDebrisParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DestructibleDebrisParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DestructibleDebrisParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleDebrisParameters, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("DestructibleDebrisParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DestructibleDebrisParameters.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FDestructibleDebrisParameters>()
{
	return FDestructibleDebrisParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebrisLifetimeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebrisLifetimeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebrisLifetimeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebrisLifetimeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebrisMaxSeparationMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebrisMaxSeparationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebrisMaxSeparationMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebrisMaxSeparationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValidBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Parameters that pertain to chunk debris-level settings. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters that pertain to chunk debris-level settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleDebrisParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMin_MetaData[] = {
		{ "Category", "DestructibleDebrisParameters" },
		{ "Comment", "/**\n\x09\x09\"Debris chunks\" (see debrisDepth, above) will be destroyed after a time (in seconds)\n\x09\x09separated from non-debris chunks.  The actual lifetime is interpolated between these\n\x09\x09two bDebrisTimeout, based upon the module's LOD setting.  To disable lifetime, clear the\n\x09\x09""bDebrisTimeout flag in the flags field.\n\x09\x09If debrisLifetimeMax < debrisLifetimeMin, the mean of the two is used for both.\n\x09\x09""Default debrisLifetimeMin = 1.0, debrisLifetimeMax = 10.0f.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "\"Debris chunks\" (see debrisDepth, above) will be destroyed after a time (in seconds)\nseparated from non-debris chunks.  The actual lifetime is interpolated between these\ntwo bDebrisTimeout, based upon the module's LOD setting.  To disable lifetime, clear the\nbDebrisTimeout flag in the flags field.\nIf debrisLifetimeMax < debrisLifetimeMin, the mean of the two is used for both.\nDefault debrisLifetimeMin = 1.0, debrisLifetimeMax = 10.0f." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMin = { "DebrisLifetimeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDebrisParameters, DebrisLifetimeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMax_MetaData[] = {
		{ "Category", "DestructibleDebrisParameters" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMax = { "DebrisLifetimeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDebrisParameters, DebrisLifetimeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMin_MetaData[] = {
		{ "Category", "DestructibleDebrisParameters" },
		{ "Comment", "/**\n\x09\x09\"Debris chunks\" (see debrisDepth, above) will be destroyed if they are separated from\n\x09\x09their origin by a distance greater than maxSeparation.  The actual maxSeparation is\n\x09\x09interpolated between these two values, based upon the module's LOD setting.  To disable\n\x09\x09maxSeparation, clear the bDebrisMaxSeparation flag in the flags field.\n\x09\x09If debrisMaxSeparationMax < debrisMaxSeparationMin, the mean of the two is used for both.\n\x09\x09""Default debrisMaxSeparationMin = 1.0, debrisMaxSeparationMax = 10.0f.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "\"Debris chunks\" (see debrisDepth, above) will be destroyed if they are separated from\ntheir origin by a distance greater than maxSeparation.  The actual maxSeparation is\ninterpolated between these two values, based upon the module's LOD setting.  To disable\nmaxSeparation, clear the bDebrisMaxSeparation flag in the flags field.\nIf debrisMaxSeparationMax < debrisMaxSeparationMin, the mean of the two is used for both.\nDefault debrisMaxSeparationMin = 1.0, debrisMaxSeparationMax = 10.0f." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMin = { "DebrisMaxSeparationMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDebrisParameters, DebrisMaxSeparationMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMax_MetaData[] = {
		{ "Category", "DestructibleDebrisParameters" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMax = { "DebrisMaxSeparationMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDebrisParameters, DebrisMaxSeparationMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_ValidBounds_MetaData[] = {
		{ "Category", "DestructibleDebrisParameters" },
		{ "Comment", "/**\n\x09\x09\"Debris chunks\" (see debrisDepth, above) will be destroyed if they leave this box.\n\x09\x09The box translates with the destructible actor's initial position, but does not\n\x09\x09rotate or scale.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "\"Debris chunks\" (see debrisDepth, above) will be destroyed if they leave this box.\nThe box translates with the destructible actor's initial position, but does not\nrotate or scale." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_ValidBounds = { "ValidBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleDebrisParameters, ValidBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_ValidBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_ValidBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisLifetimeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_DebrisMaxSeparationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewProp_ValidBounds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"DestructibleDebrisParameters",
		sizeof(FDestructibleDebrisParameters),
		alignof(FDestructibleDebrisParameters),
		Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleDebrisParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DestructibleDebrisParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DestructibleDebrisParameters.InnerSingleton, Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DestructibleDebrisParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DestructibleAdvancedParameters;
class UScriptStruct* FDestructibleAdvancedParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DestructibleAdvancedParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DestructibleAdvancedParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("DestructibleAdvancedParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DestructibleAdvancedParameters.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FDestructibleAdvancedParameters>()
{
	return FDestructibleAdvancedParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageCap_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageCap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChunkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxChunkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureImpulseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FractureImpulseScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Parameters that are less-often used. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters that are less-often used." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleAdvancedParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_DamageCap_MetaData[] = {
		{ "Category", "DestructibleAdvancedParameters" },
		{ "Comment", "/**\n\x09\x09Limits the amount of damage applied to a chunk.  This is useful for preventing the entire destructible\n\x09\x09""from getting pulverized by a very large application of damage.  This can easily happen when impact damage is\n\x09\x09used, and the damage amount is proportional to the impact force (see forceToDamage).\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Limits the amount of damage applied to a chunk.  This is useful for preventing the entire destructible\nfrom getting pulverized by a very large application of damage.  This can easily happen when impact damage is\nused, and the damage amount is proportional to the impact force (see forceToDamage)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_DamageCap = { "DamageCap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleAdvancedParameters, DamageCap), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_DamageCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_DamageCap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_ImpactVelocityThreshold_MetaData[] = {
		{ "Category", "DestructibleAdvancedParameters" },
		{ "Comment", "/** \n\x09\x09Large impact force may be reported if rigid bodies are spawned inside one another.  In this case the realative velocity of the two\n\x09\x09objects will be low.  This variable allows the user to set a minimum velocity threshold for impacts to ensure that the objects are \n\x09\x09moving at a min velocity in order for the impact force to be considered.  \n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Large impact force may be reported if rigid bodies are spawned inside one another.  In this case the realative velocity of the two\nobjects will be low.  This variable allows the user to set a minimum velocity threshold for impacts to ensure that the objects are\nmoving at a min velocity in order for the impact force to be considered." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_ImpactVelocityThreshold = { "ImpactVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleAdvancedParameters, ImpactVelocityThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_ImpactVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_ImpactVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_MaxChunkSpeed_MetaData[] = {
		{ "Category", "DestructibleAdvancedParameters" },
		{ "Comment", "/**\n\x09\x09If greater than 0, the chunks' speeds will not be allowed to exceed this value.  Use 0\n\x09\x09to disable this feature (this is the default).\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "If greater than 0, the chunks' speeds will not be allowed to exceed this value.  Use 0\nto disable this feature (this is the default)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_MaxChunkSpeed = { "MaxChunkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleAdvancedParameters, MaxChunkSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_MaxChunkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_MaxChunkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_FractureImpulseScale_MetaData[] = {
		{ "Category", "DestructibleAdvancedParameters" },
		{ "Comment", "/**\n\x09\x09Scale factor used to apply an impulse force along the normal of chunk when fractured.  This is used\n\x09\x09in order to \"push\" the pieces out as they fracture.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Scale factor used to apply an impulse force along the normal of chunk when fractured.  This is used\nin order to \"push\" the pieces out as they fracture." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_FractureImpulseScale = { "FractureImpulseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleAdvancedParameters, FractureImpulseScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_FractureImpulseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_FractureImpulseScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_DamageCap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_ImpactVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_MaxChunkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewProp_FractureImpulseScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"DestructibleAdvancedParameters",
		sizeof(FDestructibleAdvancedParameters),
		alignof(FDestructibleAdvancedParameters),
		Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleAdvancedParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DestructibleAdvancedParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DestructibleAdvancedParameters.InnerSingleton, Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DestructibleAdvancedParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DestructibleSpecialHierarchyDepths;
class UScriptStruct* FDestructibleSpecialHierarchyDepths::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DestructibleSpecialHierarchyDepths.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DestructibleSpecialHierarchyDepths.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("DestructibleSpecialHierarchyDepths"));
	}
	return Z_Registration_Info_UScriptStruct_DestructibleSpecialHierarchyDepths.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FDestructibleSpecialHierarchyDepths>()
{
	return FDestructibleSpecialHierarchyDepths::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SupportDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFractureDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumFractureDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebris_MetaData[];
#endif
		static void NewProp_bEnableDebris_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebris;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebrisDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DebrisDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EssentialDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EssentialDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Special hierarchy depths for various behaviors. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Special hierarchy depths for various behaviors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleSpecialHierarchyDepths>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_SupportDepth_MetaData[] = {
		{ "Category", "DestructibleSpecialHierarchyDepths" },
		{ "Comment", "/**\n\x09\x09The chunk hierarchy depth at which to create a support graph.  Higher depth levels give more detailed support,\n\x09\x09""but will give a higher computational load.  Chunks below the support depth will never be supported.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "The chunk hierarchy depth at which to create a support graph.  Higher depth levels give more detailed support,\nbut will give a higher computational load.  Chunks below the support depth will never be supported." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_SupportDepth = { "SupportDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleSpecialHierarchyDepths, SupportDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_SupportDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_SupportDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_MinimumFractureDepth_MetaData[] = {
		{ "Category", "DestructibleSpecialHierarchyDepths" },
		{ "Comment", "/**\n\x09\x09The chunks will not be broken free below this depth.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "The chunks will not be broken free below this depth." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_MinimumFractureDepth = { "MinimumFractureDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleSpecialHierarchyDepths, MinimumFractureDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_MinimumFractureDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_MinimumFractureDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_bEnableDebris_MetaData[] = {
		{ "Category", "DestructibleSpecialHierarchyDepths" },
		{ "Comment", "/** \n\x09\x09""Enables debris at a specific depth level.\n\x09\x09@see DebrisDepth */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Enables debris at a specific depth level.\n@see DebrisDepth" },
	};
#endif
	void Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_bEnableDebris_SetBit(void* Obj)
	{
		((FDestructibleSpecialHierarchyDepths*)Obj)->bEnableDebris = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_bEnableDebris = { "bEnableDebris", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDestructibleSpecialHierarchyDepths), &Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_bEnableDebris_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_bEnableDebris_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_bEnableDebris_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_DebrisDepth_MetaData[] = {
		{ "Category", "DestructibleSpecialHierarchyDepths" },
		{ "Comment", "/**\n\x09\x09The hierarchy depth at which chunks are considered to be \"debris.\"  \n\x09*/" },
		{ "editcondition", "bEnableDebris" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "The hierarchy depth at which chunks are considered to be \"debris.\"" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_DebrisDepth = { "DebrisDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleSpecialHierarchyDepths, DebrisDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_DebrisDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_DebrisDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_EssentialDepth_MetaData[] = {
		{ "Category", "DestructibleSpecialHierarchyDepths" },
		{ "Comment", "/**\n\x09\x09The chunk hierarchy depth up to which chunks will always be processed.  These chunks are considered\n\x09\x09to be essential either for gameplay or visually.\n\x09\x09The minimum value is 0, meaning the level 0 chunk is always considered essential.\n\x09\x09""Default value is 0.\n\x09*/" },
		{ "DisplayName", "Essential LOD Depth" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "The chunk hierarchy depth up to which chunks will always be processed.  These chunks are considered\nto be essential either for gameplay or visually.\nThe minimum value is 0, meaning the level 0 chunk is always considered essential.\nDefault value is 0." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_EssentialDepth = { "EssentialDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleSpecialHierarchyDepths, EssentialDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_EssentialDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_EssentialDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_SupportDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_MinimumFractureDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_bEnableDebris,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_DebrisDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewProp_EssentialDepth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"DestructibleSpecialHierarchyDepths",
		sizeof(FDestructibleSpecialHierarchyDepths),
		alignof(FDestructibleSpecialHierarchyDepths),
		Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths()
	{
		if (!Z_Registration_Info_UScriptStruct_DestructibleSpecialHierarchyDepths.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DestructibleSpecialHierarchyDepths.InnerSingleton, Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DestructibleSpecialHierarchyDepths.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DestructibleParameters;
class UScriptStruct* FDestructibleParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DestructibleParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DestructibleParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructibleParameters, (UObject*)Z_Construct_UPackage__Script_ApexDestruction(), TEXT("DestructibleParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DestructibleParameters.OuterSingleton;
}
template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<FDestructibleParameters>()
{
	return FDestructibleParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDestructibleParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebrisParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebrisParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialHierarchyDepths_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecialHierarchyDepths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DepthParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DepthParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Parameters that apply to a destructible actor. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters that apply to a destructible actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructibleParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DamageParameters_MetaData[] = {
		{ "Category", "DestructibleParameters" },
		{ "Comment", "/** Parameters that pertain to chunk damage.  See DestructibleDamageParameters. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters that pertain to chunk damage.  See DestructibleDamageParameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DamageParameters = { "DamageParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleParameters, DamageParameters), Z_Construct_UScriptStruct_FDestructibleDamageParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DamageParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DamageParameters_MetaData)) }; // 2502572548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DebrisParameters_MetaData[] = {
		{ "Category", "DestructibleParameters" },
		{ "Comment", "/** Parameters that pertain to chunk debris-level settings.  See DestructibleDebrisParameters. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters that pertain to chunk debris-level settings.  See DestructibleDebrisParameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DebrisParameters = { "DebrisParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleParameters, DebrisParameters), Z_Construct_UScriptStruct_FDestructibleDebrisParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DebrisParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DebrisParameters_MetaData)) }; // 2526369198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_AdvancedParameters_MetaData[] = {
		{ "Category", "DestructibleParameters" },
		{ "Comment", "/** Parameters that are less-often used.  See DestructibleAdvancedParameters. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters that are less-often used.  See DestructibleAdvancedParameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_AdvancedParameters = { "AdvancedParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleParameters, AdvancedParameters), Z_Construct_UScriptStruct_FDestructibleAdvancedParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_AdvancedParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_AdvancedParameters_MetaData)) }; // 1100796321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_SpecialHierarchyDepths_MetaData[] = {
		{ "Category", "DestructibleParameters" },
		{ "Comment", "/** Special hierarchy depths for various behaviors. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Special hierarchy depths for various behaviors." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_SpecialHierarchyDepths = { "SpecialHierarchyDepths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleParameters, SpecialHierarchyDepths), Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_SpecialHierarchyDepths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_SpecialHierarchyDepths_MetaData)) }; // 3256277893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DepthParameters_Inner = { "DepthParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDestructibleDepthParameters, METADATA_PARAMS(nullptr, 0) }; // 3306928259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DepthParameters_MetaData[] = {
		{ "Category", "DestructibleParameters" },
		{ "Comment", "/**\n\x09\x09Parameters that apply to every chunk at a given level.\n\x09\x09the element [0] of the array applies to the level 0 (unfractured) chunk, element [1] applies\n\x09\x09to the level 1 chunks, etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters that apply to every chunk at a given level.\nthe element [0] of the array applies to the level 0 (unfractured) chunk, element [1] applies\nto the level 1 chunks, etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DepthParameters = { "DepthParameters", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleParameters, DepthParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DepthParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DepthParameters_MetaData)) }; // 3306928259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "DestructibleParameters" },
		{ "Comment", "/** A collection of flags defined in DestructibleParametersFlag. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "A collection of flags defined in DestructibleParametersFlag." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDestructibleParameters, Flags), Z_Construct_UScriptStruct_FDestructibleParametersFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_Flags_MetaData)) }; // 908972063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructibleParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DamageParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DebrisParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_AdvancedParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_SpecialHierarchyDepths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DepthParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_DepthParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructibleParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
		nullptr,
		&NewStructOps,
		"DestructibleParameters",
		sizeof(FDestructibleParameters),
		alignof(FDestructibleParameters),
		Z_Construct_UScriptStruct_FDestructibleParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructibleParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDestructibleParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DestructibleParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DestructibleParameters.InnerSingleton, Z_Construct_UScriptStruct_FDestructibleParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DestructibleParameters.InnerSingleton;
	}
	void UDestructibleMesh::StaticRegisterNativesUDestructibleMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestructibleMesh);
	UClass* Z_Construct_UClass_UDestructibleMesh_NoRegister()
	{
		return UDestructibleMesh::StaticClass();
	}
	struct Z_Construct_UClass_UDestructibleMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDestructibleParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDestructibleParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FractureEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FractureEffects;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FractureSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSMImportTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceSMImportTimestamp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FractureChunkMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureChunkMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FractureChunkMeshes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestructibleMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds an APEX destructible asset as well as an associated USkeletalMesh.\n */" },
		{ "HideCategories", "Object Mesh LevelOfDetail Mirroring Physics Reimport Clothing Object Object" },
		{ "IncludePath", "DestructibleMesh.h" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Holds an APEX destructible asset as well as an associated USkeletalMesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_DefaultDestructibleParameters_MetaData[] = {
		{ "Category", "DestructibleMesh" },
		{ "Comment", "/** Parameters controlling the destruction behavior. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Parameters controlling the destruction behavior." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_DefaultDestructibleParameters = { "DefaultDestructibleParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleMesh, DefaultDestructibleParameters), Z_Construct_UScriptStruct_FDestructibleParameters, METADATA_PARAMS(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_DefaultDestructibleParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_DefaultDestructibleParameters_MetaData)) }; // 3300846217
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureEffects_Inner = { "FractureEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFractureEffect, METADATA_PARAMS(nullptr, 0) }; // 291772774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureEffects_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Fracture effects for each fracture level, unless overridden in the component. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Fracture effects for each fracture level, unless overridden in the component." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureEffects = { "FractureEffects", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleMesh, FractureEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureEffects_MetaData)) }; // 291772774
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureSettings_MetaData[] = {
		{ "Comment", "/** Information used to author an NxDestructibleAsset*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Information used to author an NxDestructibleAsset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureSettings = { "FractureSettings", nullptr, (EPropertyFlags)0x0016000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleMesh, FractureSettings), Z_Construct_UClass_UDestructibleFractureSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceStaticMesh_MetaData[] = {
		{ "Comment", "/** Static mesh this destructible mesh is created from. Is nullptr if not created from a static mesh */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Static mesh this destructible mesh is created from. Is nullptr if not created from a static mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceStaticMesh = { "SourceStaticMesh", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleMesh, SourceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceSMImportTimestamp_MetaData[] = {
		{ "Comment", "/** Timestamp of the source static meshes last import at the time this destruction mesh has been generated. */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Timestamp of the source static meshes last import at the time this destruction mesh has been generated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceSMImportTimestamp = { "SourceSMImportTimestamp", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleMesh, SourceSMImportTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceSMImportTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceSMImportTimestamp_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureChunkMeshes_Inner = { "FractureChunkMeshes", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureChunkMeshes_MetaData[] = {
		{ "Comment", "/** Array of static meshes to build the fracture chunks from */" },
		{ "ModuleRelativePath", "Public/DestructibleMesh.h" },
		{ "ToolTip", "Array of static meshes to build the fracture chunks from" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureChunkMeshes = { "FractureChunkMeshes", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleMesh, FractureChunkMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureChunkMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureChunkMeshes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestructibleMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_DefaultDestructibleParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureEffects,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_SourceSMImportTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureChunkMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleMesh_Statics::NewProp_FractureChunkMeshes,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestructibleMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestructibleMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestructibleMesh_Statics::ClassParams = {
		&UDestructibleMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDestructibleMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMesh_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDestructibleMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestructibleMesh()
	{
		if (!Z_Registration_Info_UClass_UDestructibleMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestructibleMesh.OuterSingleton, Z_Construct_UClass_UDestructibleMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDestructibleMesh.OuterSingleton;
	}
	template<> APEXDESTRUCTION_API UClass* StaticClass<UDestructibleMesh>()
	{
		return UDestructibleMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructibleMesh);
	UDestructibleMesh::~UDestructibleMesh() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleMesh)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::EnumInfo[] = {
		{ EImpactDamageOverride_StaticEnum, TEXT("EImpactDamageOverride"), &Z_Registration_Info_UEnum_EImpactDamageOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 68691403U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::ScriptStructInfo[] = {
		{ FDestructibleDepthParameters::StaticStruct, Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics::NewStructOps, TEXT("DestructibleDepthParameters"), &Z_Registration_Info_UScriptStruct_DestructibleDepthParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructibleDepthParameters), 3306928259U) },
		{ FDestructibleParametersFlag::StaticStruct, Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics::NewStructOps, TEXT("DestructibleParametersFlag"), &Z_Registration_Info_UScriptStruct_DestructibleParametersFlag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructibleParametersFlag), 908972063U) },
		{ FDestructibleDamageParameters::StaticStruct, Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics::NewStructOps, TEXT("DestructibleDamageParameters"), &Z_Registration_Info_UScriptStruct_DestructibleDamageParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructibleDamageParameters), 2502572548U) },
		{ FDestructibleDebrisParameters::StaticStruct, Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics::NewStructOps, TEXT("DestructibleDebrisParameters"), &Z_Registration_Info_UScriptStruct_DestructibleDebrisParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructibleDebrisParameters), 2526369198U) },
		{ FDestructibleAdvancedParameters::StaticStruct, Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics::NewStructOps, TEXT("DestructibleAdvancedParameters"), &Z_Registration_Info_UScriptStruct_DestructibleAdvancedParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructibleAdvancedParameters), 1100796321U) },
		{ FDestructibleSpecialHierarchyDepths::StaticStruct, Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics::NewStructOps, TEXT("DestructibleSpecialHierarchyDepths"), &Z_Registration_Info_UScriptStruct_DestructibleSpecialHierarchyDepths, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructibleSpecialHierarchyDepths), 3256277893U) },
		{ FDestructibleParameters::StaticStruct, Z_Construct_UScriptStruct_FDestructibleParameters_Statics::NewStructOps, TEXT("DestructibleParameters"), &Z_Registration_Info_UScriptStruct_DestructibleParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructibleParameters), 3300846217U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDestructibleMesh, UDestructibleMesh::StaticClass, TEXT("UDestructibleMesh"), &Z_Registration_Info_UClass_UDestructibleMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestructibleMesh), 152340425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_4125305448(TEXT("/Script/ApexDestruction"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
