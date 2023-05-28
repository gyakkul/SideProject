// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/Tasks/MassZoneGraphFindWanderTarget.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
#include "Tasks/MassZoneGraphPathFollowTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphFindWanderTarget() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTargetInstanceData;
class UScriptStruct* FMassZoneGraphFindWanderTargetInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTargetInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTargetInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassZoneGraphFindWanderTargetInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTargetInstanceData.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassZoneGraphFindWanderTargetInstanceData>()
{
	return FMassZoneGraphFindWanderTargetInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WanderTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WanderTargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Updates TargetLocation to a wander target based on the agents current location on ZoneGraph.\n */" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindWanderTarget.h" },
		{ "ToolTip", "Updates TargetLocation to a wander target based on the agents current location on ZoneGraph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphFindWanderTargetInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::NewProp_WanderTargetLocation_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindWanderTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::NewProp_WanderTargetLocation = { "WanderTargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphFindWanderTargetInstanceData, WanderTargetLocation), Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::NewProp_WanderTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::NewProp_WanderTargetLocation_MetaData)) }; // 774941347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::NewProp_WanderTargetLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		&NewStructOps,
		"MassZoneGraphFindWanderTargetInstanceData",
		sizeof(FMassZoneGraphFindWanderTargetInstanceData),
		alignof(FMassZoneGraphFindWanderTargetInstanceData),
		Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTargetInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTargetInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTargetInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphFindWanderTarget>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassZoneGraphFindWanderTarget cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTarget;
class UScriptStruct* FMassZoneGraphFindWanderTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassZoneGraphFindWanderTarget"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTarget.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassZoneGraphFindWanderTarget>()
{
	return FMassZoneGraphFindWanderTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAnnotationTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedAnnotationTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZG Find Wander Target" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindWanderTarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphFindWanderTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::NewProp_AllowedAnnotationTags_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphFindWanderTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::NewProp_AllowedAnnotationTags = { "AllowedAnnotationTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphFindWanderTarget, AllowedAnnotationTags), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::NewProp_AllowedAnnotationTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::NewProp_AllowedAnnotationTags_MetaData)) }; // 58618928
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::NewProp_AllowedAnnotationTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassZoneGraphFindWanderTarget",
		sizeof(FMassZoneGraphFindWanderTarget),
		alignof(FMassZoneGraphFindWanderTarget),
		Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTarget.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassZoneGraphFindWanderTarget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassZoneGraphFindWanderTarget_h_Statics::ScriptStructInfo[] = {
		{ FMassZoneGraphFindWanderTargetInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTargetInstanceData_Statics::NewStructOps, TEXT("MassZoneGraphFindWanderTargetInstanceData"), &Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTargetInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphFindWanderTargetInstanceData), 2121210817U) },
		{ FMassZoneGraphFindWanderTarget::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphFindWanderTarget_Statics::NewStructOps, TEXT("MassZoneGraphFindWanderTarget"), &Z_Registration_Info_UScriptStruct_MassZoneGraphFindWanderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphFindWanderTarget), 4104364527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassZoneGraphFindWanderTarget_h_1338284599(TEXT("/Script/MassCrowd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassZoneGraphFindWanderTarget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassZoneGraphFindWanderTarget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
