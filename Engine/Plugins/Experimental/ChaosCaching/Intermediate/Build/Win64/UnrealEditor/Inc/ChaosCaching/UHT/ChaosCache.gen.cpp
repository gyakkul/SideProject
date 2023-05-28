// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/ChaosCache.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Chaos/CacheEvents.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosCache() {}
// Cross Module References
	CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCache();
	CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCache_NoRegister();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCacheEventTrack();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCacheSpawnableTemplate();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FParticleTransformTrack();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FPerParticleCacheData();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurves();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleTransformTrack;
class UScriptStruct* FParticleTransformTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleTransformTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleTransformTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleTransformTrack, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("ParticleTransformTrack"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleTransformTrack.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FParticleTransformTrack>()
{
	return FParticleTransformTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleTransformTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawTransformTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawTransformTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeginOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeactivateOnEnd_MetaData[];
#endif
		static void NewProp_bDeactivateOnEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeactivateOnEnd;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyTimestamps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimestamps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimestamps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleTransformTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_RawTransformTrack_MetaData[] = {
		{ "Comment", "/**\n\x09 * List of all the transforms this cache cares about, recorded from the simulated transforms of the particles\n\x09 * observed by the adapter that created the cache\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "List of all the transforms this cache cares about, recorded from the simulated transforms of the particles\nobserved by the adapter that created the cache" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_RawTransformTrack = { "RawTransformTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleTransformTrack, RawTransformTrack), Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_RawTransformTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_RawTransformTrack_MetaData)) }; // 3121965685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_BeginOffset_MetaData[] = {
		{ "Comment", "/** The offset from the beginning of the cache that holds this track that the track starts */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "The offset from the beginning of the cache that holds this track that the track starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_BeginOffset = { "BeginOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleTransformTrack, BeginOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_BeginOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_BeginOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd_MetaData[] = {
		{ "Comment", "/** If this flag is set true, the particle represented by this track deactives on the final keyframe. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "If this flag is set true, the particle represented by this track deactives on the final keyframe." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd_SetBit(void* Obj)
	{
		((FParticleTransformTrack*)Obj)->bDeactivateOnEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd = { "bDeactivateOnEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FParticleTransformTrack), &Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps_Inner = { "KeyTimestamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps_MetaData[] = {
		{ "Comment", "/**\n\x09 * The above raw track is just the key data and doesn't know at which time those keys are placed, this is\n\x09 * a list of the timestamps for each entry in TransformTrack\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "The above raw track is just the key data and doesn't know at which time those keys are placed, this is\na list of the timestamps for each entry in TransformTrack" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps = { "KeyTimestamps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleTransformTrack, KeyTimestamps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_RawTransformTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_BeginOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_bDeactivateOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewProp_KeyTimestamps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		nullptr,
		&NewStructOps,
		"ParticleTransformTrack",
		sizeof(FParticleTransformTrack),
		alignof(FParticleTransformTrack),
		Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleTransformTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleTransformTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleTransformTrack.InnerSingleton, Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleTransformTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerParticleCacheData;
class UScriptStruct* FPerParticleCacheData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerParticleCacheData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerParticleCacheData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerParticleCacheData, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("PerParticleCacheData"));
	}
	return Z_Registration_Info_UScriptStruct_PerParticleCacheData.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FPerParticleCacheData>()
{
	return FPerParticleCacheData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerParticleCacheData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerParticleCacheData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_TransformData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_TransformData = { "TransformData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerParticleCacheData, TransformData), Z_Construct_UScriptStruct_FParticleTransformTrack, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_TransformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_TransformData_MetaData)) }; // 2091207192
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_ValueProp = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(nullptr, 0) }; // 778017158
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_Key_KeyProp = { "CurveData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Named curve data. This can be particle or other continuous curve data pushed by the adapter that created the\n\x09 * cache. Any particle property outside of the transforms will be placed in this container with a suitable name for\n\x09 * the property. Blueprints and adapters can add whatever data they need to this container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Named curve data. This can be particle or other continuous curve data pushed by the adapter that created the\ncache. Any particle property outside of the transforms will be placed in this container with a suitable name for\nthe property. Blueprints and adapters can add whatever data they need to this container." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerParticleCacheData, CurveData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_MetaData)) }; // 778017158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_TransformData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewProp_CurveData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		nullptr,
		&NewStructOps,
		"PerParticleCacheData",
		sizeof(FPerParticleCacheData),
		alignof(FPerParticleCacheData),
		Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerParticleCacheData()
	{
		if (!Z_Registration_Info_UScriptStruct_PerParticleCacheData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerParticleCacheData.InnerSingleton, Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerParticleCacheData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate;
class UScriptStruct* FCacheSpawnableTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheSpawnableTemplate, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("CacheSpawnableTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FCacheSpawnableTemplate>()
{
	return FCacheSpawnableTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuplicatedTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DuplicatedTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheSpawnableTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_DuplicatedTemplate_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_DuplicatedTemplate = { "DuplicatedTemplate", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCacheSpawnableTemplate, DuplicatedTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_DuplicatedTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_DuplicatedTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCacheSpawnableTemplate, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_ComponentTransform_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_ComponentTransform = { "ComponentTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCacheSpawnableTemplate, ComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_ComponentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_ComponentTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_DuplicatedTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_InitialTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewProp_ComponentTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		nullptr,
		&NewStructOps,
		"CacheSpawnableTemplate",
		sizeof(FCacheSpawnableTemplate),
		alignof(FCacheSpawnableTemplate),
		Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCacheSpawnableTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.InnerSingleton, Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RichCurves;
class UScriptStruct* FRichCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RichCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RichCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurves, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("RichCurves"));
	}
	return Z_Registration_Info_UScriptStruct_RichCurves.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FRichCurves>()
{
	return FRichCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRichCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RichCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RichCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurves_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichCurves>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves_Inner = { "RichCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(nullptr, 0) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves = { "RichCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRichCurves, RichCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves_MetaData)) }; // 778017158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurves_Statics::NewProp_RichCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		nullptr,
		&NewStructOps,
		"RichCurves",
		sizeof(FRichCurves),
		alignof(FRichCurves),
		Z_Construct_UScriptStruct_FRichCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_RichCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RichCurves.InnerSingleton, Z_Construct_UScriptStruct_FRichCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RichCurves.InnerSingleton;
	}
	void UChaosCache::StaticRegisterNativesUChaosCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosCache);
	UClass* Z_Construct_UClass_UChaosCache_NoRegister()
	{
		return UChaosCache::StaticClass();
	}
	struct Z_Construct_UClass_UChaosCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecordedDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRecordedFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumRecordedFrames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackToParticle_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackToParticle_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackToParticle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelsTracks_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelsTracks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsTracks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChannelsTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTracks_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventTracks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTracks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EventTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawnable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spawnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdapterGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdapterGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Chaos/ChaosCache.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_RecordedDuration_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_RecordedDuration = { "RecordedDuration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, RecordedDuration), METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_RecordedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_RecordedDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_NumRecordedFrames_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_NumRecordedFrames = { "NumRecordedFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, NumRecordedFrames), METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_NumRecordedFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_NumRecordedFrames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle_Inner = { "TrackToParticle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle_MetaData[] = {
		{ "Comment", "/** Maps a track index in the cache to the original particle index specified when recording */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Maps a track index in the cache to the original particle index specified when recording" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle = { "TrackToParticle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, TrackToParticle), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks_Inner = { "ParticleTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerParticleCacheData, METADATA_PARAMS(nullptr, 0) }; // 1769314911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks_MetaData[] = {
		{ "Comment", "/** Per-particle data, includes transforms, velocities and other per-particle, per-frame data */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Per-particle data, includes transforms, velocities and other per-particle, per-frame data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks = { "ParticleTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, ParticleTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks_MetaData)) }; // 1769314911
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_ValueProp = { "ChannelsTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRichCurves, METADATA_PARAMS(nullptr, 0) }; // 4002435259
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_Key_KeyProp = { "ChannelsTracks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_MetaData[] = {
		{ "Comment", "/** Per-particle data, includes transforms, velocities and other per-particle, per-frame data */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Per-particle data, includes transforms, velocities and other per-particle, per-frame data" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks = { "ChannelsTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, ChannelsTracks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_MetaData)) }; // 4002435259
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_ValueProp = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(nullptr, 0) }; // 778017158
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_Key_KeyProp = { "CurveData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_MetaData[] = {
		{ "Comment", "/** Per component/cache curve data, any continuous data that isn't per-particle can be stored here */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Per component/cache curve data, any continuous data that isn't per-particle can be stored here" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, CurveData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_MetaData)) }; // 778017158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_ValueProp = { "EventTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCacheEventTrack, METADATA_PARAMS(nullptr, 0) }; // 2385957589
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_Key_KeyProp = { "EventTracks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_MetaData[] = {
		{ "Comment", "/** Timestamped generic event tracks */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Timestamped generic event tracks" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks = { "EventTracks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, EventTracks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_MetaData)) }; // 2385957589
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_Spawnable_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Spawn template for an actor that can play this cache */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Spawn template for an actor that can play this cache" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_Spawnable = { "Spawnable", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, Spawnable), Z_Construct_UScriptStruct_FCacheSpawnableTemplate, METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_Spawnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_Spawnable_MetaData)) }; // 2635312087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_AdapterGuid_MetaData[] = {
		{ "Comment", "/** GUID identifier for the adapter that spawned this cache */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "GUID identifier for the adapter that spawned this cache" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_AdapterGuid = { "AdapterGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, AdapterGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_AdapterGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_AdapterGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCache_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "/** Version for controlling conditioning of older caches to work with current system. Newly created caches should always be saved as CurrentVersion. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosCache.h" },
		{ "ToolTip", "Version for controlling conditioning of older caches to work with current system. Newly created caches should always be saved as CurrentVersion." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChaosCache_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCache, Version), METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_RecordedDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_NumRecordedFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_TrackToParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ParticleTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_ChannelsTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_CurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_EventTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_Spawnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_AdapterGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCache_Statics::NewProp_Version,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosCache_Statics::ClassParams = {
		&UChaosCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosCache()
	{
		if (!Z_Registration_Info_UClass_UChaosCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosCache.OuterSingleton, Z_Construct_UClass_UChaosCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosCache.OuterSingleton;
	}
	template<> CHAOSCACHING_API UClass* StaticClass<UChaosCache>()
	{
		return UChaosCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosCache);
	UChaosCache::~UChaosCache() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosCache)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ScriptStructInfo[] = {
		{ FParticleTransformTrack::StaticStruct, Z_Construct_UScriptStruct_FParticleTransformTrack_Statics::NewStructOps, TEXT("ParticleTransformTrack"), &Z_Registration_Info_UScriptStruct_ParticleTransformTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleTransformTrack), 2091207192U) },
		{ FPerParticleCacheData::StaticStruct, Z_Construct_UScriptStruct_FPerParticleCacheData_Statics::NewStructOps, TEXT("PerParticleCacheData"), &Z_Registration_Info_UScriptStruct_PerParticleCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerParticleCacheData), 1769314911U) },
		{ FCacheSpawnableTemplate::StaticStruct, Z_Construct_UScriptStruct_FCacheSpawnableTemplate_Statics::NewStructOps, TEXT("CacheSpawnableTemplate"), &Z_Registration_Info_UScriptStruct_CacheSpawnableTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheSpawnableTemplate), 2635312087U) },
		{ FRichCurves::StaticStruct, Z_Construct_UScriptStruct_FRichCurves_Statics::NewStructOps, TEXT("RichCurves"), &Z_Registration_Info_UScriptStruct_RichCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRichCurves), 4002435259U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosCache, UChaosCache::StaticClass, TEXT("UChaosCache"), &Z_Registration_Info_UClass_UChaosCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosCache), 3668672348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_1991485452(TEXT("/Script/ChaosCaching"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_ChaosCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
