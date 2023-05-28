// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectMixerEditorSerializedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectMixerEditorSerializedData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorSerializedData();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorSerializedData_NoRegister();
	OBJECTMIXEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData();
	OBJECTMIXEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet();
	OBJECTMIXEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerColumnData();
	OBJECTMIXEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter();
	UPackage* Z_Construct_UPackage__Script_ObjectMixerEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectData;
class UScriptStruct* FObjectMixerCollectionObjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData, (UObject*)Z_Construct_UPackage__Script_ObjectMixerEditor(), TEXT("ObjectMixerCollectionObjectData"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectData.OuterSingleton;
}
template<> OBJECTMIXEREDITOR_API UScriptStruct* StaticStruct<FObjectMixerCollectionObjectData>()
{
	return FObjectMixerCollectionObjectData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectMixerCollectionObjectData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectMixerCollectionObjectData, ObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::NewProp_ObjectPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::NewProp_ObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
		nullptr,
		&NewStructOps,
		"ObjectMixerCollectionObjectData",
		sizeof(FObjectMixerCollectionObjectData),
		alignof(FObjectMixerCollectionObjectData),
		Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectData.InnerSingleton, Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectSet;
class UScriptStruct* FObjectMixerCollectionObjectSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet, (UObject*)Z_Construct_UPackage__Script_ObjectMixerEditor(), TEXT("ObjectMixerCollectionObjectSet"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectSet.OuterSingleton;
}
template<> OBJECTMIXEREDITOR_API UScriptStruct* StaticStruct<FObjectMixerCollectionObjectSet>()
{
	return FObjectMixerCollectionObjectSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollectionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollectionObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectMixerCollectionObjectSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectMixerCollectionObjectSet, CollectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionObjects_Inner = { "CollectionObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData, METADATA_PARAMS(nullptr, 0) }; // 981316924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionObjects = { "CollectionObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectMixerCollectionObjectSet, CollectionObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionObjects_MetaData)) }; // 981316924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewProp_CollectionObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
		nullptr,
		&NewStructOps,
		"ObjectMixerCollectionObjectSet",
		sizeof(FObjectMixerCollectionObjectSet),
		alignof(FObjectMixerCollectionObjectSet),
		Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectSet.InnerSingleton, Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectMixerColumnData;
