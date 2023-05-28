// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SnapshotDataCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotDataCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FActorSnapshotCache();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FClassDefaultSnapshotCache();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotDataCache();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectSnapshotCache();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSnapshotCache;
class UScriptStruct* FActorSnapshotCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSnapshotCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSnapshotCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSnapshotCache, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ActorSnapshotCache"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSnapshotCache.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FActorSnapshotCache>()
{
	return FActorSnapshotCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSnapshotCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSnapshotActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedSnapshotActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivedSerialisation_MetaData[];
#endif
		static void NewProp_bReceivedSerialisation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivedSerialisation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectDependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectDependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSnapshotCache>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_CachedSnapshotActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_CachedSnapshotActor = { "CachedSnapshotActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotCache, CachedSnapshotActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_CachedSnapshotActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_CachedSnapshotActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_bReceivedSerialisation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether we already serialised the snapshot data into the actor.\n\x09 * \n\x09 * This exists because sometimes we need to preallocate an actor without serialisation.\n\x09 * Example: When serializing another actor which referenced this actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
		{ "ToolTip", "Whether we already serialised the snapshot data into the actor.\n\nThis exists because sometimes we need to preallocate an actor without serialisation.\nExample: When serializing another actor which referenced this actor." },
	};
#endif
	void Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_bReceivedSerialisation_SetBit(void* Obj)
	{
		((FActorSnapshotCache*)Obj)->bReceivedSerialisation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_bReceivedSerialisation = { "bReceivedSerialisation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorSnapshotCache), &Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_bReceivedSerialisation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_bReceivedSerialisation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_bReceivedSerialisation_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_ObjectDependencies_Inner = { "ObjectDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_ObjectDependencies_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores all object dependencies. Only valid if bReceivedSerialisation == true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
		{ "ToolTip", "Stores all object dependencies. Only valid if bReceivedSerialisation == true." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_ObjectDependencies = { "ObjectDependencies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotCache, ObjectDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_ObjectDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_ObjectDependencies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_CachedSnapshotActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_bReceivedSerialisation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_ObjectDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewProp_ObjectDependencies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"ActorSnapshotCache",
		sizeof(FActorSnapshotCache),
		alignof(FActorSnapshotCache),
		Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSnapshotCache()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSnapshotCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSnapshotCache.InnerSingleton, Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSnapshotCache.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubobjectSnapshotCache;
class UScriptStruct* FSubobjectSnapshotCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubobjectSnapshotCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubobjectSnapshotCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubobjectSnapshotCache, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SubobjectSnapshotCache"));
	}
	return Z_Registration_Info_UScriptStruct_SubobjectSnapshotCache.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSubobjectSnapshotCache>()
{
	return FSubobjectSnapshotCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapshotObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EditorObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubobjectSnapshotCache>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_SnapshotObject_MetaData[] = {
		{ "Comment", "/** Allocated in snapshot world */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
		{ "ToolTip", "Allocated in snapshot world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_SnapshotObject = { "SnapshotObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectSnapshotCache, SnapshotObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_SnapshotObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_SnapshotObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_EditorObject_MetaData[] = {
		{ "Comment", "/** Allocated in editor world */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
		{ "ToolTip", "Allocated in editor world" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_EditorObject = { "EditorObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectSnapshotCache, EditorObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_EditorObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_EditorObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_SnapshotObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewProp_EditorObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"SubobjectSnapshotCache",
		sizeof(FSubobjectSnapshotCache),
		alignof(FSubobjectSnapshotCache),
		Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubobjectSnapshotCache()
	{
		if (!Z_Registration_Info_UScriptStruct_SubobjectSnapshotCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubobjectSnapshotCache.InnerSingleton, Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubobjectSnapshotCache.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassDefaultSnapshotCache;
class UScriptStruct* FClassDefaultSnapshotCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassDefaultSnapshotCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassDefaultSnapshotCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassDefaultSnapshotCache, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ClassDefaultSnapshotCache"));
	}
	return Z_Registration_Info_UScriptStruct_ClassDefaultSnapshotCache.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FClassDefaultSnapshotCache>()
{
	return FClassDefaultSnapshotCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLoadedClassDefault_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedLoadedClassDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassDefaultSnapshotCache>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::NewProp_CachedLoadedClassDefault_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::NewProp_CachedLoadedClassDefault = { "CachedLoadedClassDefault", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassDefaultSnapshotCache, CachedLoadedClassDefault), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::NewProp_CachedLoadedClassDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::NewProp_CachedLoadedClassDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::NewProp_CachedLoadedClassDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"ClassDefaultSnapshotCache",
		sizeof(FClassDefaultSnapshotCache),
		alignof(FClassDefaultSnapshotCache),
		Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassDefaultSnapshotCache()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassDefaultSnapshotCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassDefaultSnapshotCache.InnerSingleton, Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassDefaultSnapshotCache.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapshotDataCache;
class UScriptStruct* FSnapshotDataCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapshotDataCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapshotDataCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotDataCache, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SnapshotDataCache"));
	}
	return Z_Registration_Info_UScriptStruct_SnapshotDataCache.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSnapshotDataCache>()
{
	return FSnapshotDataCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapshotDataCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorCache_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubobjectCache_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubobjectCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubobjectCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubobjectCache;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArchetypeObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchetypeObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArchetypeObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Caches data for re-use. */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
		{ "ToolTip", "Caches data for re-use." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotDataCache>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache_ValueProp = { "ActorCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FActorSnapshotCache, METADATA_PARAMS(nullptr, 0) }; // 3709485995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache_Key_KeyProp = { "ActorCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache = { "ActorCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotDataCache, ActorCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache_MetaData)) }; // 3709485995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache_ValueProp = { "SubobjectCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSubobjectSnapshotCache, METADATA_PARAMS(nullptr, 0) }; // 324844713
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache_Key_KeyProp = { "SubobjectCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache = { "SubobjectCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotDataCache, SubobjectCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache_MetaData)) }; // 324844713
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ArchetypeObjects_Inner = { "ArchetypeObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ArchetypeObjects_MetaData[] = {
		{ "Comment", "/**\n\x09 * Caches each archetype object for faster lookup.\n\x09 * \n\x09 * Equal length as FWorldSnapshotData::ClassData and the indices correspond to another.\n\x09 * Elements can be null in which case there is no cache, yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotDataCache.h" },
		{ "ToolTip", "Caches each archetype object for faster lookup.\n\nEqual length as FWorldSnapshotData::ClassData and the indices correspond to another.\nElements can be null in which case there is no cache, yet." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ArchetypeObjects = { "ArchetypeObjects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotDataCache, ArchetypeObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ArchetypeObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ArchetypeObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ActorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_SubobjectCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ArchetypeObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewProp_ArchetypeObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"SnapshotDataCache",
		sizeof(FSnapshotDataCache),
		alignof(FSnapshotDataCache),
		Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshotDataCache()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapshotDataCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapshotDataCache.InnerSingleton, Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapshotDataCache.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotDataCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotDataCache_h_Statics::ScriptStructInfo[] = {
		{ FActorSnapshotCache::StaticStruct, Z_Construct_UScriptStruct_FActorSnapshotCache_Statics::NewStructOps, TEXT("ActorSnapshotCache"), &Z_Registration_Info_UScriptStruct_ActorSnapshotCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSnapshotCache), 3709485995U) },
		{ FSubobjectSnapshotCache::StaticStruct, Z_Construct_UScriptStruct_FSubobjectSnapshotCache_Statics::NewStructOps, TEXT("SubobjectSnapshotCache"), &Z_Registration_Info_UScriptStruct_SubobjectSnapshotCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubobjectSnapshotCache), 324844713U) },
		{ FClassDefaultSnapshotCache::StaticStruct, Z_Construct_UScriptStruct_FClassDefaultSnapshotCache_Statics::NewStructOps, TEXT("ClassDefaultSnapshotCache"), &Z_Registration_Info_UScriptStruct_ClassDefaultSnapshotCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassDefaultSnapshotCache), 114623774U) },
		{ FSnapshotDataCache::StaticStruct, Z_Construct_UScriptStruct_FSnapshotDataCache_Statics::NewStructOps, TEXT("SnapshotDataCache"), &Z_Registration_Info_UScriptStruct_SnapshotDataCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapshotDataCache), 943129325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotDataCache_h_2049806737(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotDataCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotDataCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
