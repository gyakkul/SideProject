// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/World.h"
#include "../../Source/Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorld() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AParticleEventManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldComposition_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEndPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelCollection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelViewportInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStartPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingLevelsToConsider();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPSCPool();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelViewportInfo;
class UScriptStruct* FLevelViewportInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelViewportInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelViewportInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelViewportInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LevelViewportInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LevelViewportInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelViewportInfo>()
{
	return FLevelViewportInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelViewportInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CamPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CamRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamOrthoZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CamOrthoZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamUpdated_MetaData[];
#endif
		static void NewProp_CamUpdated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CamUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Saved editor viewport state information */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Saved editor viewport state information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelViewportInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition_MetaData[] = {
		{ "Comment", "/** Where the camera is positioned within the viewport. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Where the camera is positioned within the viewport." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition = { "CamPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelViewportInfo, CamPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation_MetaData[] = {
		{ "Comment", "/** The camera's position within the viewport. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The camera's position within the viewport." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation = { "CamRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelViewportInfo, CamRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom_MetaData[] = {
		{ "Comment", "/** The zoom value  for orthographic mode. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The zoom value  for orthographic mode." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom = { "CamOrthoZoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelViewportInfo, CamOrthoZoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_MetaData[] = {
		{ "Comment", "/** Whether camera settings have been systematically changed since the last level viewport update. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Whether camera settings have been systematically changed since the last level viewport update." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_SetBit(void* Obj)
	{
		((FLevelViewportInfo*)Obj)->CamUpdated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated = { "CamUpdated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelViewportInfo), &Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelViewportInfo",
		sizeof(FLevelViewportInfo),
		alignof(FLevelViewportInfo),
		Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelViewportInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelViewportInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelViewportInfo.InnerSingleton, Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelViewportInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStartPhysicsTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FStartPhysicsTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StartPhysicsTickFunction;
class UScriptStruct* FStartPhysicsTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StartPhysicsTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StartPhysicsTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStartPhysicsTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StartPhysicsTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StartPhysicsTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStartPhysicsTickFunction>()
{
	return FStartPhysicsTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Tick function that starts the physics tick\n**/" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Tick function that starts the physics tick" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStartPhysicsTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"StartPhysicsTickFunction",
		sizeof(FStartPhysicsTickFunction),
		alignof(FStartPhysicsTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStartPhysicsTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_StartPhysicsTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StartPhysicsTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StartPhysicsTickFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEndPhysicsTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FEndPhysicsTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EndPhysicsTickFunction;
class UScriptStruct* FEndPhysicsTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EndPhysicsTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EndPhysicsTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndPhysicsTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EndPhysicsTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_EndPhysicsTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEndPhysicsTickFunction>()
{
	return FEndPhysicsTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Tick function that ends the physics tick\n**/" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Tick function that ends the physics tick" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndPhysicsTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"EndPhysicsTickFunction",
		sizeof(FEndPhysicsTickFunction),
		alignof(FEndPhysicsTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEndPhysicsTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_EndPhysicsTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EndPhysicsTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EndPhysicsTickFunction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelCollection;
class UScriptStruct* FLevelCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelCollection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LevelCollection"));
	}
	return Z_Registration_Info_UScriptStruct_LevelCollection.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelCollection>()
{
	return FLevelCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetDriver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DemoNetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DemoNetDriver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PersistentLevel;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Levels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Levels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains a group of levels of a particular ELevelCollectionType within a UWorld\n * and the context required to properly tick/update those levels. This object is move-only.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Contains a group of levels of a particular ELevelCollectionType within a UWorld\nand the context required to properly tick/update those levels. This object is move-only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelCollection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState_MetaData[] = {
		{ "Comment", "/**\n\x09 * The GameState associated with this collection. This may be different than the UWorld's GameState\n\x09 * since the source collection and the duplicated collection will have their own instances.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The GameState associated with this collection. This may be different than the UWorld's GameState\nsince the source collection and the duplicated collection will have their own instances." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelCollection, GameState), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver_MetaData[] = {
		{ "Comment", "/**\n\x09 * The network driver associated with this collection.\n\x09 * The source collection and the duplicated collection will have their own instances.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The network driver associated with this collection.\nThe source collection and the duplicated collection will have their own instances." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelCollection, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver_MetaData[] = {
		{ "Comment", "/**\n\x09 * The demo network driver associated with this collection.\n\x09 * The source collection and the duplicated collection will have their own instances.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The demo network driver associated with this collection.\nThe source collection and the duplicated collection will have their own instances." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver = { "DemoNetDriver", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelCollection, DemoNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel_MetaData[] = {
		{ "Comment", "/**\n\x09 * The persistent level associated with this collection.\n\x09 * The source collection and the duplicated collection will have their own instances.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The persistent level associated with this collection.\nThe source collection and the duplicated collection will have their own instances." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel = { "PersistentLevel", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelCollection, PersistentLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_ElementProp = { "Levels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_MetaData[] = {
		{ "Comment", "/** All the levels in this collection. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "All the levels in this collection." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelCollection, Levels), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelCollection",
		sizeof(FLevelCollection),
		alignof(FLevelCollection),
		Z_Construct_UScriptStruct_FLevelCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelCollection.InnerSingleton, Z_Construct_UScriptStruct_FLevelCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelCollection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamingLevelsToConsider;
class UScriptStruct* FStreamingLevelsToConsider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingLevelsToConsider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamingLevelsToConsider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingLevelsToConsider, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StreamingLevelsToConsider"));
	}
	return Z_Registration_Info_UScriptStruct_StreamingLevelsToConsider.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamingLevelsToConsider>()
{
	return FStreamingLevelsToConsider::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StreamingLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingLevelsToConsider>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewProp_StreamingLevels_Inner = { "StreamingLevels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewProp_StreamingLevels_MetaData[] = {
		{ "Comment", "/** Priority sorted array of streaming levels actively being considered. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Priority sorted array of streaming levels actively being considered." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewProp_StreamingLevels = { "StreamingLevels", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStreamingLevelsToConsider, StreamingLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewProp_StreamingLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewProp_StreamingLevels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewProp_StreamingLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewProp_StreamingLevels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamingLevelsToConsider",
		sizeof(FStreamingLevelsToConsider),
		alignof(FStreamingLevelsToConsider),
		Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingLevelsToConsider()
	{
		if (!Z_Registration_Info_UScriptStruct_StreamingLevelsToConsider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamingLevelsToConsider.InnerSingleton, Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StreamingLevelsToConsider.InnerSingleton;
	}
	DEFINE_FUNCTION(UWorld::execK2_GetWorldSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWorldSettings**)Z_Param__Result=P_THIS->K2_GetWorldSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorld::execHandleTimelineScrubbed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTimelineScrubbed();
		P_NATIVE_END;
	}
	void UWorld::StaticRegisterNativesUWorld()
	{
		UClass* Class = UWorld::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTimelineScrubbed", &UWorld::execHandleTimelineScrubbed },
			{ "K2_GetWorldSettings", &UWorld::execK2_GetWorldSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called from DemoNetDriver when playing back a replay and the timeline is successfully scrubbed */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Called from DemoNetDriver when playing back a replay and the timeline is successfully scrubbed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorld, nullptr, "HandleTimelineScrubbed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorld_HandleTimelineScrubbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics
	{
		struct World_eventK2_GetWorldSettings_Parms
		{
			AWorldSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(World_eventK2_GetWorldSettings_Parms, ReturnValue), Z_Construct_UClass_AWorldSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|World" },
		{ "Comment", "/**\n\x09 * Returns the AWorldSettings actor associated with this world.\n\x09 *\n\x09 * @return AWorldSettings actor associated with this world\n\x09 */" },
		{ "DisplayName", "GetWorldSettings" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ScriptName", "GetWorldSettings" },
		{ "ToolTip", "Returns the AWorldSettings actor associated with this world.\n\n@return AWorldSettings actor associated with this world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorld, nullptr, "K2_GetWorldSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::World_eventK2_GetWorldSettings_Parms), Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorld_K2_GetWorldSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorld_K2_GetWorldSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorld);
	UClass* Z_Construct_UClass_UWorld_NoRegister()
	{
		return UWorld::StaticClass();
	}
	struct Z_Construct_UClass_UWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveGroupActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGroupActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGroupActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PersistentLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetDriver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentLineBatcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PersistentLineBatcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundLineBatcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ForegroundLineBatcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetworkManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsCollisionHandler;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExtraReferencedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraReferencedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraReferencedObjects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerModuleDataObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerModuleDataObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerModuleDataObjects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StreamingLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevelsToConsider_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingLevelsToConsider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerStreamingLevelsVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ServerStreamingLevelsVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLevelsPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamingLevelsPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelPendingVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentLevelPendingVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelPendingInvisibility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentLevelPendingInvisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DemoNetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DemoNetDriver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyParticleEventManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyParticleEventManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysicsVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultPhysicsVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAreConstraintsDirty_MetaData[];
#endif
		static void NewProp_bAreConstraintsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreConstraintsDirty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavigationSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthorityGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuthorityGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AISystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AISystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AvoidanceManager;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Levels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Levels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelCollections;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentLevel;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningGameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningGameInstance;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterCollectionInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanvasForRenderingToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CanvasForRenderingToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanvasForDrawMaterialToRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CanvasForDrawMaterialToRenderTarget;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorViews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorViews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorViews;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsField_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWILastAssignedUID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LWILastAssignedUID;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentsThatNeedPreEndOfFrameSync_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsThatNeedPreEndOfFrameSync_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ComponentsThatNeedPreEndOfFrameSync;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentsThatNeedEndOfFrameUpdate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsThatNeedEndOfFrameUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsThatNeedEndOfFrameUpdate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLevels;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldComposition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldComposition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentBundleManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContentBundleManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PSCPool_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PSCPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorld_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorld_HandleTimelineScrubbed, "HandleTimelineScrubbed" }, // 2195359017
		{ &Z_Construct_UFunction_UWorld_K2_GetWorldSettings, "K2_GetWorldSettings" }, // 2044325306
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The World is the top level object representing a map or a sandbox in which Actors and Components will exist and be rendered.  \n *\n * A World can be a single Persistent Level with an optional list of streaming levels that are loaded and unloaded via volumes and blueprint functions\n * or it can be a collection of levels organized with a World Composition.\n *\n * In a standalone game, generally only a single World exists except during seamless area transitions when both a destination and current world exists.\n * In the editor many Worlds exist: The level being edited, each PIE instance, each editor tool which has an interactive rendered viewport, and many more.\n *\n */" },
		{ "IncludePath", "Engine/World.h" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The World is the top level object representing a map or a sandbox in which Actors and Components will exist and be rendered.\n\nA World can be a single Persistent Level with an optional list of streaming levels that are loaded and unloaded via volumes and blueprint functions\nor it can be a collection of levels organized with a World Composition.\n\nIn a standalone game, generally only a single World exists except during seamless area transitions when both a destination and current world exists.\nIn the editor many Worlds exist: The level being edited, each PIE instance, each editor tool which has an interactive rendered viewport, and many more." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_Layers_MetaData[] = {
		{ "Comment", "/** List of all the layers referenced by the world's actors */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "List of all the layers referenced by the world's actors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_Layers_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_Inner = { "ActiveGroupActors", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_MetaData[] = {
		{ "Comment", "// Group actors currently \"active\"\n" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Group actors currently \"active\"" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors = { "ActiveGroupActors", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ActiveGroupActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel_MetaData[] = {
		{ "Comment", "/** Persistent level containing the world info, default brush and actors spawned during gameplay among other things\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Persistent level containing the world info, default brush and actors spawned during gameplay among other things" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel = { "PersistentLevel", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, PersistentLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver_MetaData[] = {
		{ "Comment", "/** The NAME_GameNetDriver game connection(s) for client/server communication */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The NAME_GameNetDriver game connection(s) for client/server communication" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "Comment", "/** Line Batchers. All lines to be drawn in the world. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Line Batchers. All lines to be drawn in the world." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher_MetaData[] = {
		{ "Comment", "/** Persistent Line Batchers. They don't get flushed every frame.  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Persistent Line Batchers. They don't get flushed every frame." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher = { "PersistentLineBatcher", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, PersistentLineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher_MetaData[] = {
		{ "Comment", "/** Foreground Line Batchers. This can't be Persistent.  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Foreground Line Batchers. This can't be Persistent." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher = { "ForegroundLineBatcher", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ForegroundLineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager_MetaData[] = {
		{ "Comment", "/** Instance of this world's game-specific networking management */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Instance of this world's game-specific networking management" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager = { "NetworkManager", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, NetworkManager), Z_Construct_UClass_AGameNetworkManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler_MetaData[] = {
		{ "Comment", "/** Instance of this world's game-specific physics collision handler */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Instance of this world's game-specific physics collision handler" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler = { "PhysicsCollisionHandler", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, PhysicsCollisionHandler), Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_Inner = { "ExtraReferencedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_MetaData[] = {
		{ "Comment", "/** Array of any additional objects that need to be referenced by this world, to make sure they aren't GC'd */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of any additional objects that need to be referenced by this world, to make sure they aren't GC'd" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects = { "ExtraReferencedObjects", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ExtraReferencedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_Inner = { "PerModuleDataObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_MetaData[] = {
		{ "Comment", "/**\n\x09 * External modules can have additional data associated with this UWorld.\n\x09 * This is a list of per module world data objects. These aren't\n\x09 * loaded/saved by default.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "External modules can have additional data associated with this UWorld.\nThis is a list of per module world data objects. These aren't\nloaded/saved by default." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects = { "PerModuleDataObjects", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, PerModuleDataObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_Inner = { "StreamingLevels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_MetaData[] = {
		{ "Comment", "/** Level collection. ULevels are referenced by FName (Package name) to avoid serialized references. Also contains offsets in world units */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Level collection. ULevels are referenced by FName (Package name) to avoid serialized references. Also contains offsets in world units" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels = { "StreamingLevels", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, StreamingLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider_MetaData[] = {
		{ "Comment", "/** This is the list of streaming levels that are actively being considered for what their state should be. It will be a subset of StreamingLevels */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "This is the list of streaming levels that are actively being considered for what their state should be. It will be a subset of StreamingLevels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider = { "StreamingLevelsToConsider", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, StreamingLevelsToConsider), Z_Construct_UScriptStruct_FStreamingLevelsToConsider, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider_MetaData)) }; // 4156281636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ServerStreamingLevelsVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ServerStreamingLevelsVisibility = { "ServerStreamingLevelsVisibility", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ServerStreamingLevelsVisibility), Z_Construct_UClass_AServerStreamingLevelsVisibility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ServerStreamingLevelsVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ServerStreamingLevelsVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix_MetaData[] = {
		{ "Comment", "/** Prefix we used to rename streaming levels, non empty in PIE and standalone preview */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Prefix we used to rename streaming levels, non empty in PIE and standalone preview" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix = { "StreamingLevelsPrefix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, StreamingLevelsPrefix), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility_MetaData[] = {
		{ "Comment", "/** Pointer to the current level in the queue to be made visible, NULL if none are pending. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Pointer to the current level in the queue to be made visible, NULL if none are pending." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility = { "CurrentLevelPendingVisibility", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, CurrentLevelPendingVisibility), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility_MetaData[] = {
		{ "Comment", "/** Pointer to the current level in the queue to be made invisible, NULL if none are pending. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Pointer to the current level in the queue to be made invisible, NULL if none are pending." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility = { "CurrentLevelPendingInvisibility", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, CurrentLevelPendingInvisibility), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver_MetaData[] = {
		{ "Comment", "/** NetDriver for capturing network traffic to record demos */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "NetDriver for capturing network traffic to record demos" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver = { "DemoNetDriver", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, DemoNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager_MetaData[] = {
		{ "Comment", "/** Particle event manager **/" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Particle event manager *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager = { "MyParticleEventManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, MyParticleEventManager), Z_Construct_UClass_AParticleEventManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume_MetaData[] = {
		{ "Comment", "/** DefaultPhysicsVolume used for whole game **/" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "DefaultPhysicsVolume used for whole game *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume = { "DefaultPhysicsVolume", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, DefaultPhysicsVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_MetaData[] = {
		{ "Comment", "/** Keeps track whether actors moved via PostEditMove and therefore constraint syncup should be performed. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Keeps track whether actors moved via PostEditMove and therefore constraint syncup should be performed." },
	};
#endif
	void Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_SetBit(void* Obj)
	{
		((UWorld*)Obj)->bAreConstraintsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty = { "bAreConstraintsDirty", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorld), &Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem_MetaData[] = {
		{ "Comment", "/** The world's navigation data manager */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The world's navigation data manager" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem = { "NavigationSystem", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, NavigationSystem), Z_Construct_UClass_UNavigationSystemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode_MetaData[] = {
		{ "Comment", "/** The current GameMode, valid only on the server */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The current GameMode, valid only on the server" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode = { "AuthorityGameMode", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, AuthorityGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_GameState_MetaData[] = {
		{ "Comment", "/** The replicated actor which contains game state information that can be accessible to clients. Direct access is not allowed, use GetGameState<>() */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The replicated actor which contains game state information that can be accessible to clients. Direct access is not allowed, use GetGameState<>()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, GameState), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_AISystem_MetaData[] = {
		{ "Comment", "/** The AI System handles generating pathing information and AI behavior */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The AI System handles generating pathing information and AI behavior" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_AISystem = { "AISystem", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, AISystem), Z_Construct_UClass_UAISystemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_AISystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_AISystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager_MetaData[] = {
		{ "Comment", "/** RVO avoidance manager used by game */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "RVO avoidance manager used by game" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager = { "AvoidanceManager", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, AvoidanceManager), Z_Construct_UClass_UAvoidanceManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_Levels_MetaData[] = {
		{ "Comment", "/** Array of levels currently in this world. Not serialized to disk to avoid hard references. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of levels currently in this world. Not serialized to disk to avoid hard references." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_Levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_Levels_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_Inner = { "LevelCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelCollection, METADATA_PARAMS(nullptr, 0) }; // 2829111048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_MetaData[] = {
		{ "Comment", "/** Array of level collections currently in this world. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of level collections currently in this world." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections = { "LevelCollections", nullptr, (EPropertyFlags)0x0040000400002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, LevelCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_MetaData)) }; // 2829111048
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel_MetaData[] = {
		{ "Comment", "/** Pointer to the current level being edited. Level has to be in the Levels array and == PersistentLevel in the game. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Pointer to the current level being edited. Level has to be in the Levels array and == PersistentLevel in the game." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, CurrentLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance = { "OwningGameInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, OwningGameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_Inner = { "ParameterCollectionInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_MetaData[] = {
		{ "Comment", "/** Parameter collection instances that hold parameter overrides for this world. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Parameter collection instances that hold parameter overrides for this world." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances = { "ParameterCollectionInstances", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ParameterCollectionInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget_MetaData[] = {
		{ "Comment", "/** \n\x09 * Canvas object used for drawing to render targets from blueprint functions eg DrawMaterialToRenderTarget.\n\x09 * This is cached as UCanvas creation takes >100ms.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Canvas object used for drawing to render targets from blueprint functions eg DrawMaterialToRenderTarget.\nThis is cached as UCanvas creation takes >100ms." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget = { "CanvasForRenderingToTarget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, CanvasForRenderingToTarget), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget = { "CanvasForDrawMaterialToRenderTarget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, CanvasForDrawMaterialToRenderTarget), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_Inner = { "EditorViews", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelViewportInfo, METADATA_PARAMS(nullptr, 0) }; // 1824706735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_MetaData[] = {
		{ "Comment", "/** Saved editor viewport states - one for each view type. Indexed using ELevelViewportType from UnrealEdTypes.h.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Saved editor viewport states - one for each view type. Indexed using ELevelViewportType from UnrealEdTypes.h." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews = { "EditorViews", nullptr, (EPropertyFlags)0x0010000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, EditorViews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_MetaData)) }; // 1824706735
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsField_MetaData[] = {
		{ "Comment", "/** Physics Field component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Physics Field component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsField = { "PhysicsField", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, PhysicsField), Z_Construct_UClass_UPhysicsFieldComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_LWILastAssignedUID_MetaData[] = {
		{ "Comment", "/** Tracks the last assigned unique id for light weight instances in this world. */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Tracks the last assigned unique id for light weight instances in this world." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_LWILastAssignedUID = { "LWILastAssignedUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, LWILastAssignedUID), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_LWILastAssignedUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_LWILastAssignedUID_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedPreEndOfFrameSync_ElementProp = { "ComponentsThatNeedPreEndOfFrameSync", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedPreEndOfFrameSync_MetaData[] = {
		{ "Comment", "/** Array of components that need to wait on tasks before end of frame updates */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of components that need to wait on tasks before end of frame updates" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedPreEndOfFrameSync = { "ComponentsThatNeedPreEndOfFrameSync", nullptr, (EPropertyFlags)0x0044008400002008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ComponentsThatNeedPreEndOfFrameSync), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedPreEndOfFrameSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedPreEndOfFrameSync_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_Inner = { "ComponentsThatNeedEndOfFrameUpdate", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_MetaData[] = {
		{ "Comment", "/** Array of components that need updates at the end of the frame */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of components that need updates at the end of the frame" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate = { "ComponentsThatNeedEndOfFrameUpdate", nullptr, (EPropertyFlags)0x0044008400002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ComponentsThatNeedEndOfFrameUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread_Inner = { "ComponentsThatNeedEndOfFrameUpdate_OnGameThread", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread_MetaData[] = {
		{ "Comment", "/** Array of components that need game thread updates at the end of the frame */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of components that need game thread updates at the end of the frame" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread = { "ComponentsThatNeedEndOfFrameUpdate_OnGameThread", nullptr, (EPropertyFlags)0x0044008400002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ComponentsThatNeedEndOfFrameUpdate_OnGameThread), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_Inner = { "SelectedLevels", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_MetaData[] = {
		{ "Comment", "/** Array of selected levels currently in this world. Not serialized to disk to avoid hard references.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of selected levels currently in this world. Not serialized to disk to avoid hard references." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels = { "SelectedLevels", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, SelectedLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition_MetaData[] = {
		{ "Comment", "/** All levels information from which our world is composed */" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "All levels information from which our world is composed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition = { "WorldComposition", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, WorldComposition), Z_Construct_UClass_UWorldComposition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ContentBundleManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ContentBundleManager = { "ContentBundleManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, ContentBundleManager), Z_Construct_UClass_UContentBundleManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ContentBundleManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ContentBundleManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool = { "PSCPool", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorld, PSCPool), Z_Construct_UScriptStruct_FWorldPSCPool, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool_MetaData)) }; // 1005167841
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorld_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_Layers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ServerStreamingLevelsVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_GameState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_AISystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_Levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_Levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_LWILastAssignedUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedPreEndOfFrameSync_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedPreEndOfFrameSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ComponentsThatNeedEndOfFrameUpdate_OnGameThread,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ContentBundleManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorld>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorld_Statics::ClassParams = {
		&UWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorld()
	{
		if (!Z_Registration_Info_UClass_UWorld.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorld.OuterSingleton, Z_Construct_UClass_UWorld_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorld.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorld>()
	{
		return UWorld::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorld);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorld)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_Statics::ScriptStructInfo[] = {
		{ FLevelViewportInfo::StaticStruct, Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewStructOps, TEXT("LevelViewportInfo"), &Z_Registration_Info_UScriptStruct_LevelViewportInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelViewportInfo), 1824706735U) },
		{ FStartPhysicsTickFunction::StaticStruct, Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::NewStructOps, TEXT("StartPhysicsTickFunction"), &Z_Registration_Info_UScriptStruct_StartPhysicsTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStartPhysicsTickFunction), 3221725576U) },
		{ FEndPhysicsTickFunction::StaticStruct, Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::NewStructOps, TEXT("EndPhysicsTickFunction"), &Z_Registration_Info_UScriptStruct_EndPhysicsTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEndPhysicsTickFunction), 3112524793U) },
		{ FLevelCollection::StaticStruct, Z_Construct_UScriptStruct_FLevelCollection_Statics::NewStructOps, TEXT("LevelCollection"), &Z_Registration_Info_UScriptStruct_LevelCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelCollection), 2829111048U) },
		{ FStreamingLevelsToConsider::StaticStruct, Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics::NewStructOps, TEXT("StreamingLevelsToConsider"), &Z_Registration_Info_UScriptStruct_StreamingLevelsToConsider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamingLevelsToConsider), 4156281636U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorld, UWorld::StaticClass, TEXT("UWorld"), &Z_Registration_Info_UClass_UWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorld), 88152677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_3623609091(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
