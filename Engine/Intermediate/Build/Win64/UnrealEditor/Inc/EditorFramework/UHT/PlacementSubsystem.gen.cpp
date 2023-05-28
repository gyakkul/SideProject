// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/PlacementSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetFactoryInterface_NoRegister();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UPlacementSubsystem();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UPlacementSubsystem_NoRegister();
	EDITORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAssetPlacementInfo();
	EDITORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FPlacementOptions();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedPlacemenClientSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetPlacementInfo;
class UScriptStruct* FAssetPlacementInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetPlacementInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetPlacementInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetPlacementInfo, (UObject*)Z_Construct_UPackage__Script_EditorFramework(), TEXT("AssetPlacementInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AssetPlacementInfo.OuterSingleton;
}
template<> EDITORFRAMEWORK_API UScriptStruct* StaticStruct<FAssetPlacementInfo>()
{
	return FAssetPlacementInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetToPlace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetToPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredLevel_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PreferredLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalizedTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalizedTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactoryOverride_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_FactoryOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SettingsObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetPlacementInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_AssetToPlace_MetaData[] = {
		{ "Comment", "// The asset data which should be placed.\n" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "The asset data which should be placed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_AssetToPlace = { "AssetToPlace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetPlacementInfo, AssetToPlace), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_AssetToPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_AssetToPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_NameOverride_MetaData[] = {
		{ "Comment", "// If set, will override the name on placed elements instead of factory defined defaults.\n" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "If set, will override the name on placed elements instead of factory defined defaults." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_NameOverride = { "NameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetPlacementInfo, NameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_NameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_NameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_PreferredLevel_MetaData[] = {
		{ "Comment", "// If set, the factory will attempt to place inside the given level. World partitioning may ultimately override this preference.\n" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "If set, the factory will attempt to place inside the given level. World partitioning may ultimately override this preference." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_PreferredLevel = { "PreferredLevel", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetPlacementInfo, PreferredLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_PreferredLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_PreferredLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FinalizedTransform_MetaData[] = {
		{ "Comment", "// The finalized transform where the factory should be place the asset. This should include any location snapping or other considerations from viewports or editor settings.\n" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "The finalized transform where the factory should be place the asset. This should include any location snapping or other considerations from viewports or editor settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FinalizedTransform = { "FinalizedTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetPlacementInfo, FinalizedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FinalizedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FinalizedTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FactoryOverride_MetaData[] = {
		{ "Comment", "// If set, will use the given factory to place the asset, instead of allowing the placement subsystem to determine which factory to use.\n" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "If set, will use the given factory to place the asset, instead of allowing the placement subsystem to determine which factory to use." },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FactoryOverride = { "FactoryOverride", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetPlacementInfo, FactoryOverride), Z_Construct_UClass_UAssetFactoryInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FactoryOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FactoryOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_ItemGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * The Guid which corresponds to the item that should be placed.\n\x09 * If unset, the asset package's persistent guid will be used.\n\x09 * Factories should use this to tie any decomposed assets together. For example, the ItemGuid would correspond to the client in an AISMPartitionActor for tracking all static meshes which make up a decomposed actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "The Guid which corresponds to the item that should be placed.\nIf unset, the asset package's persistent guid will be used.\nFactories should use this to tie any decomposed assets together. For example, the ItemGuid would correspond to the client in an AISMPartitionActor for tracking all static meshes which make up a decomposed actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_ItemGuid = { "ItemGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetPlacementInfo, ItemGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_ItemGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_ItemGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_SettingsObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_SettingsObject = { "SettingsObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetPlacementInfo, SettingsObject), Z_Construct_UClass_UInstancedPlacemenClientSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_SettingsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_SettingsObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_AssetToPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_NameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_PreferredLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FinalizedTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_FactoryOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_ItemGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewProp_SettingsObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorFramework,
		nullptr,
		&NewStructOps,
		"AssetPlacementInfo",
		sizeof(FAssetPlacementInfo),
		alignof(FAssetPlacementInfo),
		Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetPlacementInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetPlacementInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetPlacementInfo.InnerSingleton, Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetPlacementInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlacementOptions;
class UScriptStruct* FPlacementOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlacementOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlacementOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlacementOptions, (UObject*)Z_Construct_UPackage__Script_EditorFramework(), TEXT("PlacementOptions"));
	}
	return Z_Registration_Info_UScriptStruct_PlacementOptions.OuterSingleton;
}
template<> EDITORFRAMEWORK_API UScriptStruct* StaticStruct<FPlacementOptions>()
{
	return FPlacementOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlacementOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedPlacementGridGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedPlacementGridGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferBatchPlacement_MetaData[];
#endif
		static void NewProp_bPreferBatchPlacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferBatchPlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCreatingPreviewElements_MetaData[];
#endif
		static void NewProp_bIsCreatingPreviewElements_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCreatingPreviewElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlacementOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlacementOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_InstancedPlacementGridGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * The guid to use by factories for instanced placement. If unset, factories will not use instanced placement.\n\x09 * This is used to reduce contention within one file per actor within a partition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "The guid to use by factories for instanced placement. If unset, factories will not use instanced placement.\nThis is used to reduce contention within one file per actor within a partition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_InstancedPlacementGridGuid = { "InstancedPlacementGridGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlacementOptions, InstancedPlacementGridGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_InstancedPlacementGridGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_InstancedPlacementGridGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bPreferBatchPlacement_MetaData[] = {
		{ "Comment", "// If true, asset factory implementations should prefer a batch placement algorithm (like duplicating an object) over a single placement algorithm.\n" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "If true, asset factory implementations should prefer a batch placement algorithm (like duplicating an object) over a single placement algorithm." },
	};
#endif
	void Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bPreferBatchPlacement_SetBit(void* Obj)
	{
		((FPlacementOptions*)Obj)->bPreferBatchPlacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bPreferBatchPlacement = { "bPreferBatchPlacement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPlacementOptions), &Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bPreferBatchPlacement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bPreferBatchPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bPreferBatchPlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bIsCreatingPreviewElements_MetaData[] = {
		{ "Comment", "// If true, creates transient preview elements, which are transient and not saved to a level.\n" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
		{ "ToolTip", "If true, creates transient preview elements, which are transient and not saved to a level." },
	};
#endif
	void Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bIsCreatingPreviewElements_SetBit(void* Obj)
	{
		((FPlacementOptions*)Obj)->bIsCreatingPreviewElements = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bIsCreatingPreviewElements = { "bIsCreatingPreviewElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPlacementOptions), &Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bIsCreatingPreviewElements_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bIsCreatingPreviewElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bIsCreatingPreviewElements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlacementOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_InstancedPlacementGridGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bPreferBatchPlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewProp_bIsCreatingPreviewElements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlacementOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorFramework,
		nullptr,
		&NewStructOps,
		"PlacementOptions",
		sizeof(FPlacementOptions),
		alignof(FPlacementOptions),
		Z_Construct_UScriptStruct_FPlacementOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlacementOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlacementOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlacementOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlacementOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_PlacementOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlacementOptions.InnerSingleton, Z_Construct_UScriptStruct_FPlacementOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlacementOptions.InnerSingleton;
	}
	void UPlacementSubsystem::StaticRegisterNativesUPlacementSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementSubsystem);
	UClass* Z_Construct_UClass_UPlacementSubsystem_NoRegister()
	{
		return UPlacementSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AssetFactories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetFactories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetFactories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/PlacementSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlacementSubsystem_Statics::NewProp_AssetFactories_Inner = { "AssetFactories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetFactoryInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementSubsystem_Statics::NewProp_AssetFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/PlacementSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlacementSubsystem_Statics::NewProp_AssetFactories = { "AssetFactories", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementSubsystem, AssetFactories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlacementSubsystem_Statics::NewProp_AssetFactories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementSubsystem_Statics::NewProp_AssetFactories_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlacementSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementSubsystem_Statics::NewProp_AssetFactories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementSubsystem_Statics::NewProp_AssetFactories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementSubsystem_Statics::ClassParams = {
		&UPlacementSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlacementSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementSubsystem_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPlacementSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementSubsystem.OuterSingleton, Z_Construct_UClass_UPlacementSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementSubsystem.OuterSingleton;
	}
	template<> EDITORFRAMEWORK_API UClass* StaticClass<UPlacementSubsystem>()
	{
		return UPlacementSubsystem::StaticClass();
	}
	UPlacementSubsystem::UPlacementSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementSubsystem);
	UPlacementSubsystem::~UPlacementSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FAssetPlacementInfo::StaticStruct, Z_Construct_UScriptStruct_FAssetPlacementInfo_Statics::NewStructOps, TEXT("AssetPlacementInfo"), &Z_Registration_Info_UScriptStruct_AssetPlacementInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetPlacementInfo), 1792912409U) },
		{ FPlacementOptions::StaticStruct, Z_Construct_UScriptStruct_FPlacementOptions_Statics::NewStructOps, TEXT("PlacementOptions"), &Z_Registration_Info_UScriptStruct_PlacementOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlacementOptions), 1568821918U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementSubsystem, UPlacementSubsystem::StaticClass, TEXT("UPlacementSubsystem"), &Z_Registration_Info_UClass_UPlacementSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementSubsystem), 1697762310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_3282951436(TEXT("/Script/EditorFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_PlacementSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
