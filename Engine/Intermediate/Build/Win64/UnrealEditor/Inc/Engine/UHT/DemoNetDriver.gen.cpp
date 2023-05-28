// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoNetDriver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMulticastRecordOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo;
class UScriptStruct* FRollbackNetStartupActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RollbackNetStartupActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRollbackNetStartupActorInfo>()
{
	return FRollbackNetStartupActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Archetype_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Archetype;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about net startup actors that need to be rolled back by being destroyed and re-created */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Information about net startup actors that need to be rolled back by being destroyed and re-created" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype = { "Archetype", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Archetype), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner = { "ObjReferences", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences = { "ObjReferences", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRollbackNetStartupActorInfo, ObjReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RollbackNetStartupActorInfo",
		sizeof(FRollbackNetStartupActorInfo),
		alignof(FRollbackNetStartupActorInfo),
		Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MulticastRecordOptions;
class UScriptStruct* FMulticastRecordOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MulticastRecordOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MulticastRecordOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMulticastRecordOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MulticastRecordOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MulticastRecordOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMulticastRecordOptions>()
{
	return FMulticastRecordOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuncPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FuncPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServerSkip_MetaData[];
#endif
		static void NewProp_bServerSkip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerSkip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientSkip_MetaData[];
#endif
		static void NewProp_bClientSkip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientSkip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMulticastRecordOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName = { "FuncPathName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMulticastRecordOptions, FuncPathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_SetBit(void* Obj)
	{
		((FMulticastRecordOptions*)Obj)->bServerSkip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip = { "bServerSkip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMulticastRecordOptions), &Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_SetBit(void* Obj)
	{
		((FMulticastRecordOptions*)Obj)->bClientSkip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip = { "bClientSkip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMulticastRecordOptions), &Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MulticastRecordOptions",
		sizeof(FMulticastRecordOptions),
		alignof(FMulticastRecordOptions),
		Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMulticastRecordOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MulticastRecordOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MulticastRecordOptions.InnerSingleton, Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MulticastRecordOptions.InnerSingleton;
	}
	void UDemoNetDriver::StaticRegisterNativesUDemoNetDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDemoNetDriver);
	UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister()
	{
		return UDemoNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UDemoNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollbackNetStartupActors_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RollbackNetStartupActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollbackNetStartupActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RollbackNetStartupActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointSaveMaxMSPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckpointSaveMaxMSPerFrame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MulticastRecordOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MulticastRecordOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MulticastRecordOptions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpectatorControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpectatorControllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simulated network driver for recording and playing back game sessions.\n */" },
		{ "IncludePath", "Engine/DemoNetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simulated network driver for recording and playing back game sessions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp = { "RollbackNetStartupActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, METADATA_PARAMS(nullptr, 0) }; // 3894622578
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp = { "RollbackNetStartupActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData[] = {
		{ "Comment", "/** \n\x09 * Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned \n\x09 * NOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned\nNOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors = { "RollbackNetStartupActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDemoNetDriver, RollbackNetStartupActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData)) }; // 3894622578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\n\x09 * See also demo.CheckpointSaveMaxMSPerFrameOverride.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\nSee also demo.CheckpointSaveMaxMSPerFrameOverride." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame = { "CheckpointSaveMaxMSPerFrame", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDemoNetDriver, CheckpointSaveMaxMSPerFrame), METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_Inner = { "MulticastRecordOptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMulticastRecordOptions, METADATA_PARAMS(nullptr, 0) }; // 1969430213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_MetaData[] = {
		{ "Comment", "/** Config data for multicast RPCs we might want to skip recording. */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Config data for multicast RPCs we might want to skip recording." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions = { "MulticastRecordOptions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDemoNetDriver, MulticastRecordOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_MetaData)) }; // 1969430213
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_Inner = { "SpectatorControllers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_MetaData[] = {
		{ "Comment", "/** An array of all the spectator controllers (the main one and all splitscreen ones) that currently exist */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "An array of all the spectator controllers (the main one and all splitscreen ones) that currently exist" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers = { "SpectatorControllers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDemoNetDriver, SpectatorControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoNetDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams = {
		&UDemoNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoNetDriver()
	{
		if (!Z_Registration_Info_UClass_UDemoNetDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDemoNetDriver.OuterSingleton, Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDemoNetDriver.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDemoNetDriver>()
	{
		return UDemoNetDriver::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetDriver)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ScriptStructInfo[] = {
		{ FRollbackNetStartupActorInfo::StaticStruct, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewStructOps, TEXT("RollbackNetStartupActorInfo"), &Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRollbackNetStartupActorInfo), 3894622578U) },
		{ FMulticastRecordOptions::StaticStruct, Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewStructOps, TEXT("MulticastRecordOptions"), &Z_Registration_Info_UScriptStruct_MulticastRecordOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMulticastRecordOptions), 1969430213U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDemoNetDriver, UDemoNetDriver::StaticClass, TEXT("UDemoNetDriver"), &Z_Registration_Info_UClass_UDemoNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDemoNetDriver), 3870618861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_1437809123(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
