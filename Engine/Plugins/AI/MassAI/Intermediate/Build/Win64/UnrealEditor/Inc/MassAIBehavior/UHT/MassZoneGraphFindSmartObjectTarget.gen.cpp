// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MassZoneGraphFindSmartObjectTarget.h"
#include "SmartObjectRuntime.h"
#include "Tasks/MassZoneGraphPathFollowTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphFindSmartObjectTarget() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTargetInstanceData;
class UScriptStruct* FMassZoneGraphFindSmartObjectTargetInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTargetInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTargetInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphFindSmartObjectTargetInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTargetInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphFindSmartObjectTargetInstanceData>()
{
	return FMassZoneGraphFindSmartObjectTargetInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimedSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimedSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Computes move target to a smart object based on current location on ZoneGraph.\n*/" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindSmartObjectTarget.h" },
		{ "ToolTip", "Computes move target to a smart object based on current location on ZoneGraph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphFindSmartObjectTargetInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_ClaimedSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindSmartObjectTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_ClaimedSlot = { "ClaimedSlot", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphFindSmartObjectTargetInstanceData, ClaimedSlot), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_ClaimedSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_ClaimedSlot_MetaData)) }; // 931449528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_SmartObjectLocation_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindSmartObjectTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_SmartObjectLocation = { "SmartObjectLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphFindSmartObjectTargetInstanceData, SmartObjectLocation), Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_SmartObjectLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_SmartObjectLocation_MetaData)) }; // 774941347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_ClaimedSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewProp_SmartObjectLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassZoneGraphFindSmartObjectTargetInstanceData",
		sizeof(FMassZoneGraphFindSmartObjectTargetInstanceData),
		alignof(FMassZoneGraphFindSmartObjectTargetInstanceData),
		Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTargetInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTargetInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTargetInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphFindSmartObjectTarget>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassZoneGraphFindSmartObjectTarget cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTarget;
class UScriptStruct* FMassZoneGraphFindSmartObjectTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphFindSmartObjectTarget"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTarget.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphFindSmartObjectTarget>()
{
	return FMassZoneGraphFindSmartObjectTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZG Find Smart Object Target" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindSmartObjectTarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphFindSmartObjectTarget>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassZoneGraphFindSmartObjectTarget",
		sizeof(FMassZoneGraphFindSmartObjectTarget),
		alignof(FMassZoneGraphFindSmartObjectTarget),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTarget.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindSmartObjectTarget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindSmartObjectTarget_h_Statics::ScriptStructInfo[] = {
		{ FMassZoneGraphFindSmartObjectTargetInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTargetInstanceData_Statics::NewStructOps, TEXT("MassZoneGraphFindSmartObjectTargetInstanceData"), &Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTargetInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphFindSmartObjectTargetInstanceData), 2330734137U) },
		{ FMassZoneGraphFindSmartObjectTarget::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphFindSmartObjectTarget_Statics::NewStructOps, TEXT("MassZoneGraphFindSmartObjectTarget"), &Z_Registration_Info_UScriptStruct_MassZoneGraphFindSmartObjectTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphFindSmartObjectTarget), 3562583971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindSmartObjectTarget_h_3932253404(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindSmartObjectTarget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindSmartObjectTarget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
