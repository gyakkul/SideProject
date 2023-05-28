// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MassLookAtTask.h"
#include "MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLookAtTask() {}
// Cross Module References
	MASSAIBEHAVIOR_API UEnum* Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode();
	MASSAIBEHAVIOR_API UEnum* Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTask();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLookAtTaskInstanceData;
class UScriptStruct* FMassLookAtTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLookAtTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLookAtTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassLookAtTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassLookAtTaskInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassLookAtTaskInstanceData>()
{
	return FMassLookAtTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Task to assign a LookAt target for mass processing\n */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "ToolTip", "Task to assign a LookAt target for mass processing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLookAtTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_TargetEntity_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Entity to set as the target for the LookAt behavior. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "Optional", "" },
		{ "ToolTip", "Entity to set as the target for the LookAt behavior." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_TargetEntity = { "TargetEntity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtTaskInstanceData, TargetEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_TargetEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_TargetEntity_MetaData)) }; // 2284468209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Delay before the task ends. Default (0 or any negative) will run indefinitely so it requires a transition in the state tree to stop it. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "ToolTip", "Delay before the task ends. Default (0 or any negative) will run indefinitely so it requires a transition in the state tree to stop it." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtTaskInstanceData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** Accumulated time used to stop task if duration is set */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "ToolTip", "Accumulated time used to stop task if duration is set" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtTaskInstanceData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_TargetEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassLookAtTaskInstanceData",
		sizeof(FMassLookAtTaskInstanceData),
		alignof(FMassLookAtTaskInstanceData),
		Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLookAtTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLookAtTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLookAtTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassLookAtTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassLookAtTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLookAtTask;
class UScriptStruct* FMassLookAtTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLookAtTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLookAtTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLookAtTask, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassLookAtTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassLookAtTask.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassLookAtTask>()
{
	return FMassLookAtTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLookAtTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAtMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGazeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomGazeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RandomGazeMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomGazeYawVariation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGazeYawVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomGazePitchVariation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGazePitchVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomGazeEntities_MetaData[];
#endif
		static void NewProp_bRandomGazeEntities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomGazeEntities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTask_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Mass LookAt Task" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLookAtTask>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_LookAtMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_LookAtMode_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Look At Mode */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "ToolTip", "Look At Mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_LookAtMode = { "LookAtMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtTask, LookAtMode), Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_LookAtMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_LookAtMode_MetaData)) }; // 1706356185
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeMode_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Random gaze Mode */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "ToolTip", "Random gaze Mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeMode = { "RandomGazeMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtTask, RandomGazeMode), Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeMode_MetaData)) }; // 2681389148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeYawVariation_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Random gaze yaw angle added to the look direction determined by the look at mode. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "ToolTip", "Random gaze yaw angle added to the look direction determined by the look at mode." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeYawVariation = { "RandomGazeYawVariation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtTask, RandomGazeYawVariation), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeYawVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeYawVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazePitchVariation_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Random gaze pitch angle added to the look direction determined by the look at mode. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "ToolTip", "Random gaze pitch angle added to the look direction determined by the look at mode." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazePitchVariation = { "RandomGazePitchVariation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtTask, RandomGazePitchVariation), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazePitchVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazePitchVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_bRandomGazeEntities_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If true, allow random gaze to look at other entities too. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassLookAtTask.h" },
		{ "ToolTip", "If true, allow random gaze to look at other entities too." },
	};
#endif
	void Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_bRandomGazeEntities_SetBit(void* Obj)
	{
		((FMassLookAtTask*)Obj)->bRandomGazeEntities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_bRandomGazeEntities = { "bRandomGazeEntities", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassLookAtTask), &Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_bRandomGazeEntities_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_bRandomGazeEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_bRandomGazeEntities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassLookAtTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_LookAtMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_LookAtMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazeYawVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_RandomGazePitchVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewProp_bRandomGazeEntities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLookAtTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassLookAtTask",
		sizeof(FMassLookAtTask),
		alignof(FMassLookAtTask),
		Z_Construct_UScriptStruct_FMassLookAtTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTask()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLookAtTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLookAtTask.InnerSingleton, Z_Construct_UScriptStruct_FMassLookAtTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLookAtTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassLookAtTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassLookAtTask_h_Statics::ScriptStructInfo[] = {
		{ FMassLookAtTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassLookAtTaskInstanceData_Statics::NewStructOps, TEXT("MassLookAtTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassLookAtTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLookAtTaskInstanceData), 1797468490U) },
		{ FMassLookAtTask::StaticStruct, Z_Construct_UScriptStruct_FMassLookAtTask_Statics::NewStructOps, TEXT("MassLookAtTask"), &Z_Registration_Info_UScriptStruct_MassLookAtTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLookAtTask), 1799893246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassLookAtTask_h_807568108(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassLookAtTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassLookAtTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
