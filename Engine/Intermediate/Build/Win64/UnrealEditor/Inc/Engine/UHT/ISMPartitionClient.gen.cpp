// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMPartitionClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMPartitionClient() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMClientHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMClientHandle;
class UScriptStruct* FISMClientHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMClientHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMClientHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMClientHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMClientHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ISMClientHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMClientHandle>()
{
	return FISMClientHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMClientHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMClientHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionClient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMClientHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionClient.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMClientHandle, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionClient.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMClientHandle, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMClientHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewProp_Guid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMClientHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ISMClientHandle",
		sizeof(FISMClientHandle),
		alignof(FISMClientHandle),
		Z_Construct_UScriptStruct_FISMClientHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMClientHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMClientHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMClientHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMClientHandle.InnerSingleton, Z_Construct_UScriptStruct_FISMClientHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMClientHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionClient_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionClient_h_Statics::ScriptStructInfo[] = {
		{ FISMClientHandle::StaticStruct, Z_Construct_UScriptStruct_FISMClientHandle_Statics::NewStructOps, TEXT("ISMClientHandle"), &Z_Registration_Info_UScriptStruct_ISMClientHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMClientHandle), 806640764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionClient_h_1573557907(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionClient_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionClient_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
