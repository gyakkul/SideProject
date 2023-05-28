// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionActorContainerID() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorContainerID;
class UScriptStruct* FActorContainerID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorContainerID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorContainerID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorContainerID, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorContainerID"));
	}
	return Z_Registration_Info_UScriptStruct_ActorContainerID.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorContainerID>()
{
	return FActorContainerID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorContainerID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorContainerID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionActorContainerID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorContainerID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorContainerID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorContainerID_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionActorContainerID.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FActorContainerID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorContainerID, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorContainerID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerID_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorContainerID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorContainerID_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorContainerID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorContainerID",
		sizeof(FActorContainerID),
		alignof(FActorContainerID),
		Z_Construct_UScriptStruct_FActorContainerID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorContainerID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorContainerID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorContainerID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorContainerID.InnerSingleton, Z_Construct_UScriptStruct_FActorContainerID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorContainerID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_Statics::ScriptStructInfo[] = {
		{ FActorContainerID::StaticStruct, Z_Construct_UScriptStruct_FActorContainerID_Statics::NewStructOps, TEXT("ActorContainerID"), &Z_Registration_Info_UScriptStruct_ActorContainerID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorContainerID), 1914037964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_3315845518(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorContainerID_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
