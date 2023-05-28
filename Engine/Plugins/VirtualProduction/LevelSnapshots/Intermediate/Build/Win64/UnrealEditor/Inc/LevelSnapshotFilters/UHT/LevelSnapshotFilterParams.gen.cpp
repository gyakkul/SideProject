// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSnapshotFilterParams.h"
#include "PropertyContainerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotFilterParams() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsActorValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsAddedActorValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsAddedComponentValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsDeletedActorValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsDeletedComponentValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FIsPropertyValidParams();
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyContainerHandle();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsActorValidParams;
class UScriptStruct* FIsActorValidParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsActorValidParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsActorValidParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsActorValidParams, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("IsActorValidParams"));
	}
	return Z_Registration_Info_UScriptStruct_IsActorValidParams.OuterSingleton;
}
template<> LEVELSNAPSHOTFILTERS_API UScriptStruct* StaticStruct<FIsActorValidParams>()
{
	return FIsActorValidParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsActorValidParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapshotActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsActorValidParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsActorValidParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_SnapshotActor_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** The actor saved in the snapshot */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "The actor saved in the snapshot" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_SnapshotActor = { "SnapshotActor", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsActorValidParams, SnapshotActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_SnapshotActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_SnapshotActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_LevelActor_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** The actor equivalent to LevelActor: it exists in the world */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "The actor equivalent to LevelActor: it exists in the world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_LevelActor = { "LevelActor", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsActorValidParams, LevelActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_LevelActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_LevelActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsActorValidParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_SnapshotActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewProp_LevelActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsActorValidParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		&NewStructOps,
		"IsActorValidParams",
		sizeof(FIsActorValidParams),
		alignof(FIsActorValidParams),
		Z_Construct_UScriptStruct_FIsActorValidParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsActorValidParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsActorValidParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsActorValidParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsActorValidParams()
	{
		if (!Z_Registration_Info_UScriptStruct_IsActorValidParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsActorValidParams.InnerSingleton, Z_Construct_UScriptStruct_FIsActorValidParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsActorValidParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsPropertyValidParams;
class UScriptStruct* FIsPropertyValidParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsPropertyValidParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsPropertyValidParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsPropertyValidParams, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("IsPropertyValidParams"));
	}
	return Z_Registration_Info_UScriptStruct_IsPropertyValidParams.OuterSingleton;
}
template<> LEVELSNAPSHOTFILTERS_API UScriptStruct* StaticStruct<FIsPropertyValidParams>()
{
	return FIsPropertyValidParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapshotActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotPropertyContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotPropertyContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelPropertyContainers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelPropertyContainers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsPropertyValidParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotActor_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** The actor saved in the snapshot */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "The actor saved in the snapshot" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotActor = { "SnapshotActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsPropertyValidParams, SnapshotActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelActor_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** The actor equivalent to LevelActor: it exists in the world */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "The actor equivalent to LevelActor: it exists in the world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelActor = { "LevelActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsPropertyValidParams, LevelActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotPropertyContainer_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** For passing to FProperty::ContainerPtrToValuePtr. This is either SnapshotActor or a subobject thereof. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "For passing to FProperty::ContainerPtrToValuePtr. This is either SnapshotActor or a subobject thereof." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotPropertyContainer = { "SnapshotPropertyContainer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsPropertyValidParams, SnapshotPropertyContainer), Z_Construct_UScriptStruct_FPropertyContainerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotPropertyContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotPropertyContainer_MetaData)) }; // 1532387083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelPropertyContainers_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** For passing to FProperty::ContainerPtrToValuePtr. This is either LevelPropertyContainers or a subobject thereof. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "For passing to FProperty::ContainerPtrToValuePtr. This is either LevelPropertyContainers or a subobject thereof." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelPropertyContainers = { "LevelPropertyContainers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsPropertyValidParams, LevelPropertyContainers), Z_Construct_UScriptStruct_FPropertyContainerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelPropertyContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelPropertyContainers_MetaData)) }; // 1532387083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** The property that we may want to rollback. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "The property that we may want to rollback." },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsPropertyValidParams, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_Property_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_PropertyPath_Inner = { "PropertyPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * Each elements is the name of a subobject name leading to this property. The last element is the property name.\n\x09 * The first element is either the name of a component or a struct/subobject in the root actor.\n\x09 *\n\x09 * Examples:\n\x09 *\x09- MyCustomComponent -> MyCustomStructPropertyName -> PropertyName\n\x09 *  - MyCustomComponent -> MyCustomStructPropertyName\n\x09 *\x09- StructPropertyNameInActor -> PropertyName\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "Each elements is the name of a subobject name leading to this property. The last element is the property name.\nThe first element is either the name of a component or a struct/subobject in the root actor.\n\nExamples:\n     - MyCustomComponent -> MyCustomStructPropertyName -> PropertyName\n - MyCustomComponent -> MyCustomStructPropertyName\n     - StructPropertyNameInActor -> PropertyName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsPropertyValidParams, PropertyPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_PropertyPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_SnapshotPropertyContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_LevelPropertyContainers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_PropertyPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewProp_PropertyPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		&NewStructOps,
		"IsPropertyValidParams",
		sizeof(FIsPropertyValidParams),
		alignof(FIsPropertyValidParams),
		Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsPropertyValidParams()
	{
		if (!Z_Registration_Info_UScriptStruct_IsPropertyValidParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsPropertyValidParams.InnerSingleton, Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsPropertyValidParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsDeletedActorValidParams;
class UScriptStruct* FIsDeletedActorValidParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsDeletedActorValidParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsDeletedActorValidParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsDeletedActorValidParams, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("IsDeletedActorValidParams"));
	}
	return Z_Registration_Info_UScriptStruct_IsDeletedActorValidParams.OuterSingleton;
}
template<> LEVELSNAPSHOTFILTERS_API UScriptStruct* StaticStruct<FIsDeletedActorValidParams>()
{
	return FIsDeletedActorValidParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedActorPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedActorPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsDeletedActorValidParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::NewProp_SavedActorPath_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * Holds path info for an actor that was deleted since the snapshot was taken.\n\x09 * Contains the path to the original actor before it was deleted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "Holds path info for an actor that was deleted since the snapshot was taken.\nContains the path to the original actor before it was deleted." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::NewProp_SavedActorPath = { "SavedActorPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsDeletedActorValidParams, SavedActorPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::NewProp_SavedActorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::NewProp_SavedActorPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::NewProp_SavedActorPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		&NewStructOps,
		"IsDeletedActorValidParams",
		sizeof(FIsDeletedActorValidParams),
		alignof(FIsDeletedActorValidParams),
		Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsDeletedActorValidParams()
	{
		if (!Z_Registration_Info_UScriptStruct_IsDeletedActorValidParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsDeletedActorValidParams.InnerSingleton, Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsDeletedActorValidParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsAddedActorValidParams;
class UScriptStruct* FIsAddedActorValidParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsAddedActorValidParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsAddedActorValidParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsAddedActorValidParams, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("IsAddedActorValidParams"));
	}
	return Z_Registration_Info_UScriptStruct_IsAddedActorValidParams.OuterSingleton;
}
template<> LEVELSNAPSHOTFILTERS_API UScriptStruct* StaticStruct<FIsAddedActorValidParams>()
{
	return FIsAddedActorValidParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsAddedActorValidParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::NewProp_NewActor_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** This actor was added to the level since the snapshot was taken. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "This actor was added to the level since the snapshot was taken." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsAddedActorValidParams, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::NewProp_NewActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::NewProp_NewActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::NewProp_NewActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		&NewStructOps,
		"IsAddedActorValidParams",
		sizeof(FIsAddedActorValidParams),
		alignof(FIsAddedActorValidParams),
		Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsAddedActorValidParams()
	{
		if (!Z_Registration_Info_UScriptStruct_IsAddedActorValidParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsAddedActorValidParams.InnerSingleton, Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsAddedActorValidParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsDeletedComponentValidParams;
class UScriptStruct* FIsDeletedComponentValidParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsDeletedComponentValidParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsDeletedComponentValidParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsDeletedComponentValidParams, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("IsDeletedComponentValidParams"));
	}
	return Z_Registration_Info_UScriptStruct_IsDeletedComponentValidParams.OuterSingleton;
}
template<> LEVELSNAPSHOTFILTERS_API UScriptStruct* StaticStruct<FIsDeletedComponentValidParams>()
{
	return FIsDeletedComponentValidParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeletedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsDeletedComponentValidParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_DeletedComponent_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** This component was removed from the actor. This instance exists in a transient snapshot world; it does not exist in the editor world. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "This component was removed from the actor. This instance exists in a transient snapshot world; it does not exist in the editor world." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_DeletedComponent = { "DeletedComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsDeletedComponentValidParams, DeletedComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_DeletedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_DeletedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_EditorActor_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** The actor the component was removed from; This instance exists in the editor world. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "The actor the component was removed from; This instance exists in the editor world." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_EditorActor = { "EditorActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsDeletedComponentValidParams, EditorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_EditorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_EditorActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_DeletedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewProp_EditorActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		&NewStructOps,
		"IsDeletedComponentValidParams",
		sizeof(FIsDeletedComponentValidParams),
		alignof(FIsDeletedComponentValidParams),
		Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsDeletedComponentValidParams()
	{
		if (!Z_Registration_Info_UScriptStruct_IsDeletedComponentValidParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsDeletedComponentValidParams.InnerSingleton, Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsDeletedComponentValidParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsAddedComponentValidParams;
class UScriptStruct* FIsAddedComponentValidParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsAddedComponentValidParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsAddedComponentValidParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsAddedComponentValidParams, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("IsAddedComponentValidParams"));
	}
	return Z_Registration_Info_UScriptStruct_IsAddedComponentValidParams.OuterSingleton;
}
template<> LEVELSNAPSHOTFILTERS_API UScriptStruct* StaticStruct<FIsAddedComponentValidParams>()
{
	return FIsAddedComponentValidParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AddedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsAddedComponentValidParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::NewProp_AddedComponent_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** This component was added to the actor. This is an instance in the editor world. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSnapshotFilterParams.h" },
		{ "ToolTip", "This component was added to the actor. This is an instance in the editor world." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::NewProp_AddedComponent = { "AddedComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsAddedComponentValidParams, AddedComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::NewProp_AddedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::NewProp_AddedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::NewProp_AddedComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		&NewStructOps,
		"IsAddedComponentValidParams",
		sizeof(FIsAddedComponentValidParams),
		alignof(FIsAddedComponentValidParams),
		Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsAddedComponentValidParams()
	{
		if (!Z_Registration_Info_UScriptStruct_IsAddedComponentValidParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsAddedComponentValidParams.InnerSingleton, Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsAddedComponentValidParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilterParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilterParams_h_Statics::ScriptStructInfo[] = {
		{ FIsActorValidParams::StaticStruct, Z_Construct_UScriptStruct_FIsActorValidParams_Statics::NewStructOps, TEXT("IsActorValidParams"), &Z_Registration_Info_UScriptStruct_IsActorValidParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsActorValidParams), 2469178653U) },
		{ FIsPropertyValidParams::StaticStruct, Z_Construct_UScriptStruct_FIsPropertyValidParams_Statics::NewStructOps, TEXT("IsPropertyValidParams"), &Z_Registration_Info_UScriptStruct_IsPropertyValidParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsPropertyValidParams), 2449847881U) },
		{ FIsDeletedActorValidParams::StaticStruct, Z_Construct_UScriptStruct_FIsDeletedActorValidParams_Statics::NewStructOps, TEXT("IsDeletedActorValidParams"), &Z_Registration_Info_UScriptStruct_IsDeletedActorValidParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsDeletedActorValidParams), 402524035U) },
		{ FIsAddedActorValidParams::StaticStruct, Z_Construct_UScriptStruct_FIsAddedActorValidParams_Statics::NewStructOps, TEXT("IsAddedActorValidParams"), &Z_Registration_Info_UScriptStruct_IsAddedActorValidParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsAddedActorValidParams), 19224632U) },
		{ FIsDeletedComponentValidParams::StaticStruct, Z_Construct_UScriptStruct_FIsDeletedComponentValidParams_Statics::NewStructOps, TEXT("IsDeletedComponentValidParams"), &Z_Registration_Info_UScriptStruct_IsDeletedComponentValidParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsDeletedComponentValidParams), 2720726088U) },
		{ FIsAddedComponentValidParams::StaticStruct, Z_Construct_UScriptStruct_FIsAddedComponentValidParams_Statics::NewStructOps, TEXT("IsAddedComponentValidParams"), &Z_Registration_Info_UScriptStruct_IsAddedComponentValidParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsAddedComponentValidParams), 858785891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilterParams_h_6667287(TEXT("/Script/LevelSnapshotFilters"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilterParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_LevelSnapshotFilterParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
