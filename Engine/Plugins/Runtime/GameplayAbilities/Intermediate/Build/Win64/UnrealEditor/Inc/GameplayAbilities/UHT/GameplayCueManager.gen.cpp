// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCueManager.h"
#include "GameplayCue_Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueSet_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueObjectLibrary();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCuePendingExecute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPreallocationInfo();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary;
class UScriptStruct* FGameplayCueObjectLibrary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueObjectLibrary"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueObjectLibrary>()
{
	return FGameplayCueObjectLibrary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorObjectLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorObjectLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticObjectLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticObjectLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CueSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSyncScan_MetaData[];
#endif
		static void NewProp_bShouldSyncScan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSyncScan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAsyncLoad_MetaData[];
#endif
		static void NewProp_bShouldAsyncLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAsyncLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSyncLoad_MetaData[];
#endif
		static void NewProp_bShouldSyncLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSyncLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenInitialized_MetaData[];
#endif
		static void NewProp_bHasBeenInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An ObjectLibrary for the GameplayCue Notifies. Wraps 2 underlying UObjectLibraries plus options/delegates for how they are loaded */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "An ObjectLibrary for the GameplayCue Notifies. Wraps 2 underlying UObjectLibraries plus options/delegates for how they are loaded" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueObjectLibrary>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths_MetaData[] = {
		{ "Comment", "/** Paths to search for */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Paths to search for" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueObjectLibrary, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_ActorObjectLibrary_MetaData[] = {
		{ "Comment", "/** Object library for actor based notifies */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Object library for actor based notifies" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_ActorObjectLibrary = { "ActorObjectLibrary", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueObjectLibrary, ActorObjectLibrary), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_ActorObjectLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_ActorObjectLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_StaticObjectLibrary_MetaData[] = {
		{ "Comment", "/** Object library for object based notifies */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Object library for object based notifies" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_StaticObjectLibrary = { "StaticObjectLibrary", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueObjectLibrary, StaticObjectLibrary), Z_Construct_UClass_UObjectLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_StaticObjectLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_StaticObjectLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_CueSet_MetaData[] = {
		{ "Comment", "/** Set to put the loaded asset data into. If null we will use the global set (RuntimeGameplayCueObjectLibrary.CueSet) */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Set to put the loaded asset data into. If null we will use the global set (RuntimeGameplayCueObjectLibrary.CueSet)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_CueSet = { "CueSet", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueObjectLibrary, CueSet), Z_Construct_UClass_UGameplayCueSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_CueSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_CueSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan_MetaData[] = {
		{ "Comment", "/** Should we force a sync scan on the asset registry in order to discover asset data, or just use what is there */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Should we force a sync scan on the asset registry in order to discover asset data, or just use what is there" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan_SetBit(void* Obj)
	{
		((FGameplayCueObjectLibrary*)Obj)->bShouldSyncScan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan = { "bShouldSyncScan", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayCueObjectLibrary), &Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad_MetaData[] = {
		{ "Comment", "/** Should we start async loading everything that we find (that passes ShouldLoad delegate check) */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Should we start async loading everything that we find (that passes ShouldLoad delegate check)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad_SetBit(void* Obj)
	{
		((FGameplayCueObjectLibrary*)Obj)->bShouldAsyncLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad = { "bShouldAsyncLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayCueObjectLibrary), &Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad_MetaData[] = {
		{ "Comment", "/** Should we sync load everything that we find (that passes ShouldLoad delegate check) */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Should we sync load everything that we find (that passes ShouldLoad delegate check)" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad_SetBit(void* Obj)
	{
		((FGameplayCueObjectLibrary*)Obj)->bShouldSyncLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad = { "bShouldSyncLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayCueObjectLibrary), &Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized_MetaData[] = {
		{ "Comment", "/** True if this has been initialized with correct data */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "True if this has been initialized with correct data" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized_SetBit(void* Obj)
	{
		((FGameplayCueObjectLibrary*)Obj)->bHasBeenInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized = { "bHasBeenInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayCueObjectLibrary), &Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_Paths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_ActorObjectLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_StaticObjectLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_CueSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncScan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldAsyncLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bShouldSyncLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewProp_bHasBeenInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueObjectLibrary",
		sizeof(FGameplayCueObjectLibrary),
		alignof(FGameplayCueObjectLibrary),
		Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueObjectLibrary()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary.InnerSingleton;
	}
	void UGameplayCueManager::StaticRegisterNativesUGameplayCueManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueManager);
	UClass* Z_Construct_UClass_UGameplayCueManager_NoRegister()
	{
		return UGameplayCueManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGameplayCueObjectLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeGameplayCueObjectLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorGameplayCueObjectLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorGameplayCueObjectLibrary;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_LoadedGameplayCueNotifyClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedGameplayCueNotifyClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedGameplayCueNotifyClasses;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayCueClassesForPreallocation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueClassesForPreallocation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCueClassesForPreallocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingExecuteCues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingExecuteCues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingExecuteCues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueSendContextCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayCueSendContextCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreallocationInfoList_Internal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreallocationInfoList_Internal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreallocationInfoList_Internal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Singleton manager object that handles dispatching gameplay cues and spawning GameplayCueNotify actors as needed */" },
		{ "IncludePath", "GameplayCueManager.h" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Singleton manager object that handles dispatching gameplay cues and spawning GameplayCueNotify actors as needed" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_RuntimeGameplayCueObjectLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_RuntimeGameplayCueObjectLibrary = { "RuntimeGameplayCueObjectLibrary", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueManager, RuntimeGameplayCueObjectLibrary), Z_Construct_UScriptStruct_FGameplayCueObjectLibrary, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_RuntimeGameplayCueObjectLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_RuntimeGameplayCueObjectLibrary_MetaData)) }; // 3263569609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_EditorGameplayCueObjectLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_EditorGameplayCueObjectLibrary = { "EditorGameplayCueObjectLibrary", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueManager, EditorGameplayCueObjectLibrary), Z_Construct_UScriptStruct_FGameplayCueObjectLibrary, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_EditorGameplayCueObjectLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_EditorGameplayCueObjectLibrary_MetaData)) }; // 3263569609
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses_Inner = { "LoadedGameplayCueNotifyClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses_MetaData[] = {
		{ "Comment", "/** Hardref to the gameplaycue notify classes we have async loaded*/" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Hardref to the gameplaycue notify classes we have async loaded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses = { "LoadedGameplayCueNotifyClasses", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueManager, LoadedGameplayCueNotifyClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation_Inner = { "GameplayCueClassesForPreallocation", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation_MetaData[] = {
		{ "Comment", "/** Classes that we need to preallocate instances for */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Classes that we need to preallocate instances for" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation = { "GameplayCueClassesForPreallocation", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueManager, GameplayCueClassesForPreallocation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues_Inner = { "PendingExecuteCues", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayCuePendingExecute, METADATA_PARAMS(nullptr, 0) }; // 822504576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues_MetaData[] = {
		{ "Comment", "/** List of gameplay cue executes that haven't been processed yet */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "List of gameplay cue executes that haven't been processed yet" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues = { "PendingExecuteCues", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueManager, PendingExecuteCues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues_MetaData)) }; // 822504576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueSendContextCount_MetaData[] = {
		{ "Comment", "/** Number of active gameplay cue send contexts, when it goes to 0 cues are flushed */" },
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
		{ "ToolTip", "Number of active gameplay cue send contexts, when it goes to 0 cues are flushed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueSendContextCount = { "GameplayCueSendContextCount", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueManager, GameplayCueSendContextCount), METADATA_PARAMS(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueSendContextCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueSendContextCount_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal_Inner = { "PreallocationInfoList_Internal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPreallocationInfo, METADATA_PARAMS(nullptr, 0) }; // 1373043976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal = { "PreallocationInfoList_Internal", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueManager, PreallocationInfoList_Internal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal_MetaData)) }; // 1373043976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_RuntimeGameplayCueObjectLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_EditorGameplayCueObjectLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_LoadedGameplayCueNotifyClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueClassesForPreallocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PendingExecuteCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_GameplayCueSendContextCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueManager_Statics::NewProp_PreallocationInfoList_Internal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueManager_Statics::ClassParams = {
		&UGameplayCueManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayCueManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueManager()
	{
		if (!Z_Registration_Info_UClass_UGameplayCueManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueManager.OuterSingleton, Z_Construct_UClass_UGameplayCueManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayCueManager.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueManager>()
	{
		return UGameplayCueManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueManager);
	UGameplayCueManager::~UGameplayCueManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ScriptStructInfo[] = {
		{ FGameplayCueObjectLibrary::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueObjectLibrary_Statics::NewStructOps, TEXT("GameplayCueObjectLibrary"), &Z_Registration_Info_UScriptStruct_GameplayCueObjectLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueObjectLibrary), 3263569609U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueManager, UGameplayCueManager::StaticClass, TEXT("UGameplayCueManager"), &Z_Registration_Info_UClass_UGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueManager), 3816193535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_575266939(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