class UScriptStruct* FObjectMixerColumnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectMixerColumnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectMixerColumnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectMixerColumnData, (UObject*)Z_Construct_UPackage__Script_ObjectMixerEditor(), TEXT("ObjectMixerColumnData"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectMixerColumnData.OuterSingleton;
}
template<> OBJECTMIXEREDITOR_API UScriptStruct* StaticStruct<FObjectMixerColumnData>()
{
	return FObjectMixerColumnData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeEnabled_MetaData[];
#endif
		static void NewProp_bShouldBeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectMixerColumnData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_ColumnName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectMixerColumnData, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_ColumnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_bShouldBeEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_bShouldBeEnabled_SetBit(void* Obj)
	{
		((FObjectMixerColumnData*)Obj)->bShouldBeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_bShouldBeEnabled = { "bShouldBeEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FObjectMixerColumnData), &Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_bShouldBeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_bShouldBeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_bShouldBeEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_ColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewProp_bShouldBeEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
		nullptr,
		&NewStructOps,
		"ObjectMixerColumnData",
		sizeof(FObjectMixerColumnData),
		alignof(FObjectMixerColumnData),
		Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerColumnData()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectMixerColumnData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectMixerColumnData.InnerSingleton, Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectMixerColumnData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectMixerSerializationDataPerFilter;
class UScriptStruct* FObjectMixerSerializationDataPerFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectMixerSerializationDataPerFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectMixerSerializationDataPerFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter, (UObject*)Z_Construct_UPackage__Script_ObjectMixerEditor(), TEXT("ObjectMixerSerializationDataPerFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectMixerSerializationDataPerFilter.OuterSingleton;
}
template<> OBJECTMIXEREDITOR_API UScriptStruct* StaticStruct<FObjectMixerSerializationDataPerFilter>()
{
	return FObjectMixerSerializationDataPerFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilterClassName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedCollections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedColumnData_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedColumnData_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SerializedColumnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectMixerSerializationDataPerFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_FilterClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_FilterClassName = { "FilterClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectMixerSerializationDataPerFilter, FilterClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_FilterClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_FilterClassName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedCollections_Inner = { "SerializedCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet, METADATA_PARAMS(nullptr, 0) }; // 1320330084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedCollections_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedCollections = { "SerializedCollections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectMixerSerializationDataPerFilter, SerializedCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedCollections_MetaData)) }; // 1320330084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedColumnData_ElementProp = { "SerializedColumnData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectMixerColumnData, METADATA_PARAMS(nullptr, 0) }; // 3102279616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedColumnData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FObjectMixerColumnData>::Value, "The structure 'FObjectMixerColumnData' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedColumnData = { "SerializedColumnData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectMixerSerializationDataPerFilter, SerializedColumnData), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedColumnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedColumnData_MetaData)) }; // 3102279616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_FilterClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedCollections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedColumnData_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewProp_SerializedColumnData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
		nullptr,
		&NewStructOps,
		"ObjectMixerSerializationDataPerFilter",
		sizeof(FObjectMixerSerializationDataPerFilter),
		alignof(FObjectMixerSerializationDataPerFilter),
		Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectMixerSerializationDataPerFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectMixerSerializationDataPerFilter.InnerSingleton, Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectMixerSerializationDataPerFilter.InnerSingleton;
	}
	void UObjectMixerEditorSerializedData::StaticRegisterNativesUObjectMixerEditorSerializedData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectMixerEditorSerializedData);
	UClass* Z_Construct_UClass_UObjectMixerEditorSerializedData_NoRegister()
	{
		return UObjectMixerEditorSerializedData::StaticClass();
	}
	struct Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedDataPerFilter_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedDataPerFilter_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SerializedDataPerFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectMixerEditorSerializedData.h" },
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::NewProp_SerializedDataPerFilter_ElementProp = { "SerializedDataPerFilter", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter, METADATA_PARAMS(nullptr, 0) }; // 4068053039
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::NewProp_SerializedDataPerFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSerializedData.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FObjectMixerSerializationDataPerFilter>::Value, "The structure 'FObjectMixerSerializationDataPerFilter' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::NewProp_SerializedDataPerFilter = { "SerializedDataPerFilter", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectMixerEditorSerializedData, SerializedDataPerFilter), METADATA_PARAMS(Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::NewProp_SerializedDataPerFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::NewProp_SerializedDataPerFilter_MetaData)) }; // 4068053039
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::NewProp_SerializedDataPerFilter_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::NewProp_SerializedDataPerFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectMixerEditorSerializedData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::ClassParams = {
		&UObjectMixerEditorSerializedData::StaticClass,
		"ObjectMixerSerializedData",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectMixerEditorSerializedData()
	{
		if (!Z_Registration_Info_UClass_UObjectMixerEditorSerializedData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectMixerEditorSerializedData.OuterSingleton, Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectMixerEditorSerializedData.OuterSingleton;
	}
	template<> OBJECTMIXEREDITOR_API UClass* StaticClass<UObjectMixerEditorSerializedData>()
	{
		return UObjectMixerEditorSerializedData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectMixerEditorSerializedData);
	UObjectMixerEditorSerializedData::~UObjectMixerEditorSerializedData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_Statics::ScriptStructInfo[] = {
		{ FObjectMixerCollectionObjectData::StaticStruct, Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics::NewStructOps, TEXT("ObjectMixerCollectionObjectData"), &Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectMixerCollectionObjectData), 981316924U) },
		{ FObjectMixerCollectionObjectSet::StaticStruct, Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics::NewStructOps, TEXT("ObjectMixerCollectionObjectSet"), &Z_Registration_Info_UScriptStruct_ObjectMixerCollectionObjectSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectMixerCollectionObjectSet), 1320330084U) },
		{ FObjectMixerColumnData::StaticStruct, Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics::NewStructOps, TEXT("ObjectMixerColumnData"), &Z_Registration_Info_UScriptStruct_ObjectMixerColumnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectMixerColumnData), 3102279616U) },
		{ FObjectMixerSerializationDataPerFilter::StaticStruct, Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics::NewStructOps, TEXT("ObjectMixerSerializationDataPerFilter"), &Z_Registration_Info_UScriptStruct_ObjectMixerSerializationDataPerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectMixerSerializationDataPerFilter), 4068053039U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectMixerEditorSerializedData, UObjectMixerEditorSerializedData::StaticClass, TEXT("UObjectMixerEditorSerializedData"), &Z_Registration_Info_UClass_UObjectMixerEditorSerializedData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectMixerEditorSerializedData), 2314259323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_1573199855(TEXT("/Script/ObjectMixerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
