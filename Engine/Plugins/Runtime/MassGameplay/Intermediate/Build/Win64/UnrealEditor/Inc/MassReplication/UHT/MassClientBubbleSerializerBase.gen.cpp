// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassClientBubbleSerializerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassClientBubbleSerializerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSubsystem_NoRegister();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References

static_assert(std::is_polymorphic<FMassClientBubbleSerializerBase>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FMassClientBubbleSerializerBase cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassClientBubbleSerializerBase;
class UScriptStruct* FMassClientBubbleSerializerBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassClientBubbleSerializerBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassClientBubbleSerializerBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassClientBubbleSerializerBase"));
	}
	return Z_Registration_Info_UScriptStruct_MassClientBubbleSerializerBase.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassClientBubbleSerializerBase>()
{
	return FMassClientBubbleSerializerBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnerSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicationSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Classes derived from this will contain the IClientBubbleHandlerInterface derived class as well as the actual Fast Array.\n * This class mainly provides the base automation with the IClientBubbleHandlerInterface\n */" },
		{ "ModuleRelativePath", "Public/MassClientBubbleSerializerBase.h" },
		{ "ToolTip", "Classes derived from this will contain the IClientBubbleHandlerInterface derived class as well as the actual Fast Array.\nThis class mainly provides the base automation with the IClientBubbleHandlerInterface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassClientBubbleSerializerBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassClientBubbleSerializerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassClientBubbleSerializerBase, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_SpawnerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassClientBubbleSerializerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_SpawnerSubsystem = { "SpawnerSubsystem", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassClientBubbleSerializerBase, SpawnerSubsystem), Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_SpawnerSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_SpawnerSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_ReplicationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassClientBubbleSerializerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_ReplicationSubsystem = { "ReplicationSubsystem", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassClientBubbleSerializerBase, ReplicationSubsystem), Z_Construct_UClass_UMassReplicationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_ReplicationSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_ReplicationSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_SpawnerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewProp_ReplicationSubsystem,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"MassClientBubbleSerializerBase",
		sizeof(FMassClientBubbleSerializerBase),
		alignof(FMassClientBubbleSerializerBase),
		Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase()
	{
		if (!Z_Registration_Info_UScriptStruct_MassClientBubbleSerializerBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassClientBubbleSerializerBase.InnerSingleton, Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassClientBubbleSerializerBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleSerializerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleSerializerBase_h_Statics::ScriptStructInfo[] = {
		{ FMassClientBubbleSerializerBase::StaticStruct, Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase_Statics::NewStructOps, TEXT("MassClientBubbleSerializerBase"), &Z_Registration_Info_UScriptStruct_MassClientBubbleSerializerBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassClientBubbleSerializerBase), 2581891492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleSerializerBase_h_2787029292(TEXT("/Script/MassReplication"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleSerializerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleSerializerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
