// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectPersistentCollection.h"
#include "GameplayTagContainer.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectPersistentCollection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectPersistentCollection();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectPersistentCollection_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectContainerRenderingComponent_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectCollectionEntry();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectContainer();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectCollectionEntry;
class UScriptStruct* FSmartObjectCollectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectCollectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectCollectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectCollectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectCollectionEntry.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectCollectionEntry>()
{
	return FSmartObjectCollectionEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefinitionIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct representing a unique registered component in the collection actor */" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
		{ "ToolTip", "Struct representing a unique registered component in the collection actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectCollectionEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectCollectionEntry, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Tags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectCollectionEntry, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectCollectionEntry, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectCollectionEntry, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Handle_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectCollectionEntry, Handle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Handle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_DefinitionIdx_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_DefinitionIdx = { "DefinitionIdx", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectCollectionEntry, DefinitionIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_DefinitionIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_DefinitionIdx_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewProp_DefinitionIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectCollectionEntry",
		sizeof(FSmartObjectCollectionEntry),
		alignof(FSmartObjectCollectionEntry),
		Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectCollectionEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectCollectionEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectCollectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectCollectionEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectContainer;
class UScriptStruct* FSmartObjectContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectContainer, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectContainer"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectContainer.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectContainer>()
{
	return FSmartObjectContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollectionEntries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredIdToObjectMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredIdToObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredIdToObjectMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredIdToObjectMap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Definitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectContainer, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Bounds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_CollectionEntries_Inner = { "CollectionEntries", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectCollectionEntry, METADATA_PARAMS(nullptr, 0) }; // 886027086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_CollectionEntries_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_CollectionEntries = { "CollectionEntries", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectContainer, CollectionEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_CollectionEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_CollectionEntries_MetaData)) }; // 886027086
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap_ValueProp = { "RegisteredIdToObjectMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap_Key_KeyProp = { "RegisteredIdToObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(nullptr, 0) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap = { "RegisteredIdToObjectMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectContainer, RegisteredIdToObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap_MetaData)) }; // 3072114966
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USmartObjectDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Definitions_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectContainer, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Definitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Definitions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "// used for reporting and debugging\n" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "used for reporting and debugging" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectContainer, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_CollectionEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_CollectionEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_RegisteredIdToObjectMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Definitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Definitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectContainer",
		sizeof(FSmartObjectContainer),
		alignof(FSmartObjectContainer),
		Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectContainer.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectContainer.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(ASmartObjectPersistentCollection::execRebuildCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebuildCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartObjectPersistentCollection::execClearCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCollection();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void ASmartObjectPersistentCollection::StaticRegisterNativesASmartObjectPersistentCollection()
	{
#if WITH_EDITOR
		UClass* Class = ASmartObjectPersistentCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCollection", &ASmartObjectPersistentCollection::execClearCollection },
			{ "RebuildCollection", &ASmartObjectPersistentCollection::execRebuildCollection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ASmartObjectPersistentCollection_ClearCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartObjectPersistentCollection_ClearCollection_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SmartObject" },
		{ "Comment", "/** Removes all entries from the collection. */" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
		{ "ToolTip", "Removes all entries from the collection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartObjectPersistentCollection_ClearCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartObjectPersistentCollection, nullptr, "ClearCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartObjectPersistentCollection_ClearCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartObjectPersistentCollection_ClearCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartObjectPersistentCollection_ClearCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASmartObjectPersistentCollection_ClearCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ASmartObjectPersistentCollection_RebuildCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartObjectPersistentCollection_RebuildCollection_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SmartObject" },
		{ "Comment", "/** Rebuild entries in the collection using all the SmartObjectComponents currently loaded in the level. */" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
		{ "ToolTip", "Rebuild entries in the collection using all the SmartObjectComponents currently loaded in the level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartObjectPersistentCollection_RebuildCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartObjectPersistentCollection, nullptr, "RebuildCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartObjectPersistentCollection_RebuildCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartObjectPersistentCollection_RebuildCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartObjectPersistentCollection_RebuildCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASmartObjectPersistentCollection_RebuildCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmartObjectPersistentCollection);
	UClass* Z_Construct_UClass_ASmartObjectPersistentCollection_NoRegister()
	{
		return ASmartObjectPersistentCollection::StaticClass();
	}
	struct Z_Construct_UClass_ASmartObjectPersistentCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectContainer;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateCollectionOnSmartObjectsChange_MetaData[];
#endif
		static void NewProp_bUpdateCollectionOnSmartObjectsChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateCollectionOnSmartObjectsChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawing_MetaData[];
#endif
		static void NewProp_bEnableDebugDrawing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawing;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ASmartObjectPersistentCollection_ClearCollection, "ClearCollection" }, // 1138236070
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ASmartObjectPersistentCollection_RebuildCollection, "RebuildCollection" }, // 3742339784
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor holding smart object persistent data */" },
		{ "HideCategories", "Rendering Replication Collision Input HLOD Actor LOD Cooking WorldPartition" },
		{ "IncludePath", "SmartObjectPersistentCollection.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor holding smart object persistent data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SmartObjectContainer_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SmartObjectContainer = { "SmartObjectContainer", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASmartObjectPersistentCollection, SmartObjectContainer), Z_Construct_UScriptStruct_FSmartObjectContainer, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SmartObjectContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SmartObjectContainer_MetaData)) }; // 395998703
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0024080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASmartObjectPersistentCollection, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_RenderingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_RenderingComponent = { "RenderingComponent", nullptr, (EPropertyFlags)0x0024080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASmartObjectPersistentCollection, RenderingComponent), Z_Construct_UClass_USmartObjectContainerRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_RenderingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_RenderingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bUpdateCollectionOnSmartObjectsChange_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	void Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bUpdateCollectionOnSmartObjectsChange_SetBit(void* Obj)
	{
		((ASmartObjectPersistentCollection*)Obj)->bUpdateCollectionOnSmartObjectsChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bUpdateCollectionOnSmartObjectsChange = { "bUpdateCollectionOnSmartObjectsChange", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASmartObjectPersistentCollection), &Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bUpdateCollectionOnSmartObjectsChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bUpdateCollectionOnSmartObjectsChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bUpdateCollectionOnSmartObjectsChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bEnableDebugDrawing_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectPersistentCollection.h" },
	};
#endif
	void Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bEnableDebugDrawing_SetBit(void* Obj)
	{
		((ASmartObjectPersistentCollection*)Obj)->bEnableDebugDrawing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bEnableDebugDrawing = { "bEnableDebugDrawing", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASmartObjectPersistentCollection), &Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bEnableDebugDrawing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bEnableDebugDrawing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bEnableDebugDrawing_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SmartObjectContainer,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_RenderingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bUpdateCollectionOnSmartObjectsChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::NewProp_bEnableDebugDrawing,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmartObjectPersistentCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::ClassParams = {
		&ASmartObjectPersistentCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmartObjectPersistentCollection()
	{
		if (!Z_Registration_Info_UClass_ASmartObjectPersistentCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmartObjectPersistentCollection.OuterSingleton, Z_Construct_UClass_ASmartObjectPersistentCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASmartObjectPersistentCollection.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<ASmartObjectPersistentCollection>()
	{
		return ASmartObjectPersistentCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmartObjectPersistentCollection);
	ASmartObjectPersistentCollection::~ASmartObjectPersistentCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectCollectionEntry::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics::NewStructOps, TEXT("SmartObjectCollectionEntry"), &Z_Registration_Info_UScriptStruct_SmartObjectCollectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectCollectionEntry), 886027086U) },
		{ FSmartObjectContainer::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectContainer_Statics::NewStructOps, TEXT("SmartObjectContainer"), &Z_Registration_Info_UScriptStruct_SmartObjectContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectContainer), 395998703U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASmartObjectPersistentCollection, ASmartObjectPersistentCollection::StaticClass, TEXT("ASmartObjectPersistentCollection"), &Z_Registration_Info_UClass_ASmartObjectPersistentCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmartObjectPersistentCollection), 4203816804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_1406768364(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
