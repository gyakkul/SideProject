// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MassZoneGraphPathFollowTask.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/MassMovementTypes.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphPathFollowTask() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyleRef();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStructRef();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphTargetLocation;
class UScriptStruct* FMassZoneGraphTargetLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphTargetLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphTargetLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphTargetLocation"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphTargetLocation.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphTargetLocation>()
{
	return FMassZoneGraphTargetLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphPathFollowTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphTargetLocation>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassZoneGraphTargetLocation",
		sizeof(FMassZoneGraphTargetLocation),
		alignof(FMassZoneGraphTargetLocation),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphTargetLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphTargetLocation.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphTargetLocation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTaskInstanceData;
class UScriptStruct* FMassZoneGraphPathFollowTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphPathFollowTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTaskInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphPathFollowTaskInstanceData>()
{
	return FMassZoneGraphPathFollowTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Follows a path long the current lane to a specified point.\n */" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphPathFollowTask.h" },
		{ "ToolTip", "Follows a path long the current lane to a specified point." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphPathFollowTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "BaseStruct", "/Script/MassAIBehavior.MassZoneGraphTargetLocation" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphPathFollowTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphPathFollowTaskInstanceData, TargetLocation), Z_Construct_UScriptStruct_FStateTreeStructRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_TargetLocation_MetaData)) }; // 385890286
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_MovementStyle_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphPathFollowTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_MovementStyle = { "MovementStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphPathFollowTaskInstanceData, MovementStyle), Z_Construct_UScriptStruct_FMassMovementStyleRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_MovementStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_MovementStyle_MetaData)) }; // 1861884141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_SpeedScale_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphPathFollowTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphPathFollowTaskInstanceData, SpeedScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_SpeedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_SpeedScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_MovementStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewProp_SpeedScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassZoneGraphPathFollowTaskInstanceData",
		sizeof(FMassZoneGraphPathFollowTaskInstanceData),
		alignof(FMassZoneGraphPathFollowTaskInstanceData),
		Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphPathFollowTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassZoneGraphPathFollowTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTask;
class UScriptStruct* FMassZoneGraphPathFollowTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphPathFollowTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTask.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphPathFollowTask>()
{
	return FMassZoneGraphPathFollowTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZG Path Follow" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphPathFollowTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphPathFollowTask>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassZoneGraphPathFollowTask",
		sizeof(FMassZoneGraphPathFollowTask),
		alignof(FMassZoneGraphPathFollowTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTask.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphPathFollowTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphPathFollowTask_h_Statics::ScriptStructInfo[] = {
		{ FMassZoneGraphTargetLocation::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation_Statics::NewStructOps, TEXT("MassZoneGraphTargetLocation"), &Z_Registration_Info_UScriptStruct_MassZoneGraphTargetLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphTargetLocation), 774941347U) },
		{ FMassZoneGraphPathFollowTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTaskInstanceData_Statics::NewStructOps, TEXT("MassZoneGraphPathFollowTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphPathFollowTaskInstanceData), 2352850507U) },
		{ FMassZoneGraphPathFollowTask::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphPathFollowTask_Statics::NewStructOps, TEXT("MassZoneGraphPathFollowTask"), &Z_Registration_Info_UScriptStruct_MassZoneGraphPathFollowTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphPathFollowTask), 3877489380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphPathFollowTask_h_1015978280(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphPathFollowTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphPathFollowTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
