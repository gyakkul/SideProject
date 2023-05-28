// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/WorldSnapshotData.h"
#include "Data/ActorSnapshotData.h"
#include "Data/ClassDefaultObjectSnapshotData.h"
#include "Data/ClassSnapshotData.h"
#include "Data/CustomSerializationData.h"
#include "Data/SnapshotVersion.h"
#include "Data/SubobjectSnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldSnapshotData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FActorSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FClassSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomSerializationData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotVersionInfo();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldSnapshotData;
class UScriptStruct* FWorldSnapshotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldSnapshotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldSnapshotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldSnapshotData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("WorldSnapshotData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldSnapshotData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FWorldSnapshotData>()
{
	return FWorldSnapshotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotWorld_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SnapshotWorld;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapshotSublevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotSublevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapshotSublevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotVersionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotVersionInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassDefaults_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassDefaults_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ClassDefaults;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorData;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SerializedNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedObjectReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedObjectReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedObjectReferences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subobjects_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Subobjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subobjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Subobjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSubobjectSerializationData_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomSubobjectSerializationData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSubobjectSerializationData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomSubobjectSerializationData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NameToIndex_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReferenceToIndex_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceToIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReferenceToIndex;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ArchetypeToClassDataIndex_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArchetypeToClassDataIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchetypeToClassDataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ArchetypeToClassDataIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds saved world data. See WorldDataUtil for operations. */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Holds saved world data. See WorldDataUtil for operations." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldSnapshotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotWorld_MetaData[] = {
		{ "Comment", "/* The root world we will be adding deserialized snapshots actors to */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "The root world we will be adding deserialized snapshots actors to" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotWorld = { "SnapshotWorld", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, SnapshotWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotWorld_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotSublevels_Inner = { "SnapshotSublevels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotSublevels_MetaData[] = {
		{ "Comment", "/** Sublevels of SnapshotWorld; excludes SnapshotWorld->PersistentLevel */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Sublevels of SnapshotWorld; excludes SnapshotWorld->PersistentLevel" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotSublevels = { "SnapshotSublevels", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, SnapshotSublevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotSublevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotSublevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotVersionInfo_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores versioning information we inject into archives.\n\x09 * This is to support asset migration, like FArchive::UsingCustomVersion.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Stores versioning information we inject into archives.\nThis is to support asset migration, like FArchive::UsingCustomVersion." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotVersionInfo = { "SnapshotVersionInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, SnapshotVersionInfo), Z_Construct_UScriptStruct_FSnapshotVersionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotVersionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotVersionInfo_MetaData)) }; // 472184872
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults_ValueProp = { "ClassDefaults", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData, METADATA_PARAMS(nullptr, 0) }; // 3755201535
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults_Key_KeyProp = { "ClassDefaults_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults_MetaData[] = {
		{ "Comment", "/**\n\x09 * We only save properties with values different from their CDO counterpart.\n\x09 * Because of this, we need to save class defaults in the snapshot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "We only save properties with values different from their CDO counterpart.\nBecause of this, we need to save class defaults in the snapshot." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults = { "ClassDefaults", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, ClassDefaults_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults_MetaData)) }; // 3755201535
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassData_Inner = { "ClassData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClassSnapshotData, METADATA_PARAMS(nullptr, 0) }; // 1970864574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Saves class info, such as archetype data, for every object's class.\n\x09 * \n\x09 * Actor classes have exactly one entry FClassSnapshotData::FClassSnapshotData.\n\x09 * For other classes, e.g. components, there may be multiple entries for the same class. This is because\n\x09 * subobjects can have their own archtetypes (you can see this by looking a the reset to default button in the details panel).\n\x09 *\n\x09 * Added in 5.1.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Saves class info, such as archetype data, for every object's class.\n\nActor classes have exactly one entry FClassSnapshotData::FClassSnapshotData.\nFor other classes, e.g. components, there may be multiple entries for the same class. This is because\nsubobjects can have their own archtetypes (you can see this by looking a the reset to default button in the details panel).\n\nAdded in 5.1." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassData = { "ClassData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, ClassData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassData_MetaData)) }; // 1970864574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData_ValueProp = { "ActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FActorSnapshotData, METADATA_PARAMS(nullptr, 0) }; // 141884411
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData_Key_KeyProp = { "ActorData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Holds serialized actor data.\n\x09 * Maps the original actor's path to its serialized data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Holds serialized actor data.\nMaps the original actor's path to its serialized data." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData = { "ActorData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, ActorData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData_MetaData)) }; // 141884411
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedNames_Inner = { "SerializedNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedNames_MetaData[] = {
		{ "Comment", "/** Whenever an object needs to serialize a name, we add it to this array and serialize an index to this array. */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Whenever an object needs to serialize a name, we add it to this array and serialize an index to this array." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedNames = { "SerializedNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, SerializedNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedObjectReferences_Inner = { "SerializedObjectReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedObjectReferences_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whenever an object needs to serialize an object reference, we keep the object path here and serialize an index to this array.\n\x09 * \n\x09 * External references, e.g. UDataAssets or UMaterials, are easily handled.\n\x09 * Example: UStaticMesh /Game/Australia/StaticMeshes/MegaScans/Nature_Rock_vbhtdixga/vbhtdixga_LOD0.vbhtdixga_LOD0\n\x09 * \n\x09 * Internal references, e.g. to subobjects and to other actors in the world, are a bit tricky.\n\x09 * For internal references, we need to do some translation:\n\x09 * Example original: UStaticMeshActor::StaticMeshComponent /Game/MapName.MapName:PersistentLevel.StaticMeshActor_42.StaticMeshComponent\n\x09 * Example translated: UStaticMeshActor::StaticMeshComponent /Engine/Transient.World_21:PersistentLevel.StaticMeshActor_42.StaticMeshComponent\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Whenever an object needs to serialize an object reference, we keep the object path here and serialize an index to this array.\n\nExternal references, e.g. UDataAssets or UMaterials, are easily handled.\nExample: UStaticMesh /Game/Australia/StaticMeshes/MegaScans/Nature_Rock_vbhtdixga/vbhtdixga_LOD0.vbhtdixga_LOD0\n\nInternal references, e.g. to subobjects and to other actors in the world, are a bit tricky.\nFor internal references, we need to do some translation:\nExample original: UStaticMeshActor::StaticMeshComponent /Game/MapName.MapName:PersistentLevel.StaticMeshActor_42.StaticMeshComponent\nExample translated: UStaticMeshActor::StaticMeshComponent /Engine/Transient.World_21:PersistentLevel.StaticMeshActor_42.StaticMeshComponent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedObjectReferences = { "SerializedObjectReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, SerializedObjectReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedObjectReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedObjectReferences_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects_ValueProp = { "Subobjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSubobjectSnapshotData, METADATA_PARAMS(nullptr, 0) }; // 3414843011
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects_Key_KeyProp = { "Subobjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects_MetaData[] = {
		{ "Comment", "/**\n\x09 * Key: A valid index to SerializedObjectReferences.\n\x09 * Value: Subobject information for the associated entry in SerializedObjectReferences.\n\x09 * There is only an entry if the associated object is in fact a subobject. Actors and assets in particular do not get any entry.\n\x09 *\n\x09 * Added in 5.0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Key: A valid index to SerializedObjectReferences.\nValue: Subobject information for the associated entry in SerializedObjectReferences.\nThere is only an entry if the associated object is in fact a subobject. Actors and assets in particular do not get any entry.\n\nAdded in 5.0." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects = { "Subobjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, Subobjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects_MetaData)) }; // 3414843011
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData_ValueProp = { "CustomSubobjectSerializationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCustomSerializationData, METADATA_PARAMS(nullptr, 0) }; // 1933641368
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData_Key_KeyProp = { "CustomSubobjectSerializationData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Key: A valid index to SerializedObjectReferences\n\x09 * Value: Data that was generated by some ICustomObjectSnapshotSerializer.\n\x09 * \n\x09 * Added in 5.0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Key: A valid index to SerializedObjectReferences\nValue: Data that was generated by some ICustomObjectSnapshotSerializer.\n\nAdded in 5.0." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData = { "CustomSubobjectSerializationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, CustomSubobjectSerializationData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData_MetaData)) }; // 1933641368
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex_ValueProp = { "NameToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex_Key_KeyProp = { "NameToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex_MetaData[] = {
		{ "Comment", "/** Binds every entry in SerializedNames to its index. Speeds up adding unique names. */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Binds every entry in SerializedNames to its index. Speeds up adding unique names." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex = { "NameToIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, NameToIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex_ValueProp = { "ReferenceToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex_Key_KeyProp = { "ReferenceToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex_MetaData[] = {
		{ "Comment", "/** Binds every entry in SerializedObjectReferences to its index. Speeds up adding unique references. */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Binds every entry in SerializedObjectReferences to its index. Speeds up adding unique references." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex = { "ReferenceToIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, ReferenceToIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex_ValueProp = { "ArchetypeToClassDataIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex_Key_KeyProp = { "ArchetypeToClassDataIndex_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex_MetaData[] = {
		{ "Comment", "/** Binds every archetype object for which we saved the class data in ClassData to its index. Speeds up adding unique classes. */" },
		{ "ModuleRelativePath", "Public/Data/WorldSnapshotData.h" },
		{ "ToolTip", "Binds every archetype object for which we saved the class data in ClassData to its index. Speeds up adding unique classes." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex = { "ArchetypeToClassDataIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldSnapshotData, ArchetypeToClassDataIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotSublevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotSublevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SnapshotVersionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ClassData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ActorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedObjectReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_SerializedObjectReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_Subobjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_CustomSubobjectSerializationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_NameToIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ReferenceToIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewProp_ArchetypeToClassDataIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"WorldSnapshotData",
		sizeof(FWorldSnapshotData),
		alignof(FWorldSnapshotData),
		Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldSnapshotData()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldSnapshotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldSnapshotData.InnerSingleton, Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldSnapshotData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_WorldSnapshotData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_WorldSnapshotData_h_Statics::ScriptStructInfo[] = {
		{ FWorldSnapshotData::StaticStruct, Z_Construct_UScriptStruct_FWorldSnapshotData_Statics::NewStructOps, TEXT("WorldSnapshotData"), &Z_Registration_Info_UScriptStruct_WorldSnapshotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldSnapshotData), 803610831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_WorldSnapshotData_h_2731270198(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_WorldSnapshotData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_WorldSnapshotData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
