// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassProcessingTypes.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassProcessingTypes() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
	MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EMassProcessingPhase();
	MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassProcessingContext();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassRuntimePipeline();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FProcessorAuxDataBase();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProcessorExecutionFlags;
	static UEnum* EProcessorExecutionFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProcessorExecutionFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProcessorExecutionFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("EProcessorExecutionFlags"));
		}
		return Z_Registration_Info_UEnum_EProcessorExecutionFlags.OuterSingleton;
	}
	template<> MASSENTITY_API UEnum* StaticEnum<EProcessorExecutionFlags>()
	{
		return EProcessorExecutionFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics::Enumerators[] = {
		{ "EProcessorExecutionFlags::None", (int64)EProcessorExecutionFlags::None },
		{ "EProcessorExecutionFlags::Standalone", (int64)EProcessorExecutionFlags::Standalone },
		{ "EProcessorExecutionFlags::Server", (int64)EProcessorExecutionFlags::Server },
		{ "EProcessorExecutionFlags::Client", (int64)EProcessorExecutionFlags::Client },
		{ "EProcessorExecutionFlags::Editor", (int64)EProcessorExecutionFlags::Editor },
		{ "EProcessorExecutionFlags::AllNetModes", (int64)EProcessorExecutionFlags::AllNetModes },
		{ "EProcessorExecutionFlags::All", (int64)EProcessorExecutionFlags::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics::Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "EProcessorExecutionFlags::All" },
		{ "AllNetModes.Hidden", "" },
		{ "AllNetModes.Name", "EProcessorExecutionFlags::AllNetModes" },
		{ "Bitflags", "" },
		{ "Client.Name", "EProcessorExecutionFlags::Client" },
		{ "Editor.Name", "EProcessorExecutionFlags::Editor" },
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EProcessorExecutionFlags::None" },
		{ "Server.Name", "EProcessorExecutionFlags::Server" },
		{ "Standalone.Name", "EProcessorExecutionFlags::Standalone" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		"EProcessorExecutionFlags",
		"EProcessorExecutionFlags",
		Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags()
	{
		if (!Z_Registration_Info_UEnum_EProcessorExecutionFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProcessorExecutionFlags.InnerSingleton, Z_Construct_UEnum_MassEntity_EProcessorExecutionFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProcessorExecutionFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProcessorAuxDataBase;
class UScriptStruct* FProcessorAuxDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProcessorAuxDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProcessorAuxDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcessorAuxDataBase, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("ProcessorAuxDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_ProcessorAuxDataBase.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FProcessorAuxDataBase>()
{
	return FProcessorAuxDataBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcessorAuxDataBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"ProcessorAuxDataBase",
		sizeof(FProcessorAuxDataBase),
		alignof(FProcessorAuxDataBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcessorAuxDataBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ProcessorAuxDataBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProcessorAuxDataBase.InnerSingleton, Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProcessorAuxDataBase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassProcessingContext;
class UScriptStruct* FMassProcessingContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessingContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassProcessingContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassProcessingContext, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassProcessingContext"));
	}
	return Z_Registration_Info_UScriptStruct_MassProcessingContext.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassProcessingContext>()
{
	return FMassProcessingContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassProcessingContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuxData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlushCommandBuffer_MetaData[];
#endif
		static void NewProp_bFlushCommandBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushCommandBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessingContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassProcessingContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassProcessingContext, DeltaSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_AuxData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_AuxData = { "AuxData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassProcessingContext, AuxData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_AuxData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_AuxData_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_bFlushCommandBuffer_MetaData[] = {
		{ "Comment", "/** \n\x09 * If set to \"true\" the MassExecutor will flush commands at the end of given execution function. \n\x09 * If \"false\" the caller is responsible for manually flushing the commands.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
		{ "ToolTip", "If set to \"true\" the MassExecutor will flush commands at the end of given execution function.\nIf \"false\" the caller is responsible for manually flushing the commands." },
	};
#endif
	void Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_bFlushCommandBuffer_SetBit(void* Obj)
	{
		((FMassProcessingContext*)Obj)->bFlushCommandBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_bFlushCommandBuffer = { "bFlushCommandBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassProcessingContext), &Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_bFlushCommandBuffer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_bFlushCommandBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_bFlushCommandBuffer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassProcessingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_AuxData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewProp_bFlushCommandBuffer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassProcessingContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassProcessingContext",
		sizeof(FMassProcessingContext),
		alignof(FMassProcessingContext),
		Z_Construct_UScriptStruct_FMassProcessingContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessingContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassProcessingContext()
	{
		if (!Z_Registration_Info_UScriptStruct_MassProcessingContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassProcessingContext.InnerSingleton, Z_Construct_UScriptStruct_FMassProcessingContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassProcessingContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassRuntimePipeline;
class UScriptStruct* FMassRuntimePipeline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassRuntimePipeline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassRuntimePipeline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassRuntimePipeline, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassRuntimePipeline"));
	}
	return Z_Registration_Info_UScriptStruct_MassRuntimePipeline.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassRuntimePipeline>()
{
	return FMassRuntimePipeline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Processors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Processors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Processors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *  Runtime-usable array of MassProcessor copies\n */" },
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
		{ "ToolTip", "Runtime-usable array of MassProcessor copies" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassRuntimePipeline>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewProp_Processors_Inner = { "Processors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewProp_Processors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewProp_Processors = { "Processors", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassRuntimePipeline, Processors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewProp_Processors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewProp_Processors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewProp_Processors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewProp_Processors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassRuntimePipeline",
		sizeof(FMassRuntimePipeline),
		alignof(FMassRuntimePipeline),
		Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassRuntimePipeline()
	{
		if (!Z_Registration_Info_UScriptStruct_MassRuntimePipeline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassRuntimePipeline.InnerSingleton, Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassRuntimePipeline.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassProcessingPhase;
	static UEnum* EMassProcessingPhase_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("EMassProcessingPhase"));
		}
		return Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton;
	}
	template<> MASSENTITY_API UEnum* StaticEnum<EMassProcessingPhase>()
	{
		return EMassProcessingPhase_StaticEnum();
	}
	struct Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics::Enumerators[] = {
		{ "EMassProcessingPhase::PrePhysics", (int64)EMassProcessingPhase::PrePhysics },
		{ "EMassProcessingPhase::StartPhysics", (int64)EMassProcessingPhase::StartPhysics },
		{ "EMassProcessingPhase::DuringPhysics", (int64)EMassProcessingPhase::DuringPhysics },
		{ "EMassProcessingPhase::EndPhysics", (int64)EMassProcessingPhase::EndPhysics },
		{ "EMassProcessingPhase::PostPhysics", (int64)EMassProcessingPhase::PostPhysics },
		{ "EMassProcessingPhase::FrameEnd", (int64)EMassProcessingPhase::FrameEnd },
		{ "EMassProcessingPhase::MAX", (int64)EMassProcessingPhase::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics::Enum_MetaDataParams[] = {
		{ "DuringPhysics.Name", "EMassProcessingPhase::DuringPhysics" },
		{ "EndPhysics.Name", "EMassProcessingPhase::EndPhysics" },
		{ "FrameEnd.Name", "EMassProcessingPhase::FrameEnd" },
		{ "MAX.Name", "EMassProcessingPhase::MAX" },
		{ "ModuleRelativePath", "Public/MassProcessingTypes.h" },
		{ "PostPhysics.Name", "EMassProcessingPhase::PostPhysics" },
		{ "PrePhysics.Name", "EMassProcessingPhase::PrePhysics" },
		{ "StartPhysics.Name", "EMassProcessingPhase::StartPhysics" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		"EMassProcessingPhase",
		"EMassProcessingPhase",
		Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassEntity_EMassProcessingPhase()
	{
		if (!Z_Registration_Info_UEnum_EMassProcessingPhase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassProcessingPhase.InnerSingleton, Z_Construct_UEnum_MassEntity_EMassProcessingPhase_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassProcessingPhase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_Statics::EnumInfo[] = {
		{ EProcessorExecutionFlags_StaticEnum, TEXT("EProcessorExecutionFlags"), &Z_Registration_Info_UEnum_EProcessorExecutionFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1116217513U) },
		{ EMassProcessingPhase_StaticEnum, TEXT("EMassProcessingPhase"), &Z_Registration_Info_UEnum_EMassProcessingPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2829345331U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_Statics::ScriptStructInfo[] = {
		{ FProcessorAuxDataBase::StaticStruct, Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics::NewStructOps, TEXT("ProcessorAuxDataBase"), &Z_Registration_Info_UScriptStruct_ProcessorAuxDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProcessorAuxDataBase), 1607810215U) },
		{ FMassProcessingContext::StaticStruct, Z_Construct_UScriptStruct_FMassProcessingContext_Statics::NewStructOps, TEXT("MassProcessingContext"), &Z_Registration_Info_UScriptStruct_MassProcessingContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassProcessingContext), 2837538714U) },
		{ FMassRuntimePipeline::StaticStruct, Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics::NewStructOps, TEXT("MassRuntimePipeline"), &Z_Registration_Info_UScriptStruct_MassRuntimePipeline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassRuntimePipeline), 113845191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_34965757(TEXT("/Script/MassEntity"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
