// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/WorldPartitionConvertCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionConvertCommandlet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionConvertCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FHLODLayerActorMapping();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODLayerActorMapping;
class UScriptStruct* FHLODLayerActorMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODLayerActorMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODLayerActorMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODLayerActorMapping, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("HLODLayerActorMapping"));
	}
	return Z_Registration_Info_UScriptStruct_HLODLayerActorMapping.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FHLODLayerActorMapping>()
{
	return FHLODLayerActorMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HLODLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODLayerActorMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_ActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODLayerActorMapping, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_HLODLayer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_HLODLayer = { "HLODLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODLayerActorMapping, HLODLayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_HLODLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_HLODLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewProp_HLODLayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"HLODLayerActorMapping",
		sizeof(FHLODLayerActorMapping),
		alignof(FHLODLayerActorMapping),
		Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODLayerActorMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_HLODLayerActorMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODLayerActorMapping.InnerSingleton, Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HLODLayerActorMapping.InnerSingleton;
	}
	void UWorldPartitionConvertCommandlet::StaticRegisterNativesUWorldPartitionConvertCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionConvertCommandlet);
	UClass* Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister()
	{
		return UWorldPartitionConvertCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorHashClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EditorHashClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeHashClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RuntimeHashClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertActorsNotReferencedByLevelScript_MetaData[];
#endif
		static void NewProp_bConvertActorsNotReferencedByLevelScript_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertActorsNotReferencedByLevelScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayerAssetsPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HLODLayerAssetsPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHLODLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultHLODLayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHLODLayerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultHLODLayerAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageTypePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FoliageTypePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HLODLayersForActorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayersForActorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODLayersForActorClasses;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HLODLayers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HLODLayers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HLODLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LandscapeGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAssetFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataLayerAssetFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerFactory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/WorldPartitionConvertCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_EditorHashClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_EditorHashClass = { "EditorHashClass", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, EditorHashClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_EditorHashClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_EditorHashClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_RuntimeHashClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_RuntimeHashClass = { "RuntimeHashClass", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, RuntimeHashClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_RuntimeHashClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_RuntimeHashClass_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_ExcludedLevels_Inner = { "ExcludedLevels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_ExcludedLevels_MetaData[] = {
		{ "Comment", "// Levels excluded from conversion.\n" },
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
		{ "ToolTip", "Levels excluded from conversion." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_ExcludedLevels = { "ExcludedLevels", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, ExcludedLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_ExcludedLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_ExcludedLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_bConvertActorsNotReferencedByLevelScript_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_bConvertActorsNotReferencedByLevelScript_SetBit(void* Obj)
	{
		((UWorldPartitionConvertCommandlet*)Obj)->bConvertActorsNotReferencedByLevelScript = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_bConvertActorsNotReferencedByLevelScript = { "bConvertActorsNotReferencedByLevelScript", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertCommandlet), &Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_bConvertActorsNotReferencedByLevelScript_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_bConvertActorsNotReferencedByLevelScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_bConvertActorsNotReferencedByLevelScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldExtent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldExtent = { "WorldExtent", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, WorldExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayerAssetsPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayerAssetsPath = { "HLODLayerAssetsPath", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, HLODLayerAssetsPath), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayerAssetsPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayerAssetsPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerName = { "DefaultHLODLayerName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, DefaultHLODLayerName), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerAsset = { "DefaultHLODLayerAsset", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, DefaultHLODLayerAsset), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_FoliageTypePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_FoliageTypePath = { "FoliageTypePath", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, FoliageTypePath), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_FoliageTypePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_FoliageTypePath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayersForActorClasses_Inner = { "HLODLayersForActorClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHLODLayerActorMapping, METADATA_PARAMS(nullptr, 0) }; // 4142848345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayersForActorClasses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayersForActorClasses = { "HLODLayersForActorClasses", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, HLODLayersForActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayersForActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayersForActorClasses_MetaData)) }; // 4142848345
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers_ValueProp = { "HLODLayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers_Key_KeyProp = { "HLODLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers = { "HLODLayers", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, HLODLayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_LandscapeGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_LandscapeGridSize = { "LandscapeGridSize", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, LandscapeGridSize), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_LandscapeGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_LandscapeGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerAssetFolder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerAssetFolder = { "DataLayerAssetFolder", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, DataLayerAssetFolder), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerAssetFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerAssetFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerFactory_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionConvertCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerFactory = { "DataLayerFactory", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertCommandlet, DataLayerFactory), Z_Construct_UClass_UDataLayerFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerFactory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_EditorHashClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_RuntimeHashClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_ExcludedLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_ExcludedLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_bConvertActorsNotReferencedByLevelScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_WorldExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayerAssetsPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DefaultHLODLayerAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_FoliageTypePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayersForActorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayersForActorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_HLODLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_LandscapeGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerAssetFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::NewProp_DataLayerFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionConvertCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::ClassParams = {
		&UWorldPartitionConvertCommandlet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionConvertCommandlet()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionConvertCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionConvertCommandlet.OuterSingleton, Z_Construct_UClass_UWorldPartitionConvertCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionConvertCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionConvertCommandlet>()
	{
		return UWorldPartitionConvertCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionConvertCommandlet);
	UWorldPartitionConvertCommandlet::~UWorldPartitionConvertCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_Statics::ScriptStructInfo[] = {
		{ FHLODLayerActorMapping::StaticStruct, Z_Construct_UScriptStruct_FHLODLayerActorMapping_Statics::NewStructOps, TEXT("HLODLayerActorMapping"), &Z_Registration_Info_UScriptStruct_HLODLayerActorMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODLayerActorMapping), 4142848345U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionConvertCommandlet, UWorldPartitionConvertCommandlet::StaticClass, TEXT("UWorldPartitionConvertCommandlet"), &Z_Registration_Info_UClass_UWorldPartitionConvertCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionConvertCommandlet), 3719956476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_1960735077(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionConvertCommandlet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
