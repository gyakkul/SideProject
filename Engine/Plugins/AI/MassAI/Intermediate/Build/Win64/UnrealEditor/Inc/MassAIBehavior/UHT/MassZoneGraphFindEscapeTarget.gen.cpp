// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MassZoneGraphFindEscapeTarget.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
#include "Tasks/MassZoneGraphPathFollowTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphFindEscapeTarget() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTargetInstanceData;
class UScriptStruct* FMassZoneGraphFindEscapeTargetInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTargetInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTargetInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphFindEscapeTargetInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTargetInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphFindEscapeTargetInstanceData>()
{
	return FMassZoneGraphFindEscapeTargetInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscapeTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EscapeTargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Updates TargetLocation to a escape target based on the agents current location on ZoneGraph, and disturbance annotation.\n */" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindEscapeTarget.h" },
		{ "ToolTip", "Updates TargetLocation to a escape target based on the agents current location on ZoneGraph, and disturbance annotation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphFindEscapeTargetInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::NewProp_EscapeTargetLocation_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindEscapeTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::NewProp_EscapeTargetLocation = { "EscapeTargetLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphFindEscapeTargetInstanceData, EscapeTargetLocation), Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::NewProp_EscapeTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::NewProp_EscapeTargetLocation_MetaData)) }; // 774941347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::NewProp_EscapeTargetLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassZoneGraphFindEscapeTargetInstanceData",
		sizeof(FMassZoneGraphFindEscapeTargetInstanceData),
		alignof(FMassZoneGraphFindEscapeTargetInstanceData),
		Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTargetInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTargetInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTargetInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphFindEscapeTarget>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassZoneGraphFindEscapeTarget cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTarget;
class UScriptStruct* FMassZoneGraphFindEscapeTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphFindEscapeTarget"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTarget.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphFindEscapeTarget>()
{
	return FMassZoneGraphFindEscapeTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisturbanceAnnotationTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisturbanceAnnotationTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZG Find Escape Target" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindEscapeTarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphFindEscapeTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::NewProp_DisturbanceAnnotationTag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindEscapeTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::NewProp_DisturbanceAnnotationTag = { "DisturbanceAnnotationTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphFindEscapeTarget, DisturbanceAnnotationTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::NewProp_DisturbanceAnnotationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::NewProp_DisturbanceAnnotationTag_MetaData)) }; // 1504622355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::NewProp_DisturbanceAnnotationTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassZoneGraphFindEscapeTarget",
		sizeof(FMassZoneGraphFindEscapeTarget),
		alignof(FMassZoneGraphFindEscapeTarget),
		Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTarget.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindEscapeTarget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindEscapeTarget_h_Statics::ScriptStructInfo[] = {
		{ FMassZoneGraphFindEscapeTargetInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTargetInstanceData_Statics::NewStructOps, TEXT("MassZoneGraphFindEscapeTargetInstanceData"), &Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTargetInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphFindEscapeTargetInstanceData), 3302773091U) },
		{ FMassZoneGraphFindEscapeTarget::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphFindEscapeTarget_Statics::NewStructOps, TEXT("MassZoneGraphFindEscapeTarget"), &Z_Registration_Info_UScriptStruct_MassZoneGraphFindEscapeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphFindEscapeTarget), 4143203050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindEscapeTarget_h_1738094869(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindEscapeTarget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphFindEscapeTarget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
